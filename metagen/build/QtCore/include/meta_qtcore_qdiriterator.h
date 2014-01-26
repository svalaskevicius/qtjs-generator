// Auto generated file, don't modify.

#ifndef __META_QTCORE_QDIRITERATOR_H
#define __META_QTCORE_QDIRITERATOR_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QDirIterator(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QDir &, QDirIterator::IteratorFlags)>()
        ._default(copyVariantFromCopyable(QDirIterator::NoIteratorFlags))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QDirIterator::IteratorFlags)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QDirIterator::NoIteratorFlags))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QDir::Filters, QDirIterator::IteratorFlags)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QDirIterator::NoIteratorFlags))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const QStringList &, QDir::Filters, QDirIterator::IteratorFlags)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QDirIterator::NoIteratorFlags))
        ._default(copyVariantFromCopyable(QDir::NoFilter))
    ;
    _d.CPGF_MD_TEMPLATE _method("next", &D::ClassType::next);
    _d.CPGF_MD_TEMPLATE _method("hasNext", &D::ClassType::hasNext);
    _d.CPGF_MD_TEMPLATE _method("fileName", &D::ClassType::fileName);
    _d.CPGF_MD_TEMPLATE _method("filePath", &D::ClassType::filePath);
    _d.CPGF_MD_TEMPLATE _method("fileInfo", &D::ClassType::fileInfo);
    _d.CPGF_MD_TEMPLATE _method("path", &D::ClassType::path);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::IteratorFlag>("IteratorFlag")
        ._element("NoIteratorFlags", D::ClassType::NoIteratorFlags)
        ._element("FollowSymlinks", D::ClassType::FollowSymlinks)
        ._element("Subdirectories", D::ClassType::Subdirectories)
    ;
    {
        GDefineMetaClass<QFlags<typename QDirIterator::IteratorFlag > > _t_d = GDefineMetaClass<QFlags<typename QDirIterator::IteratorFlag > >::lazyDeclare("IteratorFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QDirIterator::IteratorFlag > >, typename QDirIterator::IteratorFlag >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
