// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QICON_H
#define CPGF_META_QTGUI_QICON_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qicon(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QIcon &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QIcon &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QIcon &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
}


inline QIcon & opErAToRWrapper_QIcon__opAssign(QIcon * self, const QIcon & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QIcon(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPixmap &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QIcon &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QIconEngine *)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("pixmap", (QPixmap (D::ClassType::*) (const QSize &, QIcon::Mode, QIcon::State) const)&D::ClassType::pixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
    ;
    _d.CPGF_MD_TEMPLATE _method("pixmap", (QPixmap (D::ClassType::*) (int, int, QIcon::Mode, QIcon::State) const)&D::ClassType::pixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
    ;
    _d.CPGF_MD_TEMPLATE _method("pixmap", (QPixmap (D::ClassType::*) (int, QIcon::Mode, QIcon::State) const)&D::ClassType::pixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
    ;
    _d.CPGF_MD_TEMPLATE _method("pixmap", (QPixmap (D::ClassType::*) (QWindow *, const QSize &, QIcon::Mode, QIcon::State) const)&D::ClassType::pixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
    ;
    _d.CPGF_MD_TEMPLATE _method("actualSize", (QSize (D::ClassType::*) (const QSize &, QIcon::Mode, QIcon::State) const)&D::ClassType::actualSize)
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
    ;
    _d.CPGF_MD_TEMPLATE _method("actualSize", (QSize (D::ClassType::*) (QWindow *, const QSize &, QIcon::Mode, QIcon::State) const)&D::ClassType::actualSize)
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
    ;
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("paint", (void (D::ClassType::*) (QPainter *, const QRect &, Qt::Alignment, QIcon::Mode, QIcon::State) const)&D::ClassType::paint)
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
        ._default(copyVariantFromCopyable(Qt::AlignCenter))
    ;
    _d.CPGF_MD_TEMPLATE _method("paint", (void (D::ClassType::*) (QPainter *, int, int, int, int, Qt::Alignment, QIcon::Mode, QIcon::State) const)&D::ClassType::paint)
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
        ._default(copyVariantFromCopyable(Qt::AlignCenter))
    ;
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("cacheKey", &D::ClassType::cacheKey);
    _d.CPGF_MD_TEMPLATE _method("addPixmap", &D::ClassType::addPixmap)
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
    ;
    _d.CPGF_MD_TEMPLATE _method("addFile", &D::ClassType::addFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
        ._default(copyVariantFromCopyable(QSize()))
    ;
    _d.CPGF_MD_TEMPLATE _method("availableSizes", &D::ClassType::availableSizes)
        ._default(copyVariantFromCopyable(QIcon::Off))
        ._default(copyVariantFromCopyable(QIcon::Normal))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromTheme", &D::ClassType::fromTheme, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QIcon()))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasThemeIcon", &D::ClassType::hasThemeIcon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("themeSearchPaths", &D::ClassType::themeSearchPaths);
    _d.CPGF_MD_TEMPLATE _method("setThemeSearchPaths", &D::ClassType::setThemeSearchPaths, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("themeName", &D::ClassType::themeName);
    _d.CPGF_MD_TEMPLATE _method("setThemeName", &D::ClassType::setThemeName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Mode>("Mode")
        ._element("Normal", D::ClassType::Normal)
        ._element("Disabled", D::ClassType::Disabled)
        ._element("Active", D::ClassType::Active)
        ._element("Selected", D::ClassType::Selected)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::State>("State")
        ._element("On", D::ClassType::On)
        ._element("Off", D::ClassType::Off)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QIcon & (*)(cpgf::GMetaSelf, const QIcon &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QIcon & (*) (QIcon *, const QIcon &))&opErAToRWrapper_QIcon__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
