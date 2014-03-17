// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPICTURE_H
#define CPGF_META_QTGUI_QPICTURE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qpicture(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, const QPicture &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream& (*)(QDataStream &, QPicture &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleParamNoncopyable<1> >());
}


inline QPicture & opErAToRWrapper_QPicture__opAssign(QPicture * self, const QPicture & p) {
    return (*self) = p;
}


template <typename D>
void buildMetaClass_QPicture(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>()
        ._default(copyVariantFromCopyable(-1))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QPicture &)>();
    _d.CPGF_MD_TEMPLATE _method("isNull", &D::ClassType::isNull);
    _d.CPGF_MD_TEMPLATE _method("devType", &D::ClassType::devType);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("setData", &D::ClassType::setData);
    _d.CPGF_MD_TEMPLATE _method("play", &D::ClassType::play);
    _d.CPGF_MD_TEMPLATE _method("load", (bool (D::ClassType::*) (QIODevice *, const char *))&D::ClassType::load)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("load", (bool (D::ClassType::*) (const QString &, const char *))&D::ClassType::load, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("save", (bool (D::ClassType::*) (QIODevice *, const char *))&D::ClassType::save)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("save", (bool (D::ClassType::*) (const QString &, const char *))&D::ClassType::save, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("setBoundingRect", &D::ClassType::setBoundingRect);
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("detach", &D::ClassType::detach);
    _d.CPGF_MD_TEMPLATE _method("isDetached", &D::ClassType::isDetached);
    _d.CPGF_MD_TEMPLATE _method("paintEngine", &D::ClassType::paintEngine);
    _d.CPGF_MD_TEMPLATE _method("pictureFormat", &D::ClassType::pictureFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("inputFormats", &D::ClassType::inputFormats);
    _d.CPGF_MD_TEMPLATE _method("outputFormats", &D::ClassType::outputFormats);
    _d.CPGF_MD_TEMPLATE _method("inputFormatList", &D::ClassType::inputFormatList);
    _d.CPGF_MD_TEMPLATE _method("outputFormatList", &D::ClassType::outputFormatList);
    _d.CPGF_MD_TEMPLATE _operator<QPicture & (*)(cpgf::GMetaSelf, const QPicture &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QPicture & (*) (QPicture *, const QPicture &))&opErAToRWrapper_QPicture__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QPictureIO(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QIODevice *, const char *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const char *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("picture", &D::ClassType::picture);
    _d.CPGF_MD_TEMPLATE _method("status", &D::ClassType::status);
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("ioDevice", &D::ClassType::ioDevice);
    _d.CPGF_MD_TEMPLATE _method("fileName", &D::ClassType::fileName);
    _d.CPGF_MD_TEMPLATE _method("quality", &D::ClassType::quality);
    _d.CPGF_MD_TEMPLATE _method("description", &D::ClassType::description);
    _d.CPGF_MD_TEMPLATE _method("parameters", &D::ClassType::parameters);
    _d.CPGF_MD_TEMPLATE _method("gamma", &D::ClassType::gamma);
    _d.CPGF_MD_TEMPLATE _method("setPicture", &D::ClassType::setPicture);
    _d.CPGF_MD_TEMPLATE _method("setStatus", &D::ClassType::setStatus);
    _d.CPGF_MD_TEMPLATE _method("setFormat", &D::ClassType::setFormat);
    _d.CPGF_MD_TEMPLATE _method("setIODevice", &D::ClassType::setIODevice);
    _d.CPGF_MD_TEMPLATE _method("setFileName", &D::ClassType::setFileName, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setQuality", &D::ClassType::setQuality);
    _d.CPGF_MD_TEMPLATE _method("setDescription", &D::ClassType::setDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setParameters", &D::ClassType::setParameters);
    _d.CPGF_MD_TEMPLATE _method("setGamma", &D::ClassType::setGamma);
    _d.CPGF_MD_TEMPLATE _method("read", &D::ClassType::read);
    _d.CPGF_MD_TEMPLATE _method("write", &D::ClassType::write);
    _d.CPGF_MD_TEMPLATE _method("pictureFormat", (QByteArray (*) (const QString &))&D::ClassType::pictureFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pictureFormat", (QByteArray (*) (QIODevice *))&D::ClassType::pictureFormat);
    _d.CPGF_MD_TEMPLATE _method("inputFormats", &D::ClassType::inputFormats);
    _d.CPGF_MD_TEMPLATE _method("outputFormats", &D::ClassType::outputFormats);
    _d.CPGF_MD_TEMPLATE _method("defineIOHandler", &D::ClassType::defineIOHandler);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
