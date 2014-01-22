// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QGRAPHICSSCENEEVENT_H
#define __META_QTWIDGETS_QGRAPHICSSCENEEVENT_H


#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtwidgets { 


template <typename D>
void buildMetaClass_QGraphicsSceneContextMenuEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type)>()
        ._default(copyVariantFromCopyable(QEvent::None))
    ;
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("setPos", &D::ClassType::setPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("scenePos", &D::ClassType::scenePos);
    _d.CPGF_MD_TEMPLATE _method("setScenePos", &D::ClassType::setScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("screenPos", &D::ClassType::screenPos);
    _d.CPGF_MD_TEMPLATE _method("setScreenPos", &D::ClassType::setScreenPos);
    _d.CPGF_MD_TEMPLATE _method("modifiers", &D::ClassType::modifiers);
    _d.CPGF_MD_TEMPLATE _method("setModifiers", &D::ClassType::setModifiers);
    _d.CPGF_MD_TEMPLATE _method("reason", &D::ClassType::reason);
    _d.CPGF_MD_TEMPLATE _method("setReason", &D::ClassType::setReason);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Reason>("Reason")
        ._element("Mouse", D::ClassType::Mouse)
        ._element("Keyboard", D::ClassType::Keyboard)
        ._element("Other", D::ClassType::Other)
    ;
}


template <typename D>
void buildMetaClass_QGraphicsSceneDragDropEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type)>()
        ._default(copyVariantFromCopyable(QEvent::None))
    ;
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("setPos", &D::ClassType::setPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("scenePos", &D::ClassType::scenePos);
    _d.CPGF_MD_TEMPLATE _method("setScenePos", &D::ClassType::setScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("screenPos", &D::ClassType::screenPos);
    _d.CPGF_MD_TEMPLATE _method("setScreenPos", &D::ClassType::setScreenPos);
    _d.CPGF_MD_TEMPLATE _method("buttons", &D::ClassType::buttons);
    _d.CPGF_MD_TEMPLATE _method("setButtons", &D::ClassType::setButtons);
    _d.CPGF_MD_TEMPLATE _method("modifiers", &D::ClassType::modifiers);
    _d.CPGF_MD_TEMPLATE _method("setModifiers", &D::ClassType::setModifiers);
    _d.CPGF_MD_TEMPLATE _method("possibleActions", &D::ClassType::possibleActions);
    _d.CPGF_MD_TEMPLATE _method("setPossibleActions", &D::ClassType::setPossibleActions);
    _d.CPGF_MD_TEMPLATE _method("proposedAction", &D::ClassType::proposedAction);
    _d.CPGF_MD_TEMPLATE _method("setProposedAction", &D::ClassType::setProposedAction);
    _d.CPGF_MD_TEMPLATE _method("acceptProposedAction", &D::ClassType::acceptProposedAction);
    _d.CPGF_MD_TEMPLATE _method("dropAction", &D::ClassType::dropAction);
    _d.CPGF_MD_TEMPLATE _method("setDropAction", &D::ClassType::setDropAction);
    _d.CPGF_MD_TEMPLATE _method("source", &D::ClassType::source);
    _d.CPGF_MD_TEMPLATE _method("setSource", &D::ClassType::setSource);
    _d.CPGF_MD_TEMPLATE _method("mimeData", &D::ClassType::mimeData);
    _d.CPGF_MD_TEMPLATE _method("setMimeData", &D::ClassType::setMimeData);
}


template <typename D>
void buildMetaClass_QGraphicsSceneEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type)>();
    _d.CPGF_MD_TEMPLATE _method("widget", &D::ClassType::widget);
    _d.CPGF_MD_TEMPLATE _method("setWidget", &D::ClassType::setWidget);
}


template <typename D>
void buildMetaClass_QGraphicsSceneHelpEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type)>()
        ._default(copyVariantFromCopyable(QEvent::None))
    ;
    _d.CPGF_MD_TEMPLATE _method("scenePos", &D::ClassType::scenePos);
    _d.CPGF_MD_TEMPLATE _method("setScenePos", &D::ClassType::setScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("screenPos", &D::ClassType::screenPos);
    _d.CPGF_MD_TEMPLATE _method("setScreenPos", &D::ClassType::setScreenPos);
}


template <typename D>
void buildMetaClass_QGraphicsSceneHoverEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type)>()
        ._default(copyVariantFromCopyable(QEvent::None))
    ;
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("setPos", &D::ClassType::setPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("scenePos", &D::ClassType::scenePos);
    _d.CPGF_MD_TEMPLATE _method("setScenePos", &D::ClassType::setScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("screenPos", &D::ClassType::screenPos);
    _d.CPGF_MD_TEMPLATE _method("setScreenPos", &D::ClassType::setScreenPos);
    _d.CPGF_MD_TEMPLATE _method("lastPos", &D::ClassType::lastPos);
    _d.CPGF_MD_TEMPLATE _method("setLastPos", &D::ClassType::setLastPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("lastScenePos", &D::ClassType::lastScenePos);
    _d.CPGF_MD_TEMPLATE _method("setLastScenePos", &D::ClassType::setLastScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("lastScreenPos", &D::ClassType::lastScreenPos);
    _d.CPGF_MD_TEMPLATE _method("setLastScreenPos", &D::ClassType::setLastScreenPos);
    _d.CPGF_MD_TEMPLATE _method("modifiers", &D::ClassType::modifiers);
    _d.CPGF_MD_TEMPLATE _method("setModifiers", &D::ClassType::setModifiers);
}


template <typename D>
void buildMetaClass_QGraphicsSceneMouseEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type)>()
        ._default(copyVariantFromCopyable(QEvent::None))
    ;
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("setPos", &D::ClassType::setPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("scenePos", &D::ClassType::scenePos);
    _d.CPGF_MD_TEMPLATE _method("setScenePos", &D::ClassType::setScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("screenPos", &D::ClassType::screenPos);
    _d.CPGF_MD_TEMPLATE _method("setScreenPos", &D::ClassType::setScreenPos);
    _d.CPGF_MD_TEMPLATE _method("buttonDownPos", &D::ClassType::buttonDownPos);
    _d.CPGF_MD_TEMPLATE _method("setButtonDownPos", &D::ClassType::setButtonDownPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("buttonDownScenePos", &D::ClassType::buttonDownScenePos);
    _d.CPGF_MD_TEMPLATE _method("setButtonDownScenePos", &D::ClassType::setButtonDownScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("buttonDownScreenPos", &D::ClassType::buttonDownScreenPos);
    _d.CPGF_MD_TEMPLATE _method("setButtonDownScreenPos", &D::ClassType::setButtonDownScreenPos);
    _d.CPGF_MD_TEMPLATE _method("lastPos", &D::ClassType::lastPos);
    _d.CPGF_MD_TEMPLATE _method("setLastPos", &D::ClassType::setLastPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("lastScenePos", &D::ClassType::lastScenePos);
    _d.CPGF_MD_TEMPLATE _method("setLastScenePos", &D::ClassType::setLastScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("lastScreenPos", &D::ClassType::lastScreenPos);
    _d.CPGF_MD_TEMPLATE _method("setLastScreenPos", &D::ClassType::setLastScreenPos);
    _d.CPGF_MD_TEMPLATE _method("buttons", &D::ClassType::buttons);
    _d.CPGF_MD_TEMPLATE _method("setButtons", &D::ClassType::setButtons);
    _d.CPGF_MD_TEMPLATE _method("button", &D::ClassType::button);
    _d.CPGF_MD_TEMPLATE _method("setButton", &D::ClassType::setButton);
    _d.CPGF_MD_TEMPLATE _method("modifiers", &D::ClassType::modifiers);
    _d.CPGF_MD_TEMPLATE _method("setModifiers", &D::ClassType::setModifiers);
}


template <typename D>
void buildMetaClass_QGraphicsSceneMoveEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("oldPos", &D::ClassType::oldPos);
    _d.CPGF_MD_TEMPLATE _method("setOldPos", &D::ClassType::setOldPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("newPos", &D::ClassType::newPos);
    _d.CPGF_MD_TEMPLATE _method("setNewPos", &D::ClassType::setNewPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


template <typename D>
void buildMetaClass_QGraphicsSceneResizeEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("oldSize", &D::ClassType::oldSize);
    _d.CPGF_MD_TEMPLATE _method("setOldSize", &D::ClassType::setOldSize);
    _d.CPGF_MD_TEMPLATE _method("newSize", &D::ClassType::newSize);
    _d.CPGF_MD_TEMPLATE _method("setNewSize", &D::ClassType::setNewSize);
}


template <typename D>
void buildMetaClass_QGraphicsSceneWheelEvent(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QEvent::Type)>()
        ._default(copyVariantFromCopyable(QEvent::None))
    ;
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("setPos", &D::ClassType::setPos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("scenePos", &D::ClassType::scenePos);
    _d.CPGF_MD_TEMPLATE _method("setScenePos", &D::ClassType::setScenePos, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("screenPos", &D::ClassType::screenPos);
    _d.CPGF_MD_TEMPLATE _method("setScreenPos", &D::ClassType::setScreenPos);
    _d.CPGF_MD_TEMPLATE _method("buttons", &D::ClassType::buttons);
    _d.CPGF_MD_TEMPLATE _method("setButtons", &D::ClassType::setButtons);
    _d.CPGF_MD_TEMPLATE _method("modifiers", &D::ClassType::modifiers);
    _d.CPGF_MD_TEMPLATE _method("setModifiers", &D::ClassType::setModifiers);
    _d.CPGF_MD_TEMPLATE _method("delta", &D::ClassType::delta);
    _d.CPGF_MD_TEMPLATE _method("setDelta", &D::ClassType::setDelta);
    _d.CPGF_MD_TEMPLATE _method("orientation", &D::ClassType::orientation);
    _d.CPGF_MD_TEMPLATE _method("setOrientation", &D::ClassType::setOrientation);
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
