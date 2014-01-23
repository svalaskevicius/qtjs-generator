// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QSCROLLER_H
#define __META_QTWIDGETS_QSCROLLER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QScroller(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("target", &D::ClassType::target);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("handleInput", &D::ClassType::handleInput, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("stop", &D::ClassType::stop);
    _d.CPGF_MD_TEMPLATE _method("velocity", &D::ClassType::velocity);
    _d.CPGF_MD_TEMPLATE _method("finalPosition", &D::ClassType::finalPosition);
    _d.CPGF_MD_TEMPLATE _method("pixelPerMeter", &D::ClassType::pixelPerMeter);
    _d.CPGF_MD_TEMPLATE _method("scrollerProperties", &D::ClassType::scrollerProperties);
    _d.CPGF_MD_TEMPLATE _method("setSnapPositionsX", (void (D::ClassType::*) (const QList< qreal > &))&D::ClassType::setSnapPositionsX);
    _d.CPGF_MD_TEMPLATE _method("setSnapPositionsX", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setSnapPositionsX);
    _d.CPGF_MD_TEMPLATE _method("setSnapPositionsY", (void (D::ClassType::*) (const QList< qreal > &))&D::ClassType::setSnapPositionsY);
    _d.CPGF_MD_TEMPLATE _method("setSnapPositionsY", (void (D::ClassType::*) (qreal, qreal))&D::ClassType::setSnapPositionsY);
    _d.CPGF_MD_TEMPLATE _method("setScrollerProperties", &D::ClassType::setScrollerProperties);
    _d.CPGF_MD_TEMPLATE _method("scrollTo", (void (D::ClassType::*) (const QPointF &))&D::ClassType::scrollTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("scrollTo", (void (D::ClassType::*) (const QPointF &, int))&D::ClassType::scrollTo, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("ensureVisible", (void (D::ClassType::*) (const QRectF &, qreal, qreal))&D::ClassType::ensureVisible);
    _d.CPGF_MD_TEMPLATE _method("ensureVisible", (void (D::ClassType::*) (const QRectF &, qreal, qreal, int))&D::ClassType::ensureVisible);
    _d.CPGF_MD_TEMPLATE _method("resendPrepareEvent", &D::ClassType::resendPrepareEvent);
    _d.CPGF_MD_TEMPLATE _method("stateChanged", &D::ClassType::stateChanged);
    _d.CPGF_MD_TEMPLATE _method("scrollerPropertiesChanged", &D::ClassType::scrollerPropertiesChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasScroller", &D::ClassType::hasScroller);
    _d.CPGF_MD_TEMPLATE _method("scroller", (QScroller * (*) (QObject *))&D::ClassType::scroller);
    _d.CPGF_MD_TEMPLATE _method("scroller", (const QScroller * (*) (const QObject *))&D::ClassType::scroller);
    _d.CPGF_MD_TEMPLATE _method("grabGesture", &D::ClassType::grabGesture)
        ._default(copyVariantFromCopyable(QScroller::TouchGesture))
    ;
    _d.CPGF_MD_TEMPLATE _method("grabbedGesture", &D::ClassType::grabbedGesture);
    _d.CPGF_MD_TEMPLATE _method("ungrabGesture", &D::ClassType::ungrabGesture);
    _d.CPGF_MD_TEMPLATE _method("activeScrollers", &D::ClassType::activeScrollers);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::State>("State")
        ._element("Inactive", D::ClassType::Inactive)
        ._element("Pressed", D::ClassType::Pressed)
        ._element("Dragging", D::ClassType::Dragging)
        ._element("Scrolling", D::ClassType::Scrolling)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ScrollerGestureType>("ScrollerGestureType")
        ._element("TouchGesture", D::ClassType::TouchGesture)
        ._element("LeftMouseButtonGesture", D::ClassType::LeftMouseButtonGesture)
        ._element("RightMouseButtonGesture", D::ClassType::RightMouseButtonGesture)
        ._element("MiddleMouseButtonGesture", D::ClassType::MiddleMouseButtonGesture)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Input>("Input")
        ._element("InputPress", D::ClassType::InputPress)
        ._element("InputMove", D::ClassType::InputMove)
        ._element("InputRelease", D::ClassType::InputRelease)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
