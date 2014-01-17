// Auto generated file, don't modify.

#ifndef __META_QTGUI_QINPUTMETHOD_H
#define __META_QTGUI_QINPUTMETHOD_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QInputMethod(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("inputItemTransform", &D::ClassType::inputItemTransform);
    _d.CPGF_MD_TEMPLATE _method("setInputItemTransform", &D::ClassType::setInputItemTransform, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("inputItemRectangle", &D::ClassType::inputItemRectangle);
    _d.CPGF_MD_TEMPLATE _method("setInputItemRectangle", &D::ClassType::setInputItemRectangle);
    _d.CPGF_MD_TEMPLATE _method("cursorRectangle", &D::ClassType::cursorRectangle);
    _d.CPGF_MD_TEMPLATE _method("keyboardRectangle", &D::ClassType::keyboardRectangle);
    _d.CPGF_MD_TEMPLATE _method("isVisible", &D::ClassType::isVisible);
    _d.CPGF_MD_TEMPLATE _method("setVisible", &D::ClassType::setVisible);
    _d.CPGF_MD_TEMPLATE _method("isAnimating", &D::ClassType::isAnimating);
    _d.CPGF_MD_TEMPLATE _method("locale", &D::ClassType::locale);
    _d.CPGF_MD_TEMPLATE _method("inputDirection", &D::ClassType::inputDirection);
    _d.CPGF_MD_TEMPLATE _method("show", &D::ClassType::show);
    _d.CPGF_MD_TEMPLATE _method("hide", &D::ClassType::hide);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("commit", &D::ClassType::commit);
    _d.CPGF_MD_TEMPLATE _method("invokeAction", &D::ClassType::invokeAction);
    _d.CPGF_MD_TEMPLATE _method("cursorRectangleChanged", &D::ClassType::cursorRectangleChanged);
    _d.CPGF_MD_TEMPLATE _method("keyboardRectangleChanged", &D::ClassType::keyboardRectangleChanged);
    _d.CPGF_MD_TEMPLATE _method("visibleChanged", &D::ClassType::visibleChanged);
    _d.CPGF_MD_TEMPLATE _method("animatingChanged", &D::ClassType::animatingChanged);
    _d.CPGF_MD_TEMPLATE _method("localeChanged", &D::ClassType::localeChanged);
    _d.CPGF_MD_TEMPLATE _method("inputDirectionChanged", &D::ClassType::inputDirectionChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Action>("Action")
        ._element("Click", D::ClassType::Click)
        ._element("ContextMenu", D::ClassType::ContextMenu)
    ;
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
