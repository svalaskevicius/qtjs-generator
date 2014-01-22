// Auto generated file, don't modify.

#ifndef __META_QTCORE_QHASH_H
#define __META_QTCORE_QHASH_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qhash(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (char, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (uchar, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (signed char, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (ushort, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (short, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (uint, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (int, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (ulong, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (long, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (quint64, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (qint64, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (QChar, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QByteArray &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QString &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QStringRef &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (const QBitArray &, uint))&qHash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qHash", (uint (*) (QLatin1String, uint))&qHash)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("qt_hash", (uint (*) (const QString &))&qt_hash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("qt_hash", (uint (*) (const QStringRef &))&qt_hash, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const QHashDummyValue &, const QHashDummyValue &)>(mopHolder == mopHolder);
}


template <typename D, class Key, class T>
void buildMetaClass_QHashDummyNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const Key &, uint, QHashNode< Key, T > *)>();
    _d.CPGF_MD_TEMPLATE _field("next", &D::ClassType::next);
    _d.CPGF_MD_TEMPLATE _field("h", &D::ClassType::h);
    _d.CPGF_MD_TEMPLATE _field("key", &D::ClassType::key);
}


template <typename D>
void buildMetaClass_QHashDummyValue(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
