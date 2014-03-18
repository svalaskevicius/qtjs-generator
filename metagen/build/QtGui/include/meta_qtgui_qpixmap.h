// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPIXMAP_H
#define CPGF_META_QTGUI_QPIXMAP_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qpixmap(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QPixmap &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QPixmap &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleParamNoncopyable<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QPixmap &)>(mopHolder << mopHolder);
}


inline QPixmap & opErAToRWrapper_QPixmap__opAssign(QPixmap * self, const QPixmap & __arg0) {
    return (*self) = __arg0;
}
inline bool opErAToRWrapper_QPixmap__opNot(const QPixmap * self) {
    return !(*self);
}


template <typename D>
void buildMetaClass_QPixmap(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QPlatformPixmap *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const char *, Qt::ImageConversionFlags)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *const*)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPixmap &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("devType", &D::ClassType::devType);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("depth", &D::ClassType::depth);
    _d.CPGF_MD_TEMPLATE _method("fill", (void (D::ClassType::*) (const QColor &))&D::ClassType::fill, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::white))
    ;
    _d.CPGF_MD_TEMPLATE _method("fill", (void (D::ClassType::*) (const QPaintDevice *, const QPoint &))&D::ClassType::fill);
    _d.CPGF_MD_TEMPLATE _method("fill", (void (D::ClassType::*) (const QPaintDevice *, int, int))&D::ClassType::fill);
    _d.CPGF_MD_TEMPLATE _method("mask", &D::ClassType::mask, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setMask", &D::ClassType::setMask);
    _d.CPGF_MD_TEMPLATE _method("devicePixelRatio", &D::ClassType::devicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("setDevicePixelRatio", &D::ClassType::setDevicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("hasAlpha", &D::ClassType::hasAlpha);
    _d.CPGF_MD_TEMPLATE _method("hasAlphaChannel", &D::ClassType::hasAlphaChannel);
    _d.CPGF_MD_TEMPLATE _method("createHeuristicMask", &D::ClassType::createHeuristicMask, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("createMaskFromColor", &D::ClassType::createMaskFromColor, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::MaskInColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("scaled", (QPixmap (D::ClassType::*) (int, int, Qt::AspectRatioMode, Qt::TransformationMode) const)&D::ClassType::scaled, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
        ._default(copyVariantFromCopyable(Qt::IgnoreAspectRatio))
    ;
    _d.CPGF_MD_TEMPLATE _method("scaled", (QPixmap (D::ClassType::*) (const QSize &, Qt::AspectRatioMode, Qt::TransformationMode) const)&D::ClassType::scaled, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
        ._default(copyVariantFromCopyable(Qt::IgnoreAspectRatio))
    ;
    _d.CPGF_MD_TEMPLATE _method("scaledToWidth", &D::ClassType::scaledToWidth, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
    ;
    _d.CPGF_MD_TEMPLATE _method("scaledToHeight", &D::ClassType::scaledToHeight, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
    ;
    _d.CPGF_MD_TEMPLATE _method("transformed", (QPixmap (D::ClassType::*) (const QMatrix &, Qt::TransformationMode) const)&D::ClassType::transformed, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
    ;
    _d.CPGF_MD_TEMPLATE _method("transformed", (QPixmap (D::ClassType::*) (const QTransform &, Qt::TransformationMode) const)&D::ClassType::transformed, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
    ;
    _d.CPGF_MD_TEMPLATE _method("toImage", &D::ClassType::toImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("load", &D::ClassType::load, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("loadFromData", (bool (D::ClassType::*) (const uchar *, uint, const char *, Qt::ImageConversionFlags))&D::ClassType::loadFromData)
        ._default(copyVariantFromCopyable(Qt::AutoColor))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("loadFromData", (bool (D::ClassType::*) (const QByteArray &, const char *, Qt::ImageConversionFlags))&D::ClassType::loadFromData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("save", (bool (D::ClassType::*) (const QString &, const char *, int) const)&D::ClassType::save, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("save", (bool (D::ClassType::*) (QIODevice *, const char *, int) const)&D::ClassType::save)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("convertFromImage", &D::ClassType::convertFromImage)
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("copy", (QPixmap (D::ClassType::*) (int, int, int, int) const)&D::ClassType::copy, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("copy", (QPixmap (D::ClassType::*) (const QRect &) const)&D::ClassType::copy, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(QRect()))
    ;
    _d.CPGF_MD_TEMPLATE _method("scroll", (void (D::ClassType::*) (int, int, int, int, int, int, QRegion *))&D::ClassType::scroll)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("scroll", (void (D::ClassType::*) (int, int, const QRect &, QRegion *))&D::ClassType::scroll)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("cacheKey", &D::ClassType::cacheKey);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isQBitmap", &D::ClassType::isQBitmap);
    _d.CPGF_MD_TEMPLATE _method("paintEngine", &D::ClassType::paintEngine);
    _d.CPGF_MD_TEMPLATE _method("handle", &D::ClassType::handle);
    _d.CPGF_MD_TEMPLATE _method("defaultDepth", &D::ClassType::defaultDepth);
    _d.CPGF_MD_TEMPLATE _method("grabWindow", &D::ClassType::grabWindow, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("grabWidget", (QPixmap (*) (QObject *, const QRect &))&D::ClassType::grabWidget, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("grabWidget", (QPixmap (*) (QObject *, int, int, int, int))&D::ClassType::grabWidget, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("trueMatrix", (QMatrix (*) (const QMatrix &, int, int))&D::ClassType::trueMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("trueMatrix", (QTransform (*) (const QTransform &, int, int))&D::ClassType::trueMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromImage", &D::ClassType::fromImage, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromImageReader", &D::ClassType::fromImageReader, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _operator<QPixmap & (*)(cpgf::GMetaSelf, const QPixmap &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QPixmap & (*) (QPixmap *, const QPixmap &))&opErAToRWrapper_QPixmap__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &)>(!mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNot", (bool (*) (const QPixmap *))&opErAToRWrapper_QPixmap__opNot, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
