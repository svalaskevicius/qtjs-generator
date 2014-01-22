// Auto generated file, don't modify.

#ifndef __META_QTCORE_QTHREADSTORAGE_H
#define __META_QTCORE_QTHREADSTORAGE_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_Global_qthreadstorage(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D, class T>
void buildMetaClass_QThreadStorage(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("hasLocalData", &D::ClassType::hasLocalData);
    _d.CPGF_MD_TEMPLATE _method("localData", (T & (D::ClassType::*) ())&D::ClassType::localData);
    _d.CPGF_MD_TEMPLATE _method("localData", (T (D::ClassType::*) () const)&D::ClassType::localData);
    _d.CPGF_MD_TEMPLATE _method("setLocalData", &D::ClassType::setLocalData);
}


template <typename D>
void buildMetaClass_QThreadStorageData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (void(*)(void *))>();
    _d.CPGF_MD_TEMPLATE _field("id", &D::ClassType::id);
    _d.CPGF_MD_TEMPLATE _method("get", &D::ClassType::get);
    _d.CPGF_MD_TEMPLATE _method("set", &D::ClassType::set);
    _d.CPGF_MD_TEMPLATE _method("finish", &D::ClassType::finish);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
