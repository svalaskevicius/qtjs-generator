// Auto generated file, don't modify.

#ifndef __META_QTCORE_QVARIANT_H
#define __META_QTCORE_QVARIANT_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;


namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qvariant(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QVariant &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QVariant &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QVariant::Type &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QVariant::Type)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QVariant &, const QVariantComparisonHelper &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QVariant &, const QVariantComparisonHelper &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QVariant &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QVariant::Type)>(mopHolder << mopHolder);
}


template <typename D, typename Derived, typename Argument, typename ReturnType>
void buildMetaClass_MetaTypeInvoker(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("invoke", &D::ClassType::invoke);
}


template <typename D, typename Derived, typename Argument, typename ReturnType>
void buildMetaClass_ObjectInvoker(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("invoke", &D::ClassType::invoke);
}


inline QAssociativeIterable::const_iterator& opErAToRWrapper_QAssociativeIterable_const_iterator__opAssign(QAssociativeIterable::const_iterator * self, const QAssociativeIterable::const_iterator& other) {
    return (*self) = other;
}
inline const QVariant opErAToRWrapper_QAssociativeIterable_const_iterator__opDerefer(const QAssociativeIterable::const_iterator * self) {
    return *(*self);
}
inline bool opErAToRWrapper_QAssociativeIterable_const_iterator__opEqual(const QAssociativeIterable::const_iterator * self, const QAssociativeIterable::const_iterator& o) {
    return (*self) == o;
}
inline bool opErAToRWrapper_QAssociativeIterable_const_iterator__opNotEqual(const QAssociativeIterable::const_iterator * self, const QAssociativeIterable::const_iterator& o) {
    return (*self) != o;
}
inline QAssociativeIterable::const_iterator& opErAToRWrapper_QAssociativeIterable_const_iterator__opInc(QAssociativeIterable::const_iterator * self) {
    return ++(*self);
}
inline QAssociativeIterable::const_iterator opErAToRWrapper_QAssociativeIterable_const_iterator__opIncSuffix(QAssociativeIterable::const_iterator * self) {
    return (*self)++;
}
inline QAssociativeIterable::const_iterator& opErAToRWrapper_QAssociativeIterable_const_iterator__opDec(QAssociativeIterable::const_iterator * self) {
    return --(*self);
}
inline QAssociativeIterable::const_iterator opErAToRWrapper_QAssociativeIterable_const_iterator__opDecSuffix(QAssociativeIterable::const_iterator * self) {
    return (*self)--;
}
inline QAssociativeIterable::const_iterator& opErAToRWrapper_QAssociativeIterable_const_iterator__opAddAssign(QAssociativeIterable::const_iterator * self, int j) {
    return (*self) += j;
}
inline QAssociativeIterable::const_iterator& opErAToRWrapper_QAssociativeIterable_const_iterator__opSubAssign(QAssociativeIterable::const_iterator * self, int j) {
    return (*self) -= j;
}
inline QAssociativeIterable::const_iterator opErAToRWrapper_QAssociativeIterable_const_iterator__opAdd(const QAssociativeIterable::const_iterator * self, int j) {
    return (*self) + j;
}
inline QAssociativeIterable::const_iterator opErAToRWrapper_QAssociativeIterable_const_iterator__opSub(const QAssociativeIterable::const_iterator * self, int j) {
    return (*self) - j;
}


template <typename D>
void buildMetaClass_QAssociativeIterable(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    {
        GDefineMetaClass<QAssociativeIterable::const_iterator> _nd = GDefineMetaClass<QAssociativeIterable::const_iterator>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("const_iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QAssociativeIterable::const_iterator&)>();
        _nd.CPGF_MD_TEMPLATE _method("key", &QAssociativeIterable::const_iterator::key);
        _nd.CPGF_MD_TEMPLATE _method("value", &QAssociativeIterable::const_iterator::value);
        _nd.CPGF_MD_TEMPLATE _operator<QAssociativeIterable::const_iterator& (*)(cpgf::GMetaSelf, const QAssociativeIterable::const_iterator&)>(mopHolder = mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAssign", (QAssociativeIterable::const_iterator& (*) (QAssociativeIterable::const_iterator *, const QAssociativeIterable::const_iterator&))&opErAToRWrapper_QAssociativeIterable_const_iterator__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<const QVariant (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (const QVariant (*) (const QAssociativeIterable::const_iterator *))&opErAToRWrapper_QAssociativeIterable_const_iterator__opDerefer, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QAssociativeIterable::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QAssociativeIterable::const_iterator *, const QAssociativeIterable::const_iterator&))&opErAToRWrapper_QAssociativeIterable_const_iterator__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QAssociativeIterable::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QAssociativeIterable::const_iterator *, const QAssociativeIterable::const_iterator&))&opErAToRWrapper_QAssociativeIterable_const_iterator__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QAssociativeIterable::const_iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (QAssociativeIterable::const_iterator& (*) (QAssociativeIterable::const_iterator *))&opErAToRWrapper_QAssociativeIterable_const_iterator__opInc, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QAssociativeIterable::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (QAssociativeIterable::const_iterator (*) (QAssociativeIterable::const_iterator *))&opErAToRWrapper_QAssociativeIterable_const_iterator__opIncSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QAssociativeIterable::const_iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (QAssociativeIterable::const_iterator& (*) (QAssociativeIterable::const_iterator *))&opErAToRWrapper_QAssociativeIterable_const_iterator__opDec, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QAssociativeIterable::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (QAssociativeIterable::const_iterator (*) (QAssociativeIterable::const_iterator *))&opErAToRWrapper_QAssociativeIterable_const_iterator__opDecSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QAssociativeIterable::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (QAssociativeIterable::const_iterator& (*) (QAssociativeIterable::const_iterator *, int))&opErAToRWrapper_QAssociativeIterable_const_iterator__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QAssociativeIterable::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (QAssociativeIterable::const_iterator& (*) (QAssociativeIterable::const_iterator *, int))&opErAToRWrapper_QAssociativeIterable_const_iterator__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QAssociativeIterable::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (QAssociativeIterable::const_iterator (*) (const QAssociativeIterable::const_iterator *, int))&opErAToRWrapper_QAssociativeIterable_const_iterator__opAdd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QAssociativeIterable::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (QAssociativeIterable::const_iterator (*) (const QAssociativeIterable::const_iterator *, int))&opErAToRWrapper_QAssociativeIterable_const_iterator__opSub, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


inline QSequentialIterable::const_iterator& opErAToRWrapper_QSequentialIterable_const_iterator__opAssign(QSequentialIterable::const_iterator * self, const QSequentialIterable::const_iterator& other) {
    return (*self) = other;
}
inline const QVariant opErAToRWrapper_QSequentialIterable_const_iterator__opDerefer(const QSequentialIterable::const_iterator * self) {
    return *(*self);
}
inline bool opErAToRWrapper_QSequentialIterable_const_iterator__opEqual(const QSequentialIterable::const_iterator * self, const QSequentialIterable::const_iterator& o) {
    return (*self) == o;
}
inline bool opErAToRWrapper_QSequentialIterable_const_iterator__opNotEqual(const QSequentialIterable::const_iterator * self, const QSequentialIterable::const_iterator& o) {
    return (*self) != o;
}
inline QSequentialIterable::const_iterator& opErAToRWrapper_QSequentialIterable_const_iterator__opInc(QSequentialIterable::const_iterator * self) {
    return ++(*self);
}
inline QSequentialIterable::const_iterator opErAToRWrapper_QSequentialIterable_const_iterator__opIncSuffix(QSequentialIterable::const_iterator * self) {
    return (*self)++;
}
inline QSequentialIterable::const_iterator& opErAToRWrapper_QSequentialIterable_const_iterator__opDec(QSequentialIterable::const_iterator * self) {
    return --(*self);
}
inline QSequentialIterable::const_iterator opErAToRWrapper_QSequentialIterable_const_iterator__opDecSuffix(QSequentialIterable::const_iterator * self) {
    return (*self)--;
}
inline QSequentialIterable::const_iterator& opErAToRWrapper_QSequentialIterable_const_iterator__opAddAssign(QSequentialIterable::const_iterator * self, int j) {
    return (*self) += j;
}
inline QSequentialIterable::const_iterator& opErAToRWrapper_QSequentialIterable_const_iterator__opSubAssign(QSequentialIterable::const_iterator * self, int j) {
    return (*self) -= j;
}
inline QSequentialIterable::const_iterator opErAToRWrapper_QSequentialIterable_const_iterator__opAdd(const QSequentialIterable::const_iterator * self, int j) {
    return (*self) + j;
}
inline QSequentialIterable::const_iterator opErAToRWrapper_QSequentialIterable_const_iterator__opSub(const QSequentialIterable::const_iterator * self, int j) {
    return (*self) - j;
}


template <typename D>
void buildMetaClass_QSequentialIterable(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("at", &D::ClassType::at);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("canReverseIterate", &D::ClassType::canReverseIterate);
    {
        GDefineMetaClass<QSequentialIterable::const_iterator> _nd = GDefineMetaClass<QSequentialIterable::const_iterator>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("const_iterator");
        _nd.CPGF_MD_TEMPLATE _constructor<void * (const QSequentialIterable::const_iterator&)>();
        _nd.CPGF_MD_TEMPLATE _operator<QSequentialIterable::const_iterator& (*)(cpgf::GMetaSelf, const QSequentialIterable::const_iterator&)>(mopHolder = mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAssign", (QSequentialIterable::const_iterator& (*) (QSequentialIterable::const_iterator *, const QSequentialIterable::const_iterator&))&opErAToRWrapper_QSequentialIterable_const_iterator__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<const QVariant (*)(const cpgf::GMetaSelf &)>(*mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDerefer", (const QVariant (*) (const QSequentialIterable::const_iterator *))&opErAToRWrapper_QSequentialIterable_const_iterator__opDerefer, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QSequentialIterable::const_iterator&)>(mopHolder == mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QSequentialIterable::const_iterator *, const QSequentialIterable::const_iterator&))&opErAToRWrapper_QSequentialIterable_const_iterator__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QSequentialIterable::const_iterator&)>(mopHolder != mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QSequentialIterable::const_iterator *, const QSequentialIterable::const_iterator&))&opErAToRWrapper_QSequentialIterable_const_iterator__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QSequentialIterable::const_iterator& (*)(cpgf::GMetaSelf)>(++mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opInc", (QSequentialIterable::const_iterator& (*) (QSequentialIterable::const_iterator *))&opErAToRWrapper_QSequentialIterable_const_iterator__opInc, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QSequentialIterable::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder++);
        _nd.CPGF_MD_TEMPLATE _method("_opIncSuffix", (QSequentialIterable::const_iterator (*) (QSequentialIterable::const_iterator *))&opErAToRWrapper_QSequentialIterable_const_iterator__opIncSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QSequentialIterable::const_iterator& (*)(cpgf::GMetaSelf)>(--mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opDec", (QSequentialIterable::const_iterator& (*) (QSequentialIterable::const_iterator *))&opErAToRWrapper_QSequentialIterable_const_iterator__opDec, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QSequentialIterable::const_iterator (*)(cpgf::GMetaSelf)>(mopHolder--);
        _nd.CPGF_MD_TEMPLATE _method("_opDecSuffix", (QSequentialIterable::const_iterator (*) (QSequentialIterable::const_iterator *))&opErAToRWrapper_QSequentialIterable_const_iterator__opDecSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QSequentialIterable::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAddAssign", (QSequentialIterable::const_iterator& (*) (QSequentialIterable::const_iterator *, int))&opErAToRWrapper_QSequentialIterable_const_iterator__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QSequentialIterable::const_iterator& (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSubAssign", (QSequentialIterable::const_iterator& (*) (QSequentialIterable::const_iterator *, int))&opErAToRWrapper_QSequentialIterable_const_iterator__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QSequentialIterable::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder + mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opAdd", (QSequentialIterable::const_iterator (*) (const QSequentialIterable::const_iterator *, int))&opErAToRWrapper_QSequentialIterable_const_iterator__opAdd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _nd.CPGF_MD_TEMPLATE _operator<QSequentialIterable::const_iterator (*)(const cpgf::GMetaSelf &, int)>(mopHolder - mopHolder);
        _nd.CPGF_MD_TEMPLATE _method("_opSub", (QSequentialIterable::const_iterator (*) (const QSequentialIterable::const_iterator *, int))&opErAToRWrapper_QSequentialIterable_const_iterator__opSub, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


inline uint bItFiEldWrapper_QVariant_Private_type_getter(QVariant::Private * self) {
    return self->type;
}

inline void bItFiEldWrapper_QVariant_Private_type_setter(QVariant::Private * self, uint value) {
    self->type = value;
}
inline uint bItFiEldWrapper_QVariant_Private_is_shared_getter(QVariant::Private * self) {
    return self->is_shared;
}

inline void bItFiEldWrapper_QVariant_Private_is_shared_setter(QVariant::Private * self, uint value) {
    self->is_shared = value;
}
inline uint bItFiEldWrapper_QVariant_Private_is_null_getter(QVariant::Private * self) {
    return self->is_null;
}

inline void bItFiEldWrapper_QVariant_Private_is_null_setter(QVariant::Private * self, uint value) {
    self->is_null = value;
}


inline QVariant & opErAToRWrapper_QVariant__opAssign(QVariant * self, const QVariant & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QVariant__opEqual(const QVariant * self, const QVariant & v) {
    return (*self) == v;
}
inline bool opErAToRWrapper_QVariant__opNotEqual(const QVariant * self, const QVariant & v) {
    return (*self) != v;
}
inline bool opErAToRWrapper_QVariant__opLess(const QVariant * self, const QVariant & v) {
    return (*self) < v;
}
inline bool opErAToRWrapper_QVariant__opLessEqual(const QVariant * self, const QVariant & v) {
    return (*self) <= v;
}
inline bool opErAToRWrapper_QVariant__opGreater(const QVariant * self, const QVariant & v) {
    return (*self) > v;
}
inline bool opErAToRWrapper_QVariant__opGreaterEqual(const QVariant * self, const QVariant & v) {
    return (*self) >= v;
}


template <typename D>
void buildMetaClass_QVariant(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QVariant::Type)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, const void *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, const void *, uint)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVariant &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QDataStream &)>(cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (uint)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (qlonglong)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (qulonglong)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (bool)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (double)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (float)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QBitArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QLatin1String)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStringList &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QChar)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDate &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTime &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDateTime &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QList< QVariant > &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QMap< QString, QVariant > &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QHash< QString, QVariant > &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSizeF &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QLine &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QLineF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRect &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRectF &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QLocale &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRegExp &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRegularExpression &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QUrl &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QEasingCurve &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QUuid &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QModelIndex &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonValue &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonObject &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonArray &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QJsonDocument &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("userType", &D::ClassType::userType);
    _d.CPGF_MD_TEMPLATE _method("typeName", &D::ClassType::typeName);
    _d.CPGF_MD_TEMPLATE _method("canConvert", (bool (D::ClassType::*) (int) const)&D::ClassType::canConvert);
    _d.CPGF_MD_TEMPLATE _method("convert", (bool (D::ClassType::*) (int))&D::ClassType::convert);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("toInt", &D::ClassType::toInt)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toUInt", &D::ClassType::toUInt)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toLongLong", &D::ClassType::toLongLong)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toULongLong", &D::ClassType::toULongLong)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toBool", &D::ClassType::toBool);
    _d.CPGF_MD_TEMPLATE _method("toDouble", &D::ClassType::toDouble)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toFloat", &D::ClassType::toFloat)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toReal", &D::ClassType::toReal)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toByteArray", &D::ClassType::toByteArray);
    _d.CPGF_MD_TEMPLATE _method("toBitArray", &D::ClassType::toBitArray);
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString);
    _d.CPGF_MD_TEMPLATE _method("toStringList", &D::ClassType::toStringList);
    _d.CPGF_MD_TEMPLATE _method("toChar", &D::ClassType::toChar);
    _d.CPGF_MD_TEMPLATE _method("toDate", &D::ClassType::toDate);
    _d.CPGF_MD_TEMPLATE _method("toTime", &D::ClassType::toTime);
    _d.CPGF_MD_TEMPLATE _method("toDateTime", &D::ClassType::toDateTime);
    _d.CPGF_MD_TEMPLATE _method("toList", &D::ClassType::toList);
    _d.CPGF_MD_TEMPLATE _method("toMap", &D::ClassType::toMap);
    _d.CPGF_MD_TEMPLATE _method("toHash", &D::ClassType::toHash);
    _d.CPGF_MD_TEMPLATE _method("toPoint", &D::ClassType::toPoint);
    _d.CPGF_MD_TEMPLATE _method("toPointF", &D::ClassType::toPointF);
    _d.CPGF_MD_TEMPLATE _method("toRect", &D::ClassType::toRect);
    _d.CPGF_MD_TEMPLATE _method("toSize", &D::ClassType::toSize);
    _d.CPGF_MD_TEMPLATE _method("toSizeF", &D::ClassType::toSizeF);
    _d.CPGF_MD_TEMPLATE _method("toLine", &D::ClassType::toLine);
    _d.CPGF_MD_TEMPLATE _method("toLineF", &D::ClassType::toLineF);
    _d.CPGF_MD_TEMPLATE _method("toRectF", &D::ClassType::toRectF);
    _d.CPGF_MD_TEMPLATE _method("toLocale", &D::ClassType::toLocale);
    _d.CPGF_MD_TEMPLATE _method("toRegExp", &D::ClassType::toRegExp);
    _d.CPGF_MD_TEMPLATE _method("toRegularExpression", &D::ClassType::toRegularExpression);
    _d.CPGF_MD_TEMPLATE _method("toUrl", &D::ClassType::toUrl);
    _d.CPGF_MD_TEMPLATE _method("toEasingCurve", &D::ClassType::toEasingCurve);
    _d.CPGF_MD_TEMPLATE _method("toUuid", &D::ClassType::toUuid);
    _d.CPGF_MD_TEMPLATE _method("toModelIndex", &D::ClassType::toModelIndex);
    _d.CPGF_MD_TEMPLATE _method("toJsonValue", &D::ClassType::toJsonValue);
    _d.CPGF_MD_TEMPLATE _method("toJsonObject", &D::ClassType::toJsonObject);
    _d.CPGF_MD_TEMPLATE _method("toJsonArray", &D::ClassType::toJsonArray);
    _d.CPGF_MD_TEMPLATE _method("toJsonDocument", &D::ClassType::toJsonDocument);
    _d.CPGF_MD_TEMPLATE _method("load", &D::ClassType::load, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("save", &D::ClassType::save, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("data", (void * (D::ClassType::*) ())&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("constData", &D::ClassType::constData);
    _d.CPGF_MD_TEMPLATE _method("data", (const void * (D::ClassType::*) () const)&D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("data_ptr", (QVariant::DataPtr& (D::ClassType::*) ())&D::ClassType::data_ptr);
    _d.CPGF_MD_TEMPLATE _method("data_ptr", (const QVariant::DataPtr& (D::ClassType::*) () const)&D::ClassType::data_ptr);
    _d.CPGF_MD_TEMPLATE _method("typeToName", &D::ClassType::typeToName);
    _d.CPGF_MD_TEMPLATE _method("nameToType", &D::ClassType::nameToType);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Type>("Type")
        ._element("Invalid", D::ClassType::Invalid)
        ._element("Bool", D::ClassType::Bool)
        ._element("Int", D::ClassType::Int)
        ._element("UInt", D::ClassType::UInt)
        ._element("LongLong", D::ClassType::LongLong)
        ._element("ULongLong", D::ClassType::ULongLong)
        ._element("Double", D::ClassType::Double)
        ._element("Char", D::ClassType::Char)
        ._element("Map", D::ClassType::Map)
        ._element("List", D::ClassType::List)
        ._element("String", D::ClassType::String)
        ._element("StringList", D::ClassType::StringList)
        ._element("ByteArray", D::ClassType::ByteArray)
        ._element("BitArray", D::ClassType::BitArray)
        ._element("Date", D::ClassType::Date)
        ._element("Time", D::ClassType::Time)
        ._element("DateTime", D::ClassType::DateTime)
        ._element("Url", D::ClassType::Url)
        ._element("Locale", D::ClassType::Locale)
        ._element("Rect", D::ClassType::Rect)
        ._element("RectF", D::ClassType::RectF)
        ._element("Size", D::ClassType::Size)
        ._element("SizeF", D::ClassType::SizeF)
        ._element("Line", D::ClassType::Line)
        ._element("LineF", D::ClassType::LineF)
        ._element("Point", D::ClassType::Point)
        ._element("PointF", D::ClassType::PointF)
        ._element("RegExp", D::ClassType::RegExp)
        ._element("RegularExpression", D::ClassType::RegularExpression)
        ._element("Hash", D::ClassType::Hash)
        ._element("EasingCurve", D::ClassType::EasingCurve)
        ._element("Uuid", D::ClassType::Uuid)
        ._element("ModelIndex", D::ClassType::ModelIndex)
        ._element("LastCoreType", D::ClassType::LastCoreType)
        ._element("Font", D::ClassType::Font)
        ._element("Pixmap", D::ClassType::Pixmap)
        ._element("Brush", D::ClassType::Brush)
        ._element("Color", D::ClassType::Color)
        ._element("Palette", D::ClassType::Palette)
        ._element("Image", D::ClassType::Image)
        ._element("Polygon", D::ClassType::Polygon)
        ._element("Region", D::ClassType::Region)
        ._element("Bitmap", D::ClassType::Bitmap)
        ._element("Cursor", D::ClassType::Cursor)
        ._element("KeySequence", D::ClassType::KeySequence)
        ._element("Pen", D::ClassType::Pen)
        ._element("TextLength", D::ClassType::TextLength)
        ._element("TextFormat", D::ClassType::TextFormat)
        ._element("Matrix", D::ClassType::Matrix)
        ._element("Transform", D::ClassType::Transform)
        ._element("Matrix4x4", D::ClassType::Matrix4x4)
        ._element("Vector2D", D::ClassType::Vector2D)
        ._element("Vector3D", D::ClassType::Vector3D)
        ._element("Vector4D", D::ClassType::Vector4D)
        ._element("Quaternion", D::ClassType::Quaternion)
        ._element("PolygonF", D::ClassType::PolygonF)
        ._element("Icon", D::ClassType::Icon)
        ._element("LastGuiType", D::ClassType::LastGuiType)
        ._element("SizePolicy", D::ClassType::SizePolicy)
        ._element("UserType", D::ClassType::UserType)
        ._element("LastType", D::ClassType::LastType)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QVariant & (*)(cpgf::GMetaSelf, const QVariant &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QVariant & (*) (QVariant *, const QVariant &))&opErAToRWrapper_QVariant__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QVariant &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QVariant *, const QVariant &))&opErAToRWrapper_QVariant__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QVariant &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QVariant *, const QVariant &))&opErAToRWrapper_QVariant__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QVariant &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QVariant *, const QVariant &))&opErAToRWrapper_QVariant__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QVariant &)>(mopHolder <= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLessEqual", (bool (*) (const QVariant *, const QVariant &))&opErAToRWrapper_QVariant__opLessEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QVariant &)>(mopHolder > mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreater", (bool (*) (const QVariant *, const QVariant &))&opErAToRWrapper_QVariant__opGreater, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QVariant &)>(mopHolder >= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opGreaterEqual", (bool (*) (const QVariant *, const QVariant &))&opErAToRWrapper_QVariant__opGreaterEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    {
        GDefineMetaClass<QVariant::Handler> _nd = GDefineMetaClass<QVariant::Handler>::declare("Handler");
        _nd.CPGF_MD_TEMPLATE _field("construct", &QVariant::Handler::construct);
        _nd.CPGF_MD_TEMPLATE _field("clear", &QVariant::Handler::clear);
        _nd.CPGF_MD_TEMPLATE _field("isNull", &QVariant::Handler::isNull);
        _nd.CPGF_MD_TEMPLATE _field("load", &QVariant::Handler::load);
        _nd.CPGF_MD_TEMPLATE _field("save", &QVariant::Handler::save);
        _nd.CPGF_MD_TEMPLATE _field("compare", &QVariant::Handler::compare);
        _nd.CPGF_MD_TEMPLATE _field("convert", &QVariant::Handler::convert);
        _nd.CPGF_MD_TEMPLATE _field("canConvert", &QVariant::Handler::canConvert);
        _nd.CPGF_MD_TEMPLATE _field("debugStream", &QVariant::Handler::debugStream);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


template <typename D>
void buildMetaClass_QVariantComparisonHelper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QVariant &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


template <typename D, typename T>
void buildMetaClass_QVariantValueHelper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("metaType", &D::ClassType::metaType, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


template <typename D, typename T>
void buildMetaClass_QVariantValueHelperInterface(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
