// Auto generated file, don't modify.

#ifndef __META_QTCORE_QLOCKFILE_H
#define __META_QTCORE_QLOCKFILE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QLockFile(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("lock", (bool (D::ClassType::*) ())&D::ClassType::lock);
    _d.CPGF_MD_TEMPLATE _method("tryLock", (bool (D::ClassType::*) (int))&D::ClassType::tryLock)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("unlock", (void (D::ClassType::*) ())&D::ClassType::unlock);
    _d.CPGF_MD_TEMPLATE _method("setStaleLockTime", (void (D::ClassType::*) (int))&D::ClassType::setStaleLockTime);
    _d.CPGF_MD_TEMPLATE _method("staleLockTime", (int (D::ClassType::*) () const)&D::ClassType::staleLockTime);
    _d.CPGF_MD_TEMPLATE _method("isLocked", (bool (D::ClassType::*) () const)&D::ClassType::isLocked);
    _d.CPGF_MD_TEMPLATE _method("getLockInfo", (bool (D::ClassType::*) (qint64 *, QString *, QString *) const)&D::ClassType::getLockInfo);
    _d.CPGF_MD_TEMPLATE _method("removeStaleLockFile", (bool (D::ClassType::*) ())&D::ClassType::removeStaleLockFile);
    _d.CPGF_MD_TEMPLATE _method("error", (QLockFile::LockError (D::ClassType::*) () const)&D::ClassType::error);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::LockError>("LockError")
        ._element("NoError", D::ClassType::NoError)
        ._element("LockFailedError", D::ClassType::LockFailedError)
        ._element("PermissionError", D::ClassType::PermissionError)
        ._element("UnknownError", D::ClassType::UnknownError)
        ._element("NoError", D::ClassType::NoError)
        ._element("LockFailedError", D::ClassType::LockFailedError)
        ._element("PermissionError", D::ClassType::PermissionError)
        ._element("UnknownError", D::ClassType::UnknownError)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
