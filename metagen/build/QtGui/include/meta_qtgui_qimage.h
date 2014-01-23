// Auto generated file, don't modify.

#ifndef __META_QTGUI_QIMAGE_H
#define __META_QTGUI_QIMAGE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qimage(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QImage &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QImage &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleParamNoncopyable<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QImage &)>(mopHolder << mopHolder);
}


inline QImage & opErAToRWrapper_QImage__opAssign(QImage * self, const QImage & __arg0) {
    return (*self) = __arg0;
}
inline bool opErAToRWrapper_QImage__opEqual(const QImage * self, const QImage & __arg0) {
    return (*self) == __arg0;
}
inline bool opErAToRWrapper_QImage__opNotEqual(const QImage * self, const QImage & __arg0) {
    return (*self) != __arg0;
}


template <typename D>
void buildMetaClass_QImage(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QSize &, QImage::Format)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, QImage::Format)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (uchar *, int, int, QImage::Format, QImageCleanupFunction, void *)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const uchar *, int, int, QImage::Format, QImageCleanupFunction, void *)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (uchar *, int, int, int, QImage::Format, QImageCleanupFunction, void *)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const uchar *, int, int, int, QImage::Format, QImageCleanupFunction, void *)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const char *const*)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const char *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QImage &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("devType", &D::ClassType::devType);
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("copy", (QImage (D::ClassType::*) (const QRect &) const)&D::ClassType::copy, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(QRect()))
    ;
    _d.CPGF_MD_TEMPLATE _method("copy", (QImage (D::ClassType::*) (int, int, int, int) const)&D::ClassType::copy, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("convertToFormat", (QImage (D::ClassType::*) (QImage::Format, Qt::ImageConversionFlags) const)&D::ClassType::convertToFormat, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("convertToFormat", (QImage (D::ClassType::*) (QImage::Format, const QVector< QRgb > &, Qt::ImageConversionFlags) const)&D::ClassType::convertToFormat, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("height", &D::ClassType::height);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("rect", &D::ClassType::rect);
    _d.CPGF_MD_TEMPLATE _method("depth", &D::ClassType::depth);
    _d.CPGF_MD_TEMPLATE _method("colorCount", &D::ClassType::colorCount);
    _d.CPGF_MD_TEMPLATE _method("bitPlaneCount", &D::ClassType::bitPlaneCount);
    _d.CPGF_MD_TEMPLATE _method("color", &D::ClassType::color);
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor);
    _d.CPGF_MD_TEMPLATE _method("setColorCount", &D::ClassType::setColorCount);
    _d.CPGF_MD_TEMPLATE _method("allGray", &D::ClassType::allGray);
    _d.CPGF_MD_TEMPLATE _method("isGrayscale", &D::ClassType::isGrayscale);
    _d.CPGF_MD_TEMPLATE _method("bits", (uchar * (D::ClassType::*) ())&D::ClassType::bits);
    _d.CPGF_MD_TEMPLATE _method("bits", (const uchar * (D::ClassType::*) () const)&D::ClassType::bits);
    _d.CPGF_MD_TEMPLATE _method("constBits", &D::ClassType::constBits);
    _d.CPGF_MD_TEMPLATE _method("byteCount", &D::ClassType::byteCount);
    _d.CPGF_MD_TEMPLATE _method("scanLine", (uchar * (D::ClassType::*) (int))&D::ClassType::scanLine);
    _d.CPGF_MD_TEMPLATE _method("scanLine", (const uchar * (D::ClassType::*) (int) const)&D::ClassType::scanLine);
    _d.CPGF_MD_TEMPLATE _method("constScanLine", &D::ClassType::constScanLine);
    _d.CPGF_MD_TEMPLATE _method("bytesPerLine", &D::ClassType::bytesPerLine);
    _d.CPGF_MD_TEMPLATE _method("valid", (bool (D::ClassType::*) (int, int) const)&D::ClassType::valid);
    _d.CPGF_MD_TEMPLATE _method("valid", (bool (D::ClassType::*) (const QPoint &) const)&D::ClassType::valid);
    _d.CPGF_MD_TEMPLATE _method("pixelIndex", (int (D::ClassType::*) (int, int) const)&D::ClassType::pixelIndex);
    _d.CPGF_MD_TEMPLATE _method("pixelIndex", (int (D::ClassType::*) (const QPoint &) const)&D::ClassType::pixelIndex);
    _d.CPGF_MD_TEMPLATE _method("pixel", (QRgb (D::ClassType::*) (int, int) const)&D::ClassType::pixel);
    _d.CPGF_MD_TEMPLATE _method("pixel", (QRgb (D::ClassType::*) (const QPoint &) const)&D::ClassType::pixel);
    _d.CPGF_MD_TEMPLATE _method("setPixel", (void (D::ClassType::*) (int, int, uint))&D::ClassType::setPixel);
    _d.CPGF_MD_TEMPLATE _method("setPixel", (void (D::ClassType::*) (const QPoint &, uint))&D::ClassType::setPixel);
    _d.CPGF_MD_TEMPLATE _method("colorTable", &D::ClassType::colorTable);
    _d.CPGF_MD_TEMPLATE _method("setColorTable", &D::ClassType::setColorTable);
    _d.CPGF_MD_TEMPLATE _method("devicePixelRatio", &D::ClassType::devicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("setDevicePixelRatio", &D::ClassType::setDevicePixelRatio);
    _d.CPGF_MD_TEMPLATE _method("fill", (void (D::ClassType::*) (uint))&D::ClassType::fill);
    _d.CPGF_MD_TEMPLATE _method("fill", (void (D::ClassType::*) (const QColor &))&D::ClassType::fill, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fill", (void (D::ClassType::*) (Qt::GlobalColor))&D::ClassType::fill);
    _d.CPGF_MD_TEMPLATE _method("hasAlphaChannel", &D::ClassType::hasAlphaChannel);
    _d.CPGF_MD_TEMPLATE _method("setAlphaChannel", &D::ClassType::setAlphaChannel);
    _d.CPGF_MD_TEMPLATE _method("alphaChannel", &D::ClassType::alphaChannel, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("createAlphaMask", &D::ClassType::createAlphaMask, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("createHeuristicMask", &D::ClassType::createHeuristicMask, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("createMaskFromColor", &D::ClassType::createMaskFromColor, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::MaskInColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("scaled", (QImage (D::ClassType::*) (int, int, Qt::AspectRatioMode, Qt::TransformationMode) const)&D::ClassType::scaled, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
        ._default(copyVariantFromCopyable(Qt::IgnoreAspectRatio))
    ;
    _d.CPGF_MD_TEMPLATE _method("scaled", (QImage (D::ClassType::*) (const QSize &, Qt::AspectRatioMode, Qt::TransformationMode) const)&D::ClassType::scaled, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
        ._default(copyVariantFromCopyable(Qt::IgnoreAspectRatio))
    ;
    _d.CPGF_MD_TEMPLATE _method("scaledToWidth", &D::ClassType::scaledToWidth, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
    ;
    _d.CPGF_MD_TEMPLATE _method("scaledToHeight", &D::ClassType::scaledToHeight, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
    ;
    _d.CPGF_MD_TEMPLATE _method("transformed", (QImage (D::ClassType::*) (const QMatrix &, Qt::TransformationMode) const)&D::ClassType::transformed, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
    ;
    _d.CPGF_MD_TEMPLATE _method("transformed", (QImage (D::ClassType::*) (const QTransform &, Qt::TransformationMode) const)&D::ClassType::transformed, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::FastTransformation))
    ;
    _d.CPGF_MD_TEMPLATE _method("mirrored", &D::ClassType::mirrored, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(true))
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("rgbSwapped", &D::ClassType::rgbSwapped, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("invertPixels", &D::ClassType::invertPixels)
        ._default(copyVariantFromCopyable(QImage::InvertRgb))
    ;
    _d.CPGF_MD_TEMPLATE _method("load", (bool (D::ClassType::*) (QIODevice *, const char *))&D::ClassType::load);
    _d.CPGF_MD_TEMPLATE _method("load", (bool (D::ClassType::*) (const QString &, const char *))&D::ClassType::load, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("loadFromData", (bool (D::ClassType::*) (const uchar *, int, const char *))&D::ClassType::loadFromData)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("loadFromData", (bool (D::ClassType::*) (const QByteArray &, const char *))&D::ClassType::loadFromData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
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
    _d.CPGF_MD_TEMPLATE _method("cacheKey", &D::ClassType::cacheKey);
    _d.CPGF_MD_TEMPLATE _method("paintEngine", &D::ClassType::paintEngine);
    _d.CPGF_MD_TEMPLATE _method("dotsPerMeterX", &D::ClassType::dotsPerMeterX);
    _d.CPGF_MD_TEMPLATE _method("dotsPerMeterY", &D::ClassType::dotsPerMeterY);
    _d.CPGF_MD_TEMPLATE _method("setDotsPerMeterX", &D::ClassType::setDotsPerMeterX);
    _d.CPGF_MD_TEMPLATE _method("setDotsPerMeterY", &D::ClassType::setDotsPerMeterY);
    _d.CPGF_MD_TEMPLATE _method("offset", &D::ClassType::offset);
    _d.CPGF_MD_TEMPLATE _method("setOffset", &D::ClassType::setOffset);
    _d.CPGF_MD_TEMPLATE _method("textKeys", &D::ClassType::textKeys);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("trueMatrix", (QMatrix (*) (const QMatrix &, int, int))&D::ClassType::trueMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("trueMatrix", (QTransform (*) (const QTransform &, int, int))&D::ClassType::trueMatrix, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromData", (QImage (*) (const uchar *, int, const char *))&D::ClassType::fromData, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromData", (QImage (*) (const QByteArray &, const char *))&D::ClassType::fromData, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::InvertMode>("InvertMode")
        ._element("InvertRgb", D::ClassType::InvertRgb)
        ._element("InvertRgba", D::ClassType::InvertRgba)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Format>("Format")
        ._element("Format_Invalid", D::ClassType::Format_Invalid)
        ._element("Format_Mono", D::ClassType::Format_Mono)
        ._element("Format_MonoLSB", D::ClassType::Format_MonoLSB)
        ._element("Format_Indexed8", D::ClassType::Format_Indexed8)
        ._element("Format_RGB32", D::ClassType::Format_RGB32)
        ._element("Format_ARGB32", D::ClassType::Format_ARGB32)
        ._element("Format_ARGB32_Premultiplied", D::ClassType::Format_ARGB32_Premultiplied)
        ._element("Format_RGB16", D::ClassType::Format_RGB16)
        ._element("Format_ARGB8565_Premultiplied", D::ClassType::Format_ARGB8565_Premultiplied)
        ._element("Format_RGB666", D::ClassType::Format_RGB666)
        ._element("Format_ARGB6666_Premultiplied", D::ClassType::Format_ARGB6666_Premultiplied)
        ._element("Format_RGB555", D::ClassType::Format_RGB555)
        ._element("Format_ARGB8555_Premultiplied", D::ClassType::Format_ARGB8555_Premultiplied)
        ._element("Format_RGB888", D::ClassType::Format_RGB888)
        ._element("Format_RGB444", D::ClassType::Format_RGB444)
        ._element("Format_ARGB4444_Premultiplied", D::ClassType::Format_ARGB4444_Premultiplied)
        ._element("Format_RGBX8888", D::ClassType::Format_RGBX8888)
        ._element("Format_RGBA8888", D::ClassType::Format_RGBA8888)
        ._element("Format_RGBA8888_Premultiplied", D::ClassType::Format_RGBA8888_Premultiplied)
        ._element("NImageFormats", D::ClassType::NImageFormats)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QImage & (*)(cpgf::GMetaSelf, const QImage &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QImage & (*) (QImage *, const QImage &))&opErAToRWrapper_QImage__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QImage &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QImage *, const QImage &))&opErAToRWrapper_QImage__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QImage &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QImage *, const QImage &))&opErAToRWrapper_QImage__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator< QVariant (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
