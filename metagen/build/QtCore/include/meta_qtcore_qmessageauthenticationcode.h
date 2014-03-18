// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QMESSAGEAUTHENTICATIONCODE_H
#define CPGF_META_QTCORE_QMESSAGEAUTHENTICATIONCODE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QMessageAuthenticationCode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QCryptographicHash::Algorithm, const QByteArray &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QByteArray()))
    ;
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("setKey", &D::ClassType::setKey, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addData", (void (D::ClassType::*) (const char *, int))&D::ClassType::addData);
    _d.CPGF_MD_TEMPLATE _method("addData", (void (D::ClassType::*) (const QByteArray &))&D::ClassType::addData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addData", (bool (D::ClassType::*) (QIODevice *))&D::ClassType::addData);
    _d.CPGF_MD_TEMPLATE _method("result", &D::ClassType::result);
    _d.CPGF_MD_TEMPLATE _method("hash", &D::ClassType::hash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
