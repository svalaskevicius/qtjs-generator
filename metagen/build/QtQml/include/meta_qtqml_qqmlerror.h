// Auto generated file, don't modify.

#ifndef __META_QTQML_QQMLERROR_H
#define __META_QTQML_QQMLERROR_H


#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtqml { 


template <typename D>
void buildMetaClass_Global_qqmlerror(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, const QQmlError &)>(mopHolder << mopHolder);
}


inline QQmlError & opErAToRWrapper_QQmlError__opAssign(QQmlError * self, const QQmlError & __arg0) {
    return (*self) = __arg0;
}


template <typename D>
void buildMetaClass_QQmlError(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QQmlError &)>();
    _d.CPGF_MD_TEMPLATE _method("isValid", &D::ClassType::isValid);
    _d.CPGF_MD_TEMPLATE _method("url", &D::ClassType::url);
    _d.CPGF_MD_TEMPLATE _method("setUrl", &D::ClassType::setUrl, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("description", &D::ClassType::description);
    _d.CPGF_MD_TEMPLATE _method("setDescription", &D::ClassType::setDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("line", &D::ClassType::line);
    _d.CPGF_MD_TEMPLATE _method("setLine", &D::ClassType::setLine);
    _d.CPGF_MD_TEMPLATE _method("column", &D::ClassType::column);
    _d.CPGF_MD_TEMPLATE _method("setColumn", &D::ClassType::setColumn);
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _method("setObject", &D::ClassType::setObject);
    _d.CPGF_MD_TEMPLATE _method("toString", &D::ClassType::toString);
    _d.CPGF_MD_TEMPLATE _operator<QQmlError & (*)(cpgf::GMetaSelf, const QQmlError &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QQmlError & (*) (QQmlError *, const QQmlError &))&opErAToRWrapper_QQmlError__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtqml




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
