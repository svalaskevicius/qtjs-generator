// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QV8ENGINE_P_H
#define CPGF_META_QTQML_QV8ENGINE_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace QV4;


namespace qt_metadata { 


inline QV4::ReturnedValue opErAToRWrapper_QQmlV4Function__opArrayGet(QQmlV4Function * self, int idx) {
    return (*self)[idx];
}


template <typename D>
void buildMetaClass_QQmlV4Function(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("length", &D::ClassType::length);
    _d.CPGF_MD_TEMPLATE _method("context", &D::ClassType::context);
    _d.CPGF_MD_TEMPLATE _method("qmlGlobal", &D::ClassType::qmlGlobal);
    _d.CPGF_MD_TEMPLATE _method("setReturnValue", &D::ClassType::setReturnValue);
    _d.CPGF_MD_TEMPLATE _method("engine", &D::ClassType::engine);
    _d.CPGF_MD_TEMPLATE _method("v4engine", &D::ClassType::v4engine);
    _d.CPGF_MD_TEMPLATE _operator<QV4::ReturnedValue (*)(cpgf::GMetaSelf, int)>(mopHolder[0]);
    _d.CPGF_MD_TEMPLATE _method("_opArrayGet", (QV4::ReturnedValue (*) (QQmlV4Function *, int))&opErAToRWrapper_QQmlV4Function__opArrayGet, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QQmlV4Handle(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QV4::ValueRef)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QV4::ReturnedValue)>();
    _d.CPGF_MD_TEMPLATE _operator< QV4::ReturnedValue (cpgf::GMetaSelf)>(mopHolder());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
