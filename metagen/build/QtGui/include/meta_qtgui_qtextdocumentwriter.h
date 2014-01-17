// Auto generated file, don't modify.

#ifndef __META_QTGUI_QTEXTDOCUMENTWRITER_H
#define __META_QTGUI_QTEXTDOCUMENTWRITER_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QTextDocumentWriter(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
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
    _d.CPGF_MD_TEMPLATE _method("write", (bool (D::ClassType::*) (const QTextDocument *))&D::ClassType::write);
    _d.CPGF_MD_TEMPLATE _method("write", (bool (D::ClassType::*) (const QTextDocumentFragment &))&D::ClassType::write, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setCodec", &D::ClassType::setCodec);
    _d.CPGF_MD_TEMPLATE _method("codec", &D::ClassType::codec);
    _d.CPGF_MD_TEMPLATE _method("supportedDocumentFormats", &D::ClassType::supportedDocumentFormats);
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
