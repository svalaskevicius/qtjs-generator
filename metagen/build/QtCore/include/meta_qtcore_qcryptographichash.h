// Auto generated file, don't modify.

#ifndef __META_QTCORE_QCRYPTOGRAPHICHASH_H
#define __META_QTCORE_QCRYPTOGRAPHICHASH_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QCryptographicHash(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QCryptographicHash::Algorithm)>();
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("addData", (void (D::ClassType::*) (const char *, int))&D::ClassType::addData);
    _d.CPGF_MD_TEMPLATE _method("addData", (void (D::ClassType::*) (const QByteArray &))&D::ClassType::addData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addData", (bool (D::ClassType::*) (QIODevice *))&D::ClassType::addData);
    _d.CPGF_MD_TEMPLATE _method("result", &D::ClassType::result);
    _d.CPGF_MD_TEMPLATE _method("hash", &D::ClassType::hash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Algorithm>("Algorithm")
        ._element("Md4", D::ClassType::Md4)
        ._element("Md5", D::ClassType::Md5)
        ._element("Sha1", D::ClassType::Sha1)
        ._element("Sha224", D::ClassType::Sha224)
        ._element("Sha256", D::ClassType::Sha256)
        ._element("Sha384", D::ClassType::Sha384)
        ._element("Sha512", D::ClassType::Sha512)
        ._element("Sha3_224", D::ClassType::Sha3_224)
        ._element("Sha3_256", D::ClassType::Sha3_256)
        ._element("Sha3_384", D::ClassType::Sha3_384)
        ._element("Sha3_512", D::ClassType::Sha3_512)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
