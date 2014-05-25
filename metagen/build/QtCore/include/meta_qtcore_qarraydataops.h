// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QARRAYDATAOPS_H
#define CPGF_META_QTCORE_QARRAYDATAOPS_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;


namespace qt_metadata { 


template <typename D, class T, class >
void buildMetaClass_QArrayOpsSelector(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D, class T>
void buildMetaClass_QGenericArrayOps(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("appendInitialize", &D::ClassType::appendInitialize);
    _d.CPGF_MD_TEMPLATE _method("copyAppend", (void (D::ClassType::*) (const T *, const T *))&D::ClassType::copyAppend);
    _d.CPGF_MD_TEMPLATE _method("copyAppend", (void (D::ClassType::*) (size_t, const T &))&D::ClassType::copyAppend);
    _d.CPGF_MD_TEMPLATE _method("truncate", &D::ClassType::truncate);
    _d.CPGF_MD_TEMPLATE _method("destroyAll", &D::ClassType::destroyAll);
    _d.CPGF_MD_TEMPLATE _method("insert", &D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("erase", &D::ClassType::erase);
}


template <typename D, class T>
void buildMetaClass_QMovableArrayOps(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("insert", &D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("erase", &D::ClassType::erase);
}


template <typename D, class T>
void buildMetaClass_QPodArrayOps(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("appendInitialize", &D::ClassType::appendInitialize);
    _d.CPGF_MD_TEMPLATE _method("copyAppend", (void (D::ClassType::*) (const T *, const T *))&D::ClassType::copyAppend);
    _d.CPGF_MD_TEMPLATE _method("copyAppend", (void (D::ClassType::*) (size_t, const T &))&D::ClassType::copyAppend);
    _d.CPGF_MD_TEMPLATE _method("truncate", &D::ClassType::truncate);
    _d.CPGF_MD_TEMPLATE _method("destroyAll", &D::ClassType::destroyAll);
    _d.CPGF_MD_TEMPLATE _method("insert", &D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("erase", &D::ClassType::erase);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
