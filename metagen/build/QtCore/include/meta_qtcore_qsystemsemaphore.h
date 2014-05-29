// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QSYSTEMSEMAPHORE_H
#define CPGF_META_QTCORE_QSYSTEMSEMAPHORE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QSystemSemaphore(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, int, QSystemSemaphore::AccessMode)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QSystemSemaphore::Open))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setKey", &D::ClassType::setKey, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QSystemSemaphore::Open))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("key", &D::ClassType::key);
    _d.CPGF_MD_TEMPLATE _method("acquire", &D::ClassType::acquire);
    _d.CPGF_MD_TEMPLATE _method("release", &D::ClassType::release)
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("error", &D::ClassType::error);
    _d.CPGF_MD_TEMPLATE _method("errorString", &D::ClassType::errorString);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AccessMode>("AccessMode")
        ._element("Open", D::ClassType::Open)
        ._element("Create", D::ClassType::Create)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SystemSemaphoreError>("SystemSemaphoreError")
        ._element("NoError", D::ClassType::NoError)
        ._element("PermissionDenied", D::ClassType::PermissionDenied)
        ._element("KeyError", D::ClassType::KeyError)
        ._element("AlreadyExists", D::ClassType::AlreadyExists)
        ._element("NotFound", D::ClassType::NotFound)
        ._element("OutOfResources", D::ClassType::OutOfResources)
        ._element("UnknownError", D::ClassType::UnknownError)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
