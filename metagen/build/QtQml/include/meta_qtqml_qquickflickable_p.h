// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKFLICKABLE_P_H
#define CPGF_META_QTQML_QQUICKFLICKABLE_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QQuickFlickable(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQuickItem *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("flickableData", &D::ClassType::flickableData);
    _d.CPGF_MD_TEMPLATE _method("flickableChildren", &D::ClassType::flickableChildren);
    _d.CPGF_MD_TEMPLATE _method("boundsBehavior", &D::ClassType::boundsBehavior);
    _d.CPGF_MD_TEMPLATE _method("setBoundsBehavior", &D::ClassType::setBoundsBehavior);
    _d.CPGF_MD_TEMPLATE _method("rebound", &D::ClassType::rebound);
    _d.CPGF_MD_TEMPLATE _method("setRebound", &D::ClassType::setRebound);
    _d.CPGF_MD_TEMPLATE _method("contentWidth", &D::ClassType::contentWidth);
    _d.CPGF_MD_TEMPLATE _method("setContentWidth", &D::ClassType::setContentWidth);
    _d.CPGF_MD_TEMPLATE _method("contentHeight", &D::ClassType::contentHeight);
    _d.CPGF_MD_TEMPLATE _method("setContentHeight", &D::ClassType::setContentHeight);
    _d.CPGF_MD_TEMPLATE _method("contentX", &D::ClassType::contentX);
    _d.CPGF_MD_TEMPLATE _method("setContentX", &D::ClassType::setContentX);
    _d.CPGF_MD_TEMPLATE _method("contentY", &D::ClassType::contentY);
    _d.CPGF_MD_TEMPLATE _method("setContentY", &D::ClassType::setContentY);
    _d.CPGF_MD_TEMPLATE _method("topMargin", &D::ClassType::topMargin);
    _d.CPGF_MD_TEMPLATE _method("setTopMargin", &D::ClassType::setTopMargin);
    _d.CPGF_MD_TEMPLATE _method("bottomMargin", &D::ClassType::bottomMargin);
    _d.CPGF_MD_TEMPLATE _method("setBottomMargin", &D::ClassType::setBottomMargin);
    _d.CPGF_MD_TEMPLATE _method("leftMargin", &D::ClassType::leftMargin);
    _d.CPGF_MD_TEMPLATE _method("setLeftMargin", &D::ClassType::setLeftMargin);
    _d.CPGF_MD_TEMPLATE _method("rightMargin", &D::ClassType::rightMargin);
    _d.CPGF_MD_TEMPLATE _method("setRightMargin", &D::ClassType::setRightMargin);
    _d.CPGF_MD_TEMPLATE _method("originY", &D::ClassType::originY);
    _d.CPGF_MD_TEMPLATE _method("originX", &D::ClassType::originX);
    _d.CPGF_MD_TEMPLATE _method("isMoving", &D::ClassType::isMoving);
    _d.CPGF_MD_TEMPLATE _method("isMovingHorizontally", &D::ClassType::isMovingHorizontally);
    _d.CPGF_MD_TEMPLATE _method("isMovingVertically", &D::ClassType::isMovingVertically);
    _d.CPGF_MD_TEMPLATE _method("isFlicking", &D::ClassType::isFlicking);
    _d.CPGF_MD_TEMPLATE _method("isFlickingHorizontally", &D::ClassType::isFlickingHorizontally);
    _d.CPGF_MD_TEMPLATE _method("isFlickingVertically", &D::ClassType::isFlickingVertically);
    _d.CPGF_MD_TEMPLATE _method("isDragging", &D::ClassType::isDragging);
    _d.CPGF_MD_TEMPLATE _method("isDraggingHorizontally", &D::ClassType::isDraggingHorizontally);
    _d.CPGF_MD_TEMPLATE _method("isDraggingVertically", &D::ClassType::isDraggingVertically);
    _d.CPGF_MD_TEMPLATE _method("pressDelay", &D::ClassType::pressDelay);
    _d.CPGF_MD_TEMPLATE _method("setPressDelay", &D::ClassType::setPressDelay);
    _d.CPGF_MD_TEMPLATE _method("maximumFlickVelocity", &D::ClassType::maximumFlickVelocity);
    _d.CPGF_MD_TEMPLATE _method("setMaximumFlickVelocity", &D::ClassType::setMaximumFlickVelocity);
    _d.CPGF_MD_TEMPLATE _method("flickDeceleration", &D::ClassType::flickDeceleration);
    _d.CPGF_MD_TEMPLATE _method("setFlickDeceleration", &D::ClassType::setFlickDeceleration);
    _d.CPGF_MD_TEMPLATE _method("isInteractive", &D::ClassType::isInteractive);
    _d.CPGF_MD_TEMPLATE _method("setInteractive", &D::ClassType::setInteractive);
    _d.CPGF_MD_TEMPLATE _method("horizontalVelocity", &D::ClassType::horizontalVelocity);
    _d.CPGF_MD_TEMPLATE _method("verticalVelocity", &D::ClassType::verticalVelocity);
    _d.CPGF_MD_TEMPLATE _method("isAtXEnd", &D::ClassType::isAtXEnd);
    _d.CPGF_MD_TEMPLATE _method("isAtXBeginning", &D::ClassType::isAtXBeginning);
    _d.CPGF_MD_TEMPLATE _method("isAtYEnd", &D::ClassType::isAtYEnd);
    _d.CPGF_MD_TEMPLATE _method("isAtYBeginning", &D::ClassType::isAtYBeginning);
    _d.CPGF_MD_TEMPLATE _method("contentItem", &D::ClassType::contentItem);
    _d.CPGF_MD_TEMPLATE _method("flickableDirection", &D::ClassType::flickableDirection);
    _d.CPGF_MD_TEMPLATE _method("setFlickableDirection", &D::ClassType::setFlickableDirection);
    _d.CPGF_MD_TEMPLATE _method("pixelAligned", &D::ClassType::pixelAligned);
    _d.CPGF_MD_TEMPLATE _method("setPixelAligned", &D::ClassType::setPixelAligned);
    _d.CPGF_MD_TEMPLATE _method("resizeContent", &D::ClassType::resizeContent);
    _d.CPGF_MD_TEMPLATE _method("returnToBounds", &D::ClassType::returnToBounds);
    _d.CPGF_MD_TEMPLATE _method("flick", &D::ClassType::flick);
    _d.CPGF_MD_TEMPLATE _method("cancelFlick", &D::ClassType::cancelFlick);
    _d.CPGF_MD_TEMPLATE _method("contentWidthChanged", &D::ClassType::contentWidthChanged);
    _d.CPGF_MD_TEMPLATE _method("contentHeightChanged", &D::ClassType::contentHeightChanged);
    _d.CPGF_MD_TEMPLATE _method("contentXChanged", &D::ClassType::contentXChanged);
    _d.CPGF_MD_TEMPLATE _method("contentYChanged", &D::ClassType::contentYChanged);
    _d.CPGF_MD_TEMPLATE _method("topMarginChanged", &D::ClassType::topMarginChanged);
    _d.CPGF_MD_TEMPLATE _method("bottomMarginChanged", &D::ClassType::bottomMarginChanged);
    _d.CPGF_MD_TEMPLATE _method("leftMarginChanged", &D::ClassType::leftMarginChanged);
    _d.CPGF_MD_TEMPLATE _method("rightMarginChanged", &D::ClassType::rightMarginChanged);
    _d.CPGF_MD_TEMPLATE _method("originYChanged", &D::ClassType::originYChanged);
    _d.CPGF_MD_TEMPLATE _method("originXChanged", &D::ClassType::originXChanged);
    _d.CPGF_MD_TEMPLATE _method("movingChanged", &D::ClassType::movingChanged);
    _d.CPGF_MD_TEMPLATE _method("movingHorizontallyChanged", &D::ClassType::movingHorizontallyChanged);
    _d.CPGF_MD_TEMPLATE _method("movingVerticallyChanged", &D::ClassType::movingVerticallyChanged);
    _d.CPGF_MD_TEMPLATE _method("flickingChanged", &D::ClassType::flickingChanged);
    _d.CPGF_MD_TEMPLATE _method("flickingHorizontallyChanged", &D::ClassType::flickingHorizontallyChanged);
    _d.CPGF_MD_TEMPLATE _method("flickingVerticallyChanged", &D::ClassType::flickingVerticallyChanged);
    _d.CPGF_MD_TEMPLATE _method("draggingChanged", &D::ClassType::draggingChanged);
    _d.CPGF_MD_TEMPLATE _method("draggingHorizontallyChanged", &D::ClassType::draggingHorizontallyChanged);
    _d.CPGF_MD_TEMPLATE _method("draggingVerticallyChanged", &D::ClassType::draggingVerticallyChanged);
    _d.CPGF_MD_TEMPLATE _method("horizontalVelocityChanged", &D::ClassType::horizontalVelocityChanged);
    _d.CPGF_MD_TEMPLATE _method("verticalVelocityChanged", &D::ClassType::verticalVelocityChanged);
    _d.CPGF_MD_TEMPLATE _method("isAtBoundaryChanged", &D::ClassType::isAtBoundaryChanged);
    _d.CPGF_MD_TEMPLATE _method("flickableDirectionChanged", &D::ClassType::flickableDirectionChanged);
    _d.CPGF_MD_TEMPLATE _method("interactiveChanged", &D::ClassType::interactiveChanged);
    _d.CPGF_MD_TEMPLATE _method("boundsBehaviorChanged", &D::ClassType::boundsBehaviorChanged);
    _d.CPGF_MD_TEMPLATE _method("reboundChanged", &D::ClassType::reboundChanged);
    _d.CPGF_MD_TEMPLATE _method("maximumFlickVelocityChanged", &D::ClassType::maximumFlickVelocityChanged);
    _d.CPGF_MD_TEMPLATE _method("flickDecelerationChanged", &D::ClassType::flickDecelerationChanged);
    _d.CPGF_MD_TEMPLATE _method("pressDelayChanged", &D::ClassType::pressDelayChanged);
    _d.CPGF_MD_TEMPLATE _method("movementStarted", &D::ClassType::movementStarted);
    _d.CPGF_MD_TEMPLATE _method("movementEnded", &D::ClassType::movementEnded);
    _d.CPGF_MD_TEMPLATE _method("flickStarted", &D::ClassType::flickStarted);
    _d.CPGF_MD_TEMPLATE _method("flickEnded", &D::ClassType::flickEnded);
    _d.CPGF_MD_TEMPLATE _method("dragStarted", &D::ClassType::dragStarted);
    _d.CPGF_MD_TEMPLATE _method("dragEnded", &D::ClassType::dragEnded);
    _d.CPGF_MD_TEMPLATE _method("pixelAlignedChanged", &D::ClassType::pixelAlignedChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::BoundsBehavior>("BoundsBehavior")
        ._element("StopAtBounds", D::ClassType::StopAtBounds)
        ._element("DragOverBounds", D::ClassType::DragOverBounds)
        ._element("DragAndOvershootBounds", D::ClassType::DragAndOvershootBounds)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FlickableDirection>("FlickableDirection")
        ._element("AutoFlickDirection", D::ClassType::AutoFlickDirection)
        ._element("HorizontalFlick", D::ClassType::HorizontalFlick)
        ._element("VerticalFlick", D::ClassType::VerticalFlick)
        ._element("HorizontalAndVerticalFlick", D::ClassType::HorizontalAndVerticalFlick)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
