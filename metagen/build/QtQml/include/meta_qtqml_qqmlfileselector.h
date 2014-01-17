// Auto generated file, don't modify.

#ifndef __META_QTQML_QQMLFILESELECTOR_H
#define __META_QTQML_QQMLFILESELECTOR_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtqml { 


template <typename D>
void buildMetaClass_QQmlFileSelector(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QQmlEngine *, QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setSelector", &D::ClassType::setSelector);
    _d.CPGF_MD_TEMPLATE _method("setExtraSelectors", &D::ClassType::setExtraSelectors);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("get", &D::ClassType::get);
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
