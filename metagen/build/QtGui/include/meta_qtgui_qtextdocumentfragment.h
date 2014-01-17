// Auto generated file, don't modify.

#ifndef __META_QTGUI_QTEXTDOCUMENTFRAGMENT_H
#define __META_QTGUI_QTEXTDOCUMENTFRAGMENT_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtgui { 


inline QTextDocumentFragment & opErAToRWrapper_QTextDocumentFragment__opAssign(QTextDocumentFragment * self, const QTextDocumentFragment & rhs) {
    return (*self) = rhs;
}


template <typename D>
void buildMetaClass_QTextDocumentFragment(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTextDocument *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTextCursor &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTextDocumentFragment &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("toPlainText", &D::ClassType::toPlainText);
    _d.CPGF_MD_TEMPLATE _method("toHtml", &D::ClassType::toHtml, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QByteArray()))
    ;
    _d.CPGF_MD_TEMPLATE _method("fromPlainText", &D::ClassType::fromPlainText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromHtml", (QTextDocumentFragment (*) (const QString &))&D::ClassType::fromHtml, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("fromHtml", (QTextDocumentFragment (*) (const QString &, const QTextDocument *))&D::ClassType::fromHtml, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QTextDocumentFragment & (*)(cpgf::GMetaSelf, const QTextDocumentFragment &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QTextDocumentFragment & (*) (QTextDocumentFragment *, const QTextDocumentFragment &))&opErAToRWrapper_QTextDocumentFragment__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
