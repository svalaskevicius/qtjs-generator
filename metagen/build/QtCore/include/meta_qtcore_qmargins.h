// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QMARGINS_H
#define CPGF_META_QTCORE_QMARGINS_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qmargins(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QMargins &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QMargins &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QMargins &, const QMargins &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QMargins &, const QMargins &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QRect (*)(const QRect &, const QMargins &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QRect (*)(const QMargins &, const QRect &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, const QMargins &)>(mopHolder + mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, const QMargins &)>(mopHolder - mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, int)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(int, const QMargins &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, qreal)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(qreal, const QMargins &)>(mopHolder * mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, int)>(mopHolder / mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &, qreal)>(mopHolder / mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QMargins (*)(const QMargins &)>(-mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QMargins &)>(mopHolder << mopHolder);
}


inline QMargins & opErAToRWrapper_QMargins__opAddAssign(QMargins * self, const QMargins & margins) {
    return (*self) += margins;
}
inline QMargins & opErAToRWrapper_QMargins__opSubAssign(QMargins * self, const QMargins & margins) {
    return (*self) -= margins;
}
inline QMargins & opErAToRWrapper_QMargins__opMulAssign(QMargins * self, int __arg0) {
    return (*self) *= __arg0;
}
inline QMargins & opErAToRWrapper_QMargins__opDivAssign(QMargins * self, int __arg0) {
    return (*self) /= __arg0;
}
inline QMargins & opErAToRWrapper_QMargins__opMulAssign(QMargins * self, qreal __arg0) {
    return (*self) *= __arg0;
}
inline QMargins & opErAToRWrapper_QMargins__opDivAssign(QMargins * self, qreal __arg0) {
    return (*self) /= __arg0;
}


template <typename D>
void buildMetaClass_QMargins(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, int, int)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("left", &D::ClassType::left);
    _d.CPGF_MD_TEMPLATE _method("top", &D::ClassType::top);
    _d.CPGF_MD_TEMPLATE _method("right", &D::ClassType::right);
    _d.CPGF_MD_TEMPLATE _method("bottom", &D::ClassType::bottom);
    _d.CPGF_MD_TEMPLATE _method("setLeft", &D::ClassType::setLeft);
    _d.CPGF_MD_TEMPLATE _method("setTop", &D::ClassType::setTop);
    _d.CPGF_MD_TEMPLATE _method("setRight", &D::ClassType::setRight);
    _d.CPGF_MD_TEMPLATE _method("setBottom", &D::ClassType::setBottom);
    _d.CPGF_MD_TEMPLATE _operator<QMargins & (*)(cpgf::GMetaSelf, const QMargins &)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QMargins & (*) (QMargins *, const QMargins &))&opErAToRWrapper_QMargins__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMargins & (*)(cpgf::GMetaSelf, const QMargins &)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QMargins & (*) (QMargins *, const QMargins &))&opErAToRWrapper_QMargins__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMargins & (*)(cpgf::GMetaSelf, int)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QMargins & (*) (QMargins *, int))&opErAToRWrapper_QMargins__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMargins & (*)(cpgf::GMetaSelf, int)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QMargins & (*) (QMargins *, int))&opErAToRWrapper_QMargins__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMargins & (*)(cpgf::GMetaSelf, qreal)>(mopHolder *= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opMulAssign", (QMargins & (*) (QMargins *, qreal))&opErAToRWrapper_QMargins__opMulAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QMargins & (*)(cpgf::GMetaSelf, qreal)>(mopHolder /= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDivAssign", (QMargins & (*) (QMargins *, qreal))&opErAToRWrapper_QMargins__opDivAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
