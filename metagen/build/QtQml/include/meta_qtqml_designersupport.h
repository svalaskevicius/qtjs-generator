// Auto generated file, don't modify.

#ifndef __META_QTQML_DESIGNERSUPPORT_H
#define __META_QTQML_DESIGNERSUPPORT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_DesignerSupport(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("refFromEffectItem", &D::ClassType::refFromEffectItem)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("derefFromEffectItem", &D::ClassType::derefFromEffectItem)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("renderImageForItem", &D::ClassType::renderImageForItem, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("isDirty", &D::ClassType::isDirty);
    _d.CPGF_MD_TEMPLATE _method("addDirty", &D::ClassType::addDirty);
    _d.CPGF_MD_TEMPLATE _method("resetDirty", &D::ClassType::resetDirty);
    _d.CPGF_MD_TEMPLATE _method("windowTransform", &D::ClassType::windowTransform);
    _d.CPGF_MD_TEMPLATE _method("parentTransform", &D::ClassType::parentTransform);
    _d.CPGF_MD_TEMPLATE _method("isAnchoredTo", &D::ClassType::isAnchoredTo);
    _d.CPGF_MD_TEMPLATE _method("areChildrenAnchoredTo", &D::ClassType::areChildrenAnchoredTo);
    _d.CPGF_MD_TEMPLATE _method("hasAnchor", &D::ClassType::hasAnchor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("anchorFillTargetItem", &D::ClassType::anchorFillTargetItem);
    _d.CPGF_MD_TEMPLATE _method("anchorCenterInTargetItem", &D::ClassType::anchorCenterInTargetItem);
    _d.CPGF_MD_TEMPLATE _method("anchorLineTarget", &D::ClassType::anchorLineTarget, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("resetAnchor", &D::ClassType::resetAnchor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("emitComponentCompleteSignalForAttachedProperty", &D::ClassType::emitComponentCompleteSignalForAttachedProperty);
    _d.CPGF_MD_TEMPLATE _method("statesForItem", &D::ClassType::statesForItem);
    _d.CPGF_MD_TEMPLATE _method("isComponentComplete", &D::ClassType::isComponentComplete);
    _d.CPGF_MD_TEMPLATE _method("borderWidth", &D::ClassType::borderWidth);
    _d.CPGF_MD_TEMPLATE _method("refreshExpressions", &D::ClassType::refreshExpressions);
    _d.CPGF_MD_TEMPLATE _method("setRootItem", &D::ClassType::setRootItem);
    _d.CPGF_MD_TEMPLATE _method("isValidWidth", &D::ClassType::isValidWidth);
    _d.CPGF_MD_TEMPLATE _method("isValidHeight", &D::ClassType::isValidHeight);
    _d.CPGF_MD_TEMPLATE _method("updateDirtyNode", &D::ClassType::updateDirtyNode);
    _d.CPGF_MD_TEMPLATE _method("activateDesignerWindowManager", &D::ClassType::activateDesignerWindowManager);
    _d.CPGF_MD_TEMPLATE _method("activateDesignerMode", &D::ClassType::activateDesignerMode);
    _d.CPGF_MD_TEMPLATE _method("disableComponentComplete", &D::ClassType::disableComponentComplete);
    _d.CPGF_MD_TEMPLATE _method("enableComponentComplete", &D::ClassType::enableComponentComplete);
    _d.CPGF_MD_TEMPLATE _method("createOpenGLContext", &D::ClassType::createOpenGLContext);
    _d.CPGF_MD_TEMPLATE _method("polishItems", &D::ClassType::polishItems);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::DirtyType>("DirtyType")
        ._element("TransformOrigin", D::ClassType::TransformOrigin)
        ._element("Transform", D::ClassType::Transform)
        ._element("BasicTransform", D::ClassType::BasicTransform)
        ._element("Position", D::ClassType::Position)
        ._element("Size", D::ClassType::Size)
        ._element("ZValue", D::ClassType::ZValue)
        ._element("Content", D::ClassType::Content)
        ._element("Smooth", D::ClassType::Smooth)
        ._element("OpacityValue", D::ClassType::OpacityValue)
        ._element("ChildrenChanged", D::ClassType::ChildrenChanged)
        ._element("ChildrenStackingChanged", D::ClassType::ChildrenStackingChanged)
        ._element("ParentChanged", D::ClassType::ParentChanged)
        ._element("Clip", D::ClassType::Clip)
        ._element("Window", D::ClassType::Window)
        ._element("EffectReference", D::ClassType::EffectReference)
        ._element("Visible", D::ClassType::Visible)
        ._element("HideReference", D::ClassType::HideReference)
        ._element("TransformUpdateMask", D::ClassType::TransformUpdateMask)
        ._element("ComplexTransformUpdateMask", D::ClassType::ComplexTransformUpdateMask)
        ._element("ContentUpdateMask", D::ClassType::ContentUpdateMask)
        ._element("ChildrenUpdateMask", D::ClassType::ChildrenUpdateMask)
        ._element("AllMask", D::ClassType::AllMask)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
