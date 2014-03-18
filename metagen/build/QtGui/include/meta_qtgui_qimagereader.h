// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QIMAGEREADER_H
#define CPGF_META_QTGUI_QIMAGEREADER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QImageReader(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QIODevice *, const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QByteArray()))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QByteArray()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("setAutoDetectImageFormat", &D::ClassType::setAutoDetectImageFormat);
    _d.CPGF_MD_TEMPLATE _method("autoDetectImageFormat", &D::ClassType::autoDetectImageFormat);
    _d.CPGF_MD_TEMPLATE _method("setDecideFormatFromContent", &D::ClassType::setDecideFormatFromContent);
    _d.CPGF_MD_TEMPLATE _method("decideFormatFromContent", &D::ClassType::decideFormatFromContent);
    _d.CPGF_MD_TEMPLATE _method("setDevice", &D::ClassType::setDevice);
    _d.CPGF_MD_TEMPLATE _method("device", &D::ClassType::device);
    _d.CPGF_MD_TEMPLATE _method("setFileName", &D::ClassType::setFileName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fileName", &D::ClassType::fileName);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("imageFormat", (QImage::Format (D::ClassType::*) () const)&D::ClassType::imageFormat);
    _d.CPGF_MD_TEMPLATE _method("textKeys", &D::ClassType::textKeys);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setClipRect", &D::ClassType::setClipRect);
    _d.CPGF_MD_TEMPLATE _method("clipRect", &D::ClassType::clipRect);
    _d.CPGF_MD_TEMPLATE _method("setScaledSize", &D::ClassType::setScaledSize);
    _d.CPGF_MD_TEMPLATE _method("scaledSize", &D::ClassType::scaledSize);
    _d.CPGF_MD_TEMPLATE _method("setQuality", &D::ClassType::setQuality);
    _d.CPGF_MD_TEMPLATE _method("quality", &D::ClassType::quality);
    _d.CPGF_MD_TEMPLATE _method("setScaledClipRect", &D::ClassType::setScaledClipRect);
    _d.CPGF_MD_TEMPLATE _method("scaledClipRect", &D::ClassType::scaledClipRect);
    _d.CPGF_MD_TEMPLATE _method("setBackgroundColor", &D::ClassType::setBackgroundColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("backgroundColor", &D::ClassType::backgroundColor);
    _d.CPGF_MD_TEMPLATE _method("supportsAnimation", &D::ClassType::supportsAnimation);
    _d.CPGF_MD_TEMPLATE _method("canRead", &D::ClassType::canRead);
    _d.CPGF_MD_TEMPLATE _method("read", (QImage (D::ClassType::*) ())&D::ClassType::read, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("read", (bool (D::ClassType::*) (QImage *))&D::ClassType::read);
    _d.CPGF_MD_TEMPLATE _method("jumpToNextImage", &D::ClassType::jumpToNextImage);
    _d.CPGF_MD_TEMPLATE _method("jumpToImage", &D::ClassType::jumpToImage);
    _d.CPGF_MD_TEMPLATE _method("loopCount", &D::ClassType::loopCount);
    _d.CPGF_MD_TEMPLATE _method("imageCount", &D::ClassType::imageCount);
    _d.CPGF_MD_TEMPLATE _method("nextImageDelay", &D::ClassType::nextImageDelay);
    _d.CPGF_MD_TEMPLATE _method("currentImageNumber", &D::ClassType::currentImageNumber);
    _d.CPGF_MD_TEMPLATE _method("currentImageRect", &D::ClassType::currentImageRect);
    _d.CPGF_MD_TEMPLATE _method("error", &D::ClassType::error);
    _d.CPGF_MD_TEMPLATE _method("errorString", &D::ClassType::errorString);
    _d.CPGF_MD_TEMPLATE _method("supportsOption", &D::ClassType::supportsOption);
    _d.CPGF_MD_TEMPLATE _method("imageFormat", (QByteArray (*) (const QString &))&D::ClassType::imageFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("imageFormat", (QByteArray (*) (QIODevice *))&D::ClassType::imageFormat);
    _d.CPGF_MD_TEMPLATE _method("supportedImageFormats", &D::ClassType::supportedImageFormats);
    _d.CPGF_MD_TEMPLATE _method("supportedMimeTypes", &D::ClassType::supportedMimeTypes);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ImageReaderError>("ImageReaderError")
        ._element("UnknownError", D::ClassType::UnknownError)
        ._element("FileNotFoundError", D::ClassType::FileNotFoundError)
        ._element("DeviceError", D::ClassType::DeviceError)
        ._element("UnsupportedFormatError", D::ClassType::UnsupportedFormatError)
        ._element("InvalidDataError", D::ClassType::InvalidDataError)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
