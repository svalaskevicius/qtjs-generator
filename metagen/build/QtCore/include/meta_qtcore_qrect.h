// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QRECT_H
#define CPGF_META_QTCORE_QRECT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qrect(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QRect &, const QRect &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QRect &, const QRect &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QRect &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QRect &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QRect &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QRectF &, const QRectF &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QRectF &, const QRectF &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QRectF &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QRectF &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QRectF &)>(mopHolder << mopHolder);
}


inline QRect opErAToRWrapper_QRect__opBitOr(const QRect * self, const QRect & r) {
    return (*self) | r;
}
inline QRect opErAToRWrapper_QRect__opBitAnd(const QRect * self, const QRect & r) {
    return (*self) & r;
}
inline QRect & opErAToRWrapper_QRect__opBitOrAssign(QRect * self, const QRect & r) {
    return (*self) |= r;
}
inline QRect & opErAToRWrapper_QRect__opBitAndAssign(QRect * self, const QRect & r) {
    return (*self) &= r;
}
inline QRect & opErAToRWrapper_QRect__opAddAssign(QRect * self, const QMargins & margins) {
    return (*self) += margins;
}
inline QRect & opErAToRWrapper_QRect__opSubAssign(QRect * self, const QMargins & margins) {
    return (*self) -= margins;
}


template <typename D>
void buildMetaClass_QRect(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &, const QPoint &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPoint &, const QSize &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, int, int)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("left", &D::ClassType::left);
    _d.CPGF_MD_TEMPLATE _method("top", &D::ClassType::top);
    _d.CPGF_MD_TEMPLATE _method("right", &D::ClassType::right);
    _d.CPGF_MD_TEMPLATE _method("bottom", &D::ClassType::bottom);
    _d.CPGF_MD_TEMPLATE _method("normalized", &D::ClassType::normalized);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("setLeft", &D::ClassType::setLeft);
    _d.CPGF_MD_TEMPLATE _method("setTop", &D::ClassType::setTop);
    _d.CPGF_MD_TEMPLATE _method("setRight", &D::ClassType::setRight);
    _d.CPGF_MD_TEMPLATE _method("setBottom", &D::ClassType::setBottom);
    _d.CPGF_MD_TEMPLATE _method("setX", &D::ClassType::setX);
    _d.CPGF_MD_TEMPLATE _method("setY", &D::ClassType::setY);
    _d.CPGF_MD_TEMPLATE _method("setTopLeft", &D::ClassType::setTopLeft);
    _d.CPGF_MD_TEMPLATE _method("setBottomRight", &D::ClassType::setBottomRight);
    _d.CPGF_MD_TEMPLATE _method("setTopRight", &D::ClassType::setTopRight);
    _d.CPGF_MD_TEMPLATE _method("setBottomLeft", &D::ClassType::setBottomLeft);
    _d.CPGF_MD_TEMPLATE _method("topLeft", &D::ClassType::topLeft);
    _d.CPGF_MD_TEMPLATE _method("bottomRight", &D::ClassType::bottomRight);
    _d.CPGF_MD_TEMPLATE _method("topRight", &D::ClassType::topRight);
    _d.CPGF_MD_TEMPLATE _method("bottomLeft", &D::ClassType::bottomLeft);
    _d.CPGF_MD_TEMPLATE _method("center", &D::ClassType::center);
    _d.CPGF_MD_TEMPLATE _method("moveLeft", &D::ClassType::moveLeft);
    _d.CPGF_MD_TEMPLATE _method("moveTop", &D::ClassType::moveTop);
    _d.CPGF_MD_TEMPLATE _method("moveRight", &D::ClassType::moveRight);
    _d.CPGF_MD_TEMPLATE _method("moveBottom", &D::ClassType::moveBottom);
    _d.CPGF_MD_TEMPLATE _method("moveTopLeft", &D::ClassType::moveTopLeft);
    _d.CPGF_MD_TEMPLATE _method("moveBottomRight", &D::ClassType::moveBottomRight);
    _d.CPGF_MD_TEMPLATE _method("moveTopRight", &D::ClassType::moveTopRight);
    _d.CPGF_MD_TEMPLATE _method("moveBottomLeft", &D::ClassType::moveBottomLeft);
    _d.CPGF_MD_TEMPLATE _method("moveCenter", &D::ClassType::moveCenter);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (int, int))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QPoint &))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translated", (QRect (D::ClassType::*) (int, int) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("translated", (QRect (D::ClassType::*) (const QPoint &) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("moveTo", (void (D::ClassType::*) (int, int))&D::ClassType::moveTo);
    _d.CPGF_MD_TEMPLATE _method("moveTo", (void (D::ClassType::*) (const QPoint &))&D::ClassType::moveTo);
    _d.CPGF_MD_TEMPLATE _method("setRect", &D::ClassType::setRect);
    _d.CPGF_MD_TEMPLATE _method("getRect", &D::ClassType::getRect);
    _d.CPGF_MD_TEMPLATE _method("setCoords", &D::ClassType::setCoords);
    _d.CPGF_MD_TEMPLATE _method("getCoords", &D::ClassType::getCoords);
    _d.CPGF_MD_TEMPLATE _method("adjust", &D::ClassType::adjust);
    _d.CPGF_MD_TEMPLATE _method("adjusted", &D::ClassType::adjusted);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("setWidth", &D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("setHeight", &D::ClassType::setHeight);
    _d.CPGF_MD_TEMPLATE _method("setSize", &D::ClassType::setSize);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QRect &, bool) const)&D::ClassType::contains)
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QPoint &, bool) const)&D::ClassType::contains)
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (int, int) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (int, int, bool) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("united", &D::ClassType::united);
    _d.CPGF_MD_TEMPLATE _method("intersected", &D::ClassType::intersected);
    _d.CPGF_MD_TEMPLATE _method("intersects", &D::ClassType::intersects);
    _d.CPGF_MD_TEMPLATE _method("marginsAdded", &D::ClassType::marginsAdded);
    _d.CPGF_MD_TEMPLATE _method("marginsRemoved", &D::ClassType::marginsRemoved);
    _d.CPGF_MD_TEMPLATE _operator<QRect (*)(const cpgf::GMetaSelf &, const QRect &)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOr", (QRect (*) (const QRect *, const QRect &))&opErAToRWrapper_QRect__opBitOr, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRect (*)(const cpgf::GMetaSelf &, const QRect &)>(mopHolder & mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAnd", (QRect (*) (const QRect *, const QRect &))&opErAToRWrapper_QRect__opBitAnd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRect & (*)(cpgf::GMetaSelf, const QRect &)>(mopHolder |= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOrAssign", (QRect & (*) (QRect *, const QRect &))&opErAToRWrapper_QRect__opBitOrAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRect & (*)(cpgf::GMetaSelf, const QRect &)>(mopHolder &= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QRect & (*) (QRect *, const QRect &))&opErAToRWrapper_QRect__opBitAndAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRect & (*)(cpgf::GMetaSelf, const QMargins &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QRect & (*) (QRect *, const QMargins &))&opErAToRWrapper_QRect__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRect & (*)(cpgf::GMetaSelf, const QMargins &)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QRect & (*) (QRect *, const QMargins &))&opErAToRWrapper_QRect__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


inline QRectF opErAToRWrapper_QRectF__opBitOr(const QRectF * self, const QRectF & r) {
    return (*self) | r;
}
inline QRectF opErAToRWrapper_QRectF__opBitAnd(const QRectF * self, const QRectF & r) {
    return (*self) & r;
}
inline QRectF & opErAToRWrapper_QRectF__opBitOrAssign(QRectF * self, const QRectF & r) {
    return (*self) |= r;
}
inline QRectF & opErAToRWrapper_QRectF__opBitAndAssign(QRectF * self, const QRectF & r) {
    return (*self) &= r;
}


template <typename D>
void buildMetaClass_QRectF(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, const QSizeF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPointF &, const QPointF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal, qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QRect &)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("normalized", &D::ClassType::normalized);
    _d.CPGF_MD_TEMPLATE _method("left", &D::ClassType::left);
    _d.CPGF_MD_TEMPLATE _method("top", &D::ClassType::top);
    _d.CPGF_MD_TEMPLATE _method("right", &D::ClassType::right);
    _d.CPGF_MD_TEMPLATE _method("bottom", &D::ClassType::bottom);
    _d.CPGF_MD_TEMPLATE _method("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _method("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _method("setLeft", &D::ClassType::setLeft);
    _d.CPGF_MD_TEMPLATE _method("setTop", &D::ClassType::setTop);
    _d.CPGF_MD_TEMPLATE _method("setRight", &D::ClassType::setRight);
    _d.CPGF_MD_TEMPLATE _method("setBottom", &D::ClassType::setBottom);
    _d.CPGF_MD_TEMPLATE _method("setX", &D::ClassType::setX);
    _d.CPGF_MD_TEMPLATE _method("setY", &D::ClassType::setY);
    _d.CPGF_MD_TEMPLATE _method("topLeft", &D::ClassType::topLeft);
    _d.CPGF_MD_TEMPLATE _method("bottomRight", &D::ClassType::bottomRight);
    _d.CPGF_MD_TEMPLATE _method("topRight", &D::ClassType::topRight);
    _d.CPGF_MD_TEMPLATE _method("bottomLeft", &D::ClassType::bottomLeft);
    _d.CPGF_MD_TEMPLATE _method("center", &D::ClassType::center);
    _d.CPGF_MD_TEMPLATE _method("setTopLeft", &D::ClassType::setTopLeft, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setBottomRight", &D::ClassType::setBottomRight, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setTopRight", &D::ClassType::setTopRight, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setBottomLeft", &D::ClassType::setBottomLeft, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("moveLeft", &D::ClassType::moveLeft);
    _d.CPGF_MD_TEMPLATE _method("moveTop", &D::ClassType::moveTop);
    _d.CPGF_MD_TEMPLATE _method("moveRight", &D::ClassType::moveRight);
    _d.CPGF_MD_TEMPLATE _method("moveBottom", &D::ClassType::moveBottom);
    _d.CPGF_MD_TEMPLATE _method("moveTopLeft", &D::ClassType::moveTopLeft, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("moveBottomRight", &D::ClassType::moveBottomRight, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("moveTopRight", &D::ClassType::moveTopRight, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("moveBottomLeft", &D::ClassType::moveBottomLeft, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("moveCenter", &D::ClassType::moveCenter, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::translate);
    _d.CPGF_MD_TEMPLATE _method("translate", (void (D::ClassType::*) (const QPointF &))&D::ClassType::translate, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("translated", (QRectF (D::ClassType::*) (qreal, qreal) const)&D::ClassType::translated);
    _d.CPGF_MD_TEMPLATE _method("translated", (QRectF (D::ClassType::*) (const QPointF &) const)&D::ClassType::translated, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("moveTo", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::moveTo);
    _d.CPGF_MD_TEMPLATE _method("moveTo", (void (D::ClassType::*) (const QPointF &))&D::ClassType::moveTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setRect", &D::ClassType::setRect);
    _d.CPGF_MD_TEMPLATE _method("getRect", &D::ClassType::getRect);
    _d.CPGF_MD_TEMPLATE _method("setCoords", &D::ClassType::setCoords);
    _d.CPGF_MD_TEMPLATE _method("getCoords", &D::ClassType::getCoords);
    _d.CPGF_MD_TEMPLATE _method("adjust", &D::ClassType::adjust);
    _d.CPGF_MD_TEMPLATE _method("adjusted", &D::ClassType::adjusted);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("setWidth", &D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("setHeight", &D::ClassType::setHeight);
    _d.CPGF_MD_TEMPLATE _method("setSize", &D::ClassType::setSize);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QRectF &) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (const QPointF &) const)&D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("contains", (bool (D::ClassType::*) (qreal, qreal) const)&D::ClassType::contains);
    _d.CPGF_MD_TEMPLATE _method("united", &D::ClassType::united);
    _d.CPGF_MD_TEMPLATE _method("intersected", &D::ClassType::intersected);
    _d.CPGF_MD_TEMPLATE _method("intersects", &D::ClassType::intersects);
    _d.CPGF_MD_TEMPLATE _method("toRect", &D::ClassType::toRect);
    _d.CPGF_MD_TEMPLATE _method("toAlignedRect", &D::ClassType::toAlignedRect);
    _d.CPGF_MD_TEMPLATE _operator<QRectF (*)(const cpgf::GMetaSelf &, const QRectF &)>(mopHolder | mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOr", (QRectF (*) (const QRectF *, const QRectF &))&opErAToRWrapper_QRectF__opBitOr, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRectF (*)(const cpgf::GMetaSelf &, const QRectF &)>(mopHolder & mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAnd", (QRectF (*) (const QRectF *, const QRectF &))&opErAToRWrapper_QRectF__opBitAnd, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRectF & (*)(cpgf::GMetaSelf, const QRectF &)>(mopHolder |= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitOrAssign", (QRectF & (*) (QRectF *, const QRectF &))&opErAToRWrapper_QRectF__opBitOrAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QRectF & (*)(cpgf::GMetaSelf, const QRectF &)>(mopHolder &= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opBitAndAssign", (QRectF & (*) (QRectF *, const QRectF &))&opErAToRWrapper_QRectF__opBitAndAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
