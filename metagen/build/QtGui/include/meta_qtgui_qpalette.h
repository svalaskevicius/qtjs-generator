// Auto generated file, don't modify.

#ifndef __META_QTGUI_QPALETTE_H
#define __META_QTGUI_QPALETTE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qpalette(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QPalette &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QPalette &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QPalette &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QPalette & opErAToRWrapper_QPalette__opAssign(QPalette * self, const QPalette & palette) {
    return (*self) = palette;
}
inline bool opErAToRWrapper_QPalette__opEqual(const QPalette * self, const QPalette & p) {
    return (*self) == p;
}
inline bool opErAToRWrapper_QPalette__opNotEqual(const QPalette * self, const QPalette & p) {
    return (*self) != p;
}


template <typename D>
void buildMetaClass_QPalette(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QColor &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (Qt::GlobalColor)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QColor &, const QColor &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5>, cpgf::GMetaRuleCopyConstReference<6>, cpgf::GMetaRuleCopyConstReference<7>, cpgf::GMetaRuleCopyConstReference<8> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QColor &, const QColor &, const QColor &, const QColor &, const QColor &, const QColor &, const QColor &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5>, cpgf::GMetaRuleCopyConstReference<6> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPalette &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("currentColorGroup", &D::ClassType::currentColorGroup);
    _d.CPGF_MD_TEMPLATE _method("setCurrentColorGroup", &D::ClassType::setCurrentColorGroup);
    _d.CPGF_MD_TEMPLATE _method("color", (const QColor & (D::ClassType::*) (QPalette::ColorGroup, QPalette::ColorRole) const)&D::ClassType::color, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("brush", (const QBrush & (D::ClassType::*) (QPalette::ColorGroup, QPalette::ColorRole) const)&D::ClassType::brush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setColor", (void (D::ClassType::*) (QPalette::ColorGroup, QPalette::ColorRole, const QColor &))&D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("setColor", (void (D::ClassType::*) (QPalette::ColorRole, const QColor &))&D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setBrush", (void (D::ClassType::*) (QPalette::ColorRole, const QBrush &))&D::ClassType::setBrush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("isBrushSet", &D::ClassType::isBrushSet);
    _d.CPGF_MD_TEMPLATE _method("setBrush", (void (D::ClassType::*) (QPalette::ColorGroup, QPalette::ColorRole, const QBrush &))&D::ClassType::setBrush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("setColorGroup", (void (D::ClassType::*) (QPalette::ColorGroup, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &, const QBrush &))&D::ClassType::setColorGroup, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5>, cpgf::GMetaRuleCopyConstReference<6>, cpgf::GMetaRuleCopyConstReference<7>, cpgf::GMetaRuleCopyConstReference<8>, cpgf::GMetaRuleCopyConstReference<9> >());
    _d.CPGF_MD_TEMPLATE _method("isEqual", &D::ClassType::isEqual);
    _d.CPGF_MD_TEMPLATE _method("color", (const QColor & (D::ClassType::*) (QPalette::ColorRole) const)&D::ClassType::color, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("brush", (const QBrush & (D::ClassType::*) (QPalette::ColorRole) const)&D::ClassType::brush, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("foreground", &D::ClassType::foreground, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("windowText", &D::ClassType::windowText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("button", &D::ClassType::button, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("light", &D::ClassType::light, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("dark", &D::ClassType::dark, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("mid", &D::ClassType::mid, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("base", &D::ClassType::base, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("alternateBase", &D::ClassType::alternateBase, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("toolTipBase", &D::ClassType::toolTipBase, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("toolTipText", &D::ClassType::toolTipText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("background", &D::ClassType::background, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("window", &D::ClassType::window, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("midlight", &D::ClassType::midlight, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("brightText", &D::ClassType::brightText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("buttonText", &D::ClassType::buttonText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("shadow", &D::ClassType::shadow, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("highlight", &D::ClassType::highlight, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("highlightedText", &D::ClassType::highlightedText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("link", &D::ClassType::link, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("linkVisited", &D::ClassType::linkVisited, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<-1> >());
    _d.CPGF_MD_TEMPLATE _method("isCopyOf", &D::ClassType::isCopyOf, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("cacheKey", &D::ClassType::cacheKey);
    _d.CPGF_MD_TEMPLATE _method("resolve", (QPalette (D::ClassType::*) (const QPalette &) const)&D::ClassType::resolve, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("resolve", (uint (D::ClassType::*) () const)&D::ClassType::resolve);
    _d.CPGF_MD_TEMPLATE _method("resolve", (void (D::ClassType::*) (uint))&D::ClassType::resolve);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ColorGroup>("ColorGroup")
        ._element("Active", D::ClassType::Active)
        ._element("Disabled", D::ClassType::Disabled)
        ._element("Inactive", D::ClassType::Inactive)
        ._element("NColorGroups", D::ClassType::NColorGroups)
        ._element("Current", D::ClassType::Current)
        ._element("All", D::ClassType::All)
        ._element("Normal", D::ClassType::Normal)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ColorRole>("ColorRole")
        ._element("WindowText", D::ClassType::WindowText)
        ._element("Button", D::ClassType::Button)
        ._element("Light", D::ClassType::Light)
        ._element("Midlight", D::ClassType::Midlight)
        ._element("Dark", D::ClassType::Dark)
        ._element("Mid", D::ClassType::Mid)
        ._element("Text", D::ClassType::Text)
        ._element("BrightText", D::ClassType::BrightText)
        ._element("ButtonText", D::ClassType::ButtonText)
        ._element("Base", D::ClassType::Base)
        ._element("Window", D::ClassType::Window)
        ._element("Shadow", D::ClassType::Shadow)
        ._element("Highlight", D::ClassType::Highlight)
        ._element("HighlightedText", D::ClassType::HighlightedText)
        ._element("Link", D::ClassType::Link)
        ._element("LinkVisited", D::ClassType::LinkVisited)
        ._element("AlternateBase", D::ClassType::AlternateBase)
        ._element("NoRole", D::ClassType::NoRole)
        ._element("ToolTipBase", D::ClassType::ToolTipBase)
        ._element("ToolTipText", D::ClassType::ToolTipText)
        ._element("NColorRoles", D::ClassType::NColorRoles)
        ._element("Foreground", D::ClassType::Foreground)
        ._element("Background", D::ClassType::Background)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QPalette & (*)(cpgf::GMetaSelf, const QPalette &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QPalette & (*) (QPalette *, const QPalette &))&opErAToRWrapper_QPalette__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QPalette &)>(mopHolder == mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QPalette *, const QPalette &))&opErAToRWrapper_QPalette__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QPalette &)>(mopHolder != mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QPalette *, const QPalette &))&opErAToRWrapper_QPalette__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
