// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPAGELAYOUT_H
#define CPGF_META_QTGUI_QPAGELAYOUT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qpagelayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QPageLayout &, const QPageLayout &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QPageLayout &, const QPageLayout &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QPageLayout &)>(mopHolder << mopHolder);
}


inline QPageLayout & opErAToRWrapper_QPageLayout__opAssign(QPageLayout * self, const QPageLayout & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QPageLayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPageSize &, QPageLayout::Orientation, const QMarginsF &, QPageLayout::Unit, const QMarginsF &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<4> >())
        ._default(copyVariantFromCopyable(QMarginsF(0, 0, 0, 0)))
        ._default(copyVariantFromCopyable(QPageLayout::Point))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPageLayout &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isEquivalentTo", &D::ClassType::isEquivalentTo);
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("setMode", &D::ClassType::setMode);
    _d.CPGF_MD_TEMPLATE _method("mode", &D::ClassType::mode);
    _d.CPGF_MD_TEMPLATE _method("setPageSize", &D::ClassType::setPageSize, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QMarginsF(0, 0, 0, 0)))
    ;
    _d.CPGF_MD_TEMPLATE _method("pageSize", &D::ClassType::pageSize);
    _d.CPGF_MD_TEMPLATE _method("setOrientation", &D::ClassType::setOrientation);
    _d.CPGF_MD_TEMPLATE _method("orientation", &D::ClassType::orientation);
    _d.CPGF_MD_TEMPLATE _method("setUnits", &D::ClassType::setUnits);
    _d.CPGF_MD_TEMPLATE _method("units", &D::ClassType::units);
    _d.CPGF_MD_TEMPLATE _method("setMargins", &D::ClassType::setMargins, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setLeftMargin", &D::ClassType::setLeftMargin);
    _d.CPGF_MD_TEMPLATE _method("setRightMargin", &D::ClassType::setRightMargin);
    _d.CPGF_MD_TEMPLATE _method("setTopMargin", &D::ClassType::setTopMargin);
    _d.CPGF_MD_TEMPLATE _method("setBottomMargin", &D::ClassType::setBottomMargin);
    _d.CPGF_MD_TEMPLATE _method("margins", (QMarginsF (D::ClassType::*) () const)&D::ClassType::margins);
    _d.CPGF_MD_TEMPLATE _method("margins", (QMarginsF (D::ClassType::*) (QPageLayout::Unit) const)&D::ClassType::margins);
    _d.CPGF_MD_TEMPLATE _method("marginsPoints", &D::ClassType::marginsPoints);
    _d.CPGF_MD_TEMPLATE _method("marginsPixels", &D::ClassType::marginsPixels);
    _d.CPGF_MD_TEMPLATE _method("setMinimumMargins", &D::ClassType::setMinimumMargins, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("minimumMargins", &D::ClassType::minimumMargins);
    _d.CPGF_MD_TEMPLATE _method("maximumMargins", &D::ClassType::maximumMargins);
    _d.CPGF_MD_TEMPLATE _method("fullRect", (QRectF (D::ClassType::*) () const)&D::ClassType::fullRect);
    _d.CPGF_MD_TEMPLATE _method("fullRect", (QRectF (D::ClassType::*) (QPageLayout::Unit) const)&D::ClassType::fullRect);
    _d.CPGF_MD_TEMPLATE _method("fullRectPoints", &D::ClassType::fullRectPoints);
    _d.CPGF_MD_TEMPLATE _method("fullRectPixels", &D::ClassType::fullRectPixels);
    _d.CPGF_MD_TEMPLATE _method("paintRect", (QRectF (D::ClassType::*) () const)&D::ClassType::paintRect);
    _d.CPGF_MD_TEMPLATE _method("paintRect", (QRectF (D::ClassType::*) (QPageLayout::Unit) const)&D::ClassType::paintRect);
    _d.CPGF_MD_TEMPLATE _method("paintRectPoints", &D::ClassType::paintRectPoints);
    _d.CPGF_MD_TEMPLATE _method("paintRectPixels", &D::ClassType::paintRectPixels);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Unit>("Unit")
        ._element("Millimeter", D::ClassType::Millimeter)
        ._element("Point", D::ClassType::Point)
        ._element("Inch", D::ClassType::Inch)
        ._element("Pica", D::ClassType::Pica)
        ._element("Didot", D::ClassType::Didot)
        ._element("Cicero", D::ClassType::Cicero)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Orientation>("Orientation")
        ._element("Portrait", D::ClassType::Portrait)
        ._element("Landscape", D::ClassType::Landscape)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Mode>("Mode")
        ._element("StandardMode", D::ClassType::StandardMode)
        ._element("FullPageMode", D::ClassType::FullPageMode)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QPageLayout & (*)(cpgf::GMetaSelf, const QPageLayout &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QPageLayout & (*) (QPageLayout *, const QPageLayout &))&opErAToRWrapper_QPageLayout__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
