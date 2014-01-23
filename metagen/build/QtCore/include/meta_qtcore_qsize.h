// Auto generated file, don't modify.

#ifndef __META_QTCORE_QSIZE_H
#define __META_QTCORE_QSIZE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qsize(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QSize &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QSize &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QSize &, const QSize &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QSize &, const QSize &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QSize (*)(const QSize &, const QSize &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QSize (*)(const QSize &, const QSize &)>(mopHolder - mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QSize (*)(const QSize &, qreal)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QSize (*)(qreal, const QSize &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QSize (*)(const QSize &, qreal)>(mopHolder / mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QSize &)>(mopHolder << mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QSizeF &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QSizeF &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QSizeF &, const QSizeF &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QSizeF &, const QSizeF &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QSizeF (*)(const QSizeF &, const QSizeF &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QSizeF (*)(const QSizeF &, const QSizeF &)>(mopHolder - mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QSizeF (*)(const QSizeF &, qreal)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QSizeF (*)(qreal, const QSizeF &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<const QSizeF (*)(const QSizeF &, qreal)>(mopHolder / mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QSizeF &)>(mopHolder << mopHolder);
}


inline QSize & opErAToRWrapper_QSize__opAddAssign(QSize * self, const QSize & __arg0) {
    return (*self) += __arg0;
}
inline QSize & opErAToRWrapper_QSize__opSubAssign(QSize * self, const QSize & __arg0) {
    return (*self) -= __arg0;
}
inline QSize & opErAToRWrapper_QSize__opMulAssign(QSize * self, qreal c) {
    return (*self) *= c;
}
inline QSize & opErAToRWrapper_QSize__opDivAssign(QSize * self, qreal c) {
    return (*self) /= c;
}


template <typename D>
void buildMetaClass_QSize(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("setWidth", &D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("setHeight", &D::ClassType::setHeight);
    _d.CPGF_MD_TEMPLATE _method("transpose", &D::ClassType::transpose);
    _d.CPGF_MD_TEMPLATE _method("transposed", &D::ClassType::transposed);
    _d.CPGF_MD_TEMPLATE _method("scale", (void (D::ClassType::*) (int, int, Qt::AspectRatioMode))&D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("scale", (void (D::ClassType::*) (const QSize &, Qt::AspectRatioMode))&D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("scaled", (QSize (D::ClassType::*) (int, int, Qt::AspectRatioMode) const)&D::ClassType::scaled);
    _d.CPGF_MD_TEMPLATE _method("scaled", (QSize (D::ClassType::*) (const QSize &, Qt::AspectRatioMode) const)&D::ClassType::scaled);
    _d.CPGF_MD_TEMPLATE _method("expandedTo", &D::ClassType::expandedTo);
    _d.CPGF_MD_TEMPLATE _method("boundedTo", &D::ClassType::boundedTo);
    _d.CPGF_MD_TEMPLATE _method("rwidth", &D::ClassType::rwidth);
    _d.CPGF_MD_TEMPLATE _method("rheight", &D::ClassType::rheight);
    _d.CPGF_MD_TEMPLATE _operator<QSize & (*)(cpgf::GMetaSelf, const QSize &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QSize & (*) (QSize *, const QSize &))&opErAToRWrapper_QSize__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSize & (*)(cpgf::GMetaSelf, const QSize &)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QSize & (*) (QSize *, const QSize &))&opErAToRWrapper_QSize__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSize & (*)(cpgf::GMetaSelf, qreal)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QSize & (*) (QSize *, qreal))&opErAToRWrapper_QSize__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSize & (*)(cpgf::GMetaSelf, qreal)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QSize & (*) (QSize *, qreal))&opErAToRWrapper_QSize__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


inline QSizeF & opErAToRWrapper_QSizeF__opAddAssign(QSizeF * self, const QSizeF & __arg0) {
    return (*self) += __arg0;
}
inline QSizeF & opErAToRWrapper_QSizeF__opSubAssign(QSizeF * self, const QSizeF & __arg0) {
    return (*self) -= __arg0;
}
inline QSizeF & opErAToRWrapper_QSizeF__opMulAssign(QSizeF * self, qreal c) {
    return (*self) *= c;
}
inline QSizeF & opErAToRWrapper_QSizeF__opDivAssign(QSizeF * self, qreal c) {
    return (*self) /= c;
}


template <typename D>
void buildMetaClass_QSizeF(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (qreal, qreal)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("setWidth", &D::ClassType::setWidth);
    _d.CPGF_MD_TEMPLATE _method("setHeight", &D::ClassType::setHeight);
    _d.CPGF_MD_TEMPLATE _method("transpose", &D::ClassType::transpose);
    _d.CPGF_MD_TEMPLATE _method("transposed", &D::ClassType::transposed);
    _d.CPGF_MD_TEMPLATE _method("scale", (void (D::ClassType::*) (qreal, qreal, Qt::AspectRatioMode))&D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("scale", (void (D::ClassType::*) (const QSizeF &, Qt::AspectRatioMode))&D::ClassType::scale);
    _d.CPGF_MD_TEMPLATE _method("scaled", (QSizeF (D::ClassType::*) (qreal, qreal, Qt::AspectRatioMode) const)&D::ClassType::scaled);
    _d.CPGF_MD_TEMPLATE _method("scaled", (QSizeF (D::ClassType::*) (const QSizeF &, Qt::AspectRatioMode) const)&D::ClassType::scaled);
    _d.CPGF_MD_TEMPLATE _method("expandedTo", &D::ClassType::expandedTo);
    _d.CPGF_MD_TEMPLATE _method("boundedTo", &D::ClassType::boundedTo);
    _d.CPGF_MD_TEMPLATE _method("rwidth", &D::ClassType::rwidth);
    _d.CPGF_MD_TEMPLATE _method("rheight", &D::ClassType::rheight);
    _d.CPGF_MD_TEMPLATE _method("toSize", &D::ClassType::toSize);
    _d.CPGF_MD_TEMPLATE _operator<QSizeF & (*)(cpgf::GMetaSelf, const QSizeF &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QSizeF & (*) (QSizeF *, const QSizeF &))&opErAToRWrapper_QSizeF__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSizeF & (*)(cpgf::GMetaSelf, const QSizeF &)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QSizeF & (*) (QSizeF *, const QSizeF &))&opErAToRWrapper_QSizeF__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSizeF & (*)(cpgf::GMetaSelf, qreal)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QSizeF & (*) (QSizeF *, qreal))&opErAToRWrapper_QSizeF__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QSizeF & (*)(cpgf::GMetaSelf, qreal)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QSizeF & (*) (QSizeF *, qreal))&opErAToRWrapper_QSizeF__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
