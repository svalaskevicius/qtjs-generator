// Auto generated file, don't modify.

#ifndef __META_QTGUI_QREGION_H
#define __META_QTGUI_QREGION_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_Global_qregion(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QRegion &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QRegion &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QRegion &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QRegion & opErAToRWrapper_QRegion__opAssign(QRegion * self, const QRegion & __arg0) {
    return (*self) = __arg0;
}
inline const QRegion opErAToRWrapper_QRegion__opBitOr(const QRegion * self, const QRegion & r) {
    return (*self) | r;
}
inline const QRegion opErAToRWrapper_QRegion__opAdd(const QRegion * self, const QRegion & r) {
    return (*self) + r;
}
inline const QRegion opErAToRWrapper_QRegion__opAdd(const QRegion * self, const QRect & r) {
    return (*self) + r;
}
inline const QRegion opErAToRWrapper_QRegion__opBitAnd(const QRegion * self, const QRegion & r) {
    return (*self) & r;
}
inline const QRegion opErAToRWrapper_QRegion__opBitAnd(const QRegion * self, const QRect & r) {
    return (*self) & r;
}
inline const QRegion opErAToRWrapper_QRegion__opSub(const QRegion * self, const QRegion & r) {
    return (*self) - r;
}
inline const QRegion opErAToRWrapper_QRegion__opBitXor(const QRegion * self, const QRegion & r) {
    return (*self) ^ r;
}
inline QRegion & opErAToRWrapper_QRegion__opBitOrAssign(QRegion * self, const QRegion & r) {
    return (*self) |= r;
}
inline QRegion & opErAToRWrapper_QRegion__opAddAssign(QRegion * self, const QRegion & r) {
    return (*self) += r;
}
inline QRegion & opErAToRWrapper_QRegion__opAddAssign(QRegion * self, const QRect & r) {
    return (*self) += r;
}
inline QRegion & opErAToRWrapper_QRegion__opBitAndAssign(QRegion * self, const QRegion & r) {
    return (*self) &= r;
}
inline QRegion & opErAToRWrapper_QRegion__opBitAndAssign(QRegion * self, const QRect & r) {
    return (*self) &= r;
}
inline QRegion & opErAToRWrapper_QRegion__opSubAssign(QRegion * self, const QRegion & r) {
    return (*self) -= r;
}
inline QRegion & opErAToRWrapper_QRegion__opBitXorAssign(QRegion * self, const QRegion & r) {
    return (*self) ^= r;
}
inline bool opErAToRWrapper_QRegion__opEqual(const QRegion * self, const QRegion & r) {
    return (*self) == r;
}
inline bool opErAToRWrapper_QRegion__opNotEqual(const QRegion * self, const QRegion & r) {
    return (*self) != r;
}


template <typename D>
void buildMetaClass_QRegion(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, int, int, QRegion::RegionType)>()
        ._default(copyVariantFromCopyable(QRegion::Rectangle))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRect &, QRegion::RegionType)>()
        ._default(copyVariantFromCopyable(QRegion::Rectangle))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPolygon &, Qt::FillRule)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::OddEvenFill))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRegion &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QBitmap &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QPoint &) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QRect &) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (int, int))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QPoint &))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translated", (QRegion (D::ClassType::*) (int, int) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("translated", (QRegion (D::ClassType::*) (const QPoint &) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("united", (QRegion (D::ClassType::*) (const QRegion &) const)&D::ClassType::united, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("united", (QRegion (D::ClassType::*) (const QRect &) const)&D::ClassType::united);
    _d.CPGF_MD_TEMPLATE _method("intersected", (QRegion (D::ClassType::*) (const QRegion &) const)&D::ClassType::intersected, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("intersected", (QRegion (D::ClassType::*) (const QRect &) const)&D::ClassType::intersected);
    _d.CPGF_MD_TEMPLATE _method("subtracted", &D::ClassType::subtracted, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("xored", &D::ClassType::xored, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("intersects", (bool (D::ClassType::*) (const QRegion &) const)&D::ClassType::intersects, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("intersects", (bool (D::ClassType::*) (const QRect &) const)&D::ClassType::intersects);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("rects", &D::ClassType::rects);
    _d.CPGF_MD_TEMPLATE _method("setRects", &D::ClassType::setRects);
    _d.CPGF_MD_TEMPLATE _method("rectCount", &D::ClassType::rectCount);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RegionType>("RegionType")
        ._element("Rectangle", D::ClassType::Rectangle)
        ._element("Ellipse", D::ClassType::Ellipse)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QRegion & (*)(cpgf::GMetaSelf, const QRegion &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QRegion & (*) (QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QRegion (*)(const cpgf::GMetaSelf &, const QRegion &)>(mopHolder | mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitOr", (const QRegion (*) (const QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opBitOr, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QRegion (*)(const cpgf::GMetaSelf &, const QRegion &)>(mopHolder + mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAdd", (const QRegion (*) (const QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opAdd, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QRegion (*)(const cpgf::GMetaSelf &, const QRect &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAdd", (const QRegion (*) (const QRegion *, const QRect &))&opErAToRWrapper_QRegion__opAdd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QRegion (*)(const cpgf::GMetaSelf &, const QRegion &)>(mopHolder & mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitAnd", (const QRegion (*) (const QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opBitAnd, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QRegion (*)(const cpgf::GMetaSelf &, const QRect &)>(mopHolder & mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAnd", (const QRegion (*) (const QRegion *, const QRect &))&opErAToRWrapper_QRegion__opBitAnd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QRegion (*)(const cpgf::GMetaSelf &, const QRegion &)>(mopHolder - mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSub", (const QRegion (*) (const QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opSub, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QRegion (*)(const cpgf::GMetaSelf &, const QRegion &)>(mopHolder ^ mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitXor", (const QRegion (*) (const QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opBitXor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRegion & (*)(cpgf::GMetaSelf, const QRegion &)>(mopHolder |= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitOrAssign", (QRegion & (*) (QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opBitOrAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRegion & (*)(cpgf::GMetaSelf, const QRegion &)>(mopHolder += mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QRegion & (*) (QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRegion & (*)(cpgf::GMetaSelf, const QRect &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QRegion & (*) (QRegion *, const QRect &))&opErAToRWrapper_QRegion__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRegion & (*)(cpgf::GMetaSelf, const QRegion &)>(mopHolder &= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QRegion & (*) (QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opBitAndAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRegion & (*)(cpgf::GMetaSelf, const QRect &)>(mopHolder &= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QRegion & (*) (QRegion *, const QRect &))&opErAToRWrapper_QRegion__opBitAndAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRegion & (*)(cpgf::GMetaSelf, const QRegion &)>(mopHolder -= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QRegion & (*) (QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRegion & (*)(cpgf::GMetaSelf, const QRegion &)>(mopHolder ^= mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opBitXorAssign", (QRegion & (*) (QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opBitXorAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QRegion &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QRegion &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QRegion *, const QRegion &))&opErAToRWrapper_QRegion__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
