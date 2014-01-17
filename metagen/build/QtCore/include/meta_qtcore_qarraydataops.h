// Auto generated file, don't modify.

#ifndef __META_QTCORE_QARRAYDATAOPS_H
#define __META_QTCORE_QARRAYDATAOPS_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QtPrivate;


namespace meta_qtcore { 


template <typename D, class T, class >
void buildMetaClass_QArrayOpsSelector(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
}


template <typename D, class T>
void buildMetaClass_QGenericArrayOps(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
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
void buildMetaClass_QMovableArrayOps(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("insert", &D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("erase", &D::ClassType::erase);
}


template <typename D, class T>
void buildMetaClass_QPodArrayOps(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("appendInitialize", &D::ClassType::appendInitialize);
    _d.CPGF_MD_TEMPLATE _method("copyAppend", (void (D::ClassType::*) (const T *, const T *))&D::ClassType::copyAppend);
    _d.CPGF_MD_TEMPLATE _method("copyAppend", (void (D::ClassType::*) (size_t, const T &))&D::ClassType::copyAppend);
    _d.CPGF_MD_TEMPLATE _method("truncate", &D::ClassType::truncate);
    _d.CPGF_MD_TEMPLATE _method("destroyAll", &D::ClassType::destroyAll);
    _d.CPGF_MD_TEMPLATE _method("insert", &D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("erase", &D::ClassType::erase);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
