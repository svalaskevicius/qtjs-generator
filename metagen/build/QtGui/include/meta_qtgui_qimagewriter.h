// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QIMAGEWRITER_H
#define CPGF_META_QTGUI_QIMAGEWRITER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QImageWriter(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QIODevice *, const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QByteArray()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("setDevice", &D::ClassType::setDevice);
    _d.CPGF_MD_TEMPLATE _method("device", &D::ClassType::device);
    _d.CPGF_MD_TEMPLATE _method("setFileName", &D::ClassType::setFileName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fileName", &D::ClassType::fileName);
    _d.CPGF_MD_TEMPLATE _method("setQuality", &D::ClassType::setQuality);
    _d.CPGF_MD_TEMPLATE _method("quality", &D::ClassType::quality);
    _d.CPGF_MD_TEMPLATE _method("setCompression", &D::ClassType::setCompression);
    _d.CPGF_MD_TEMPLATE _method("compression", &D::ClassType::compression);
    _d.CPGF_MD_TEMPLATE _method("setGamma", &D::ClassType::setGamma);
    _d.CPGF_MD_TEMPLATE _method("gamma", &D::ClassType::gamma);
    _d.CPGF_MD_TEMPLATE _method("setDescription", &D::ClassType::setDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("description", &D::ClassType::description);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("canWrite", &D::ClassType::canWrite);
    _d.CPGF_MD_TEMPLATE _method("write", &D::ClassType::write);
    _d.CPGF_MD_TEMPLATE _method("error", &D::ClassType::error);
    _d.CPGF_MD_TEMPLATE _method("errorString", &D::ClassType::errorString);
    _d.CPGF_MD_TEMPLATE _method("supportsOption", &D::ClassType::supportsOption);
    _d.CPGF_MD_TEMPLATE _method("supportedImageFormats", &D::ClassType::supportedImageFormats);
    _d.CPGF_MD_TEMPLATE _method("supportedMimeTypes", &D::ClassType::supportedMimeTypes);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ImageWriterError>("ImageWriterError")
        ._element("UnknownError", D::ClassType::UnknownError)
        ._element("DeviceError", D::ClassType::DeviceError)
        ._element("UnsupportedFormatError", D::ClassType::UnsupportedFormatError)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
