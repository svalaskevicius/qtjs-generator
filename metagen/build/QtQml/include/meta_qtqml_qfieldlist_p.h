// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QFIELDLIST_P_H
#define CPGF_META_QTQML_QFIELDLIST_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D, class N, N *N::* nextMember>
void buildMetaClass_QFieldList(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("first", &D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("takeFirst", &D::ClassType::takeFirst);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (N *))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("prepend", (void (D::ClassType::*) (N *))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isOne", &D::ClassType::isOne);
    _d.CPGF_MD_TEMPLATE _method("isMany", &D::ClassType::isMany);
    _d.CPGF_MD_TEMPLATE _method("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _method("append", (void (D::ClassType::*) (QFieldList< N, nextMember > &))&D::ClassType::append);
    _d.CPGF_MD_TEMPLATE _method("prepend", (void (D::ClassType::*) (QFieldList< N, nextMember > &))&D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("insertAfter", &D::ClassType::insertAfter);
    _d.CPGF_MD_TEMPLATE _method("copyAndClear", &D::ClassType::copyAndClear);
    _d.CPGF_MD_TEMPLATE _method("copyAndClearAppend", &D::ClassType::copyAndClearAppend);
    _d.CPGF_MD_TEMPLATE _method("copyAndClearPrepend", &D::ClassType::copyAndClearPrepend);
    _d.CPGF_MD_TEMPLATE _method("flag", &D::ClassType::flag);
    _d.CPGF_MD_TEMPLATE _method("setFlag", &D::ClassType::setFlag);
    _d.CPGF_MD_TEMPLATE _method("clearFlag", &D::ClassType::clearFlag);
    _d.CPGF_MD_TEMPLATE _method("setFlagValue", &D::ClassType::setFlagValue);
    _d.CPGF_MD_TEMPLATE _method("next", &D::ClassType::next);
}


template <typename D, class N, N *N::* nextMember>
void buildMetaClass_QForwardFieldList(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("first", &D::ClassType::first);
    _d.CPGF_MD_TEMPLATE _method("takeFirst", &D::ClassType::takeFirst);
    _d.CPGF_MD_TEMPLATE _method("prepend", &D::ClassType::prepend);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("isOne", &D::ClassType::isOne);
    _d.CPGF_MD_TEMPLATE _method("isMany", &D::ClassType::isMany);
    _d.CPGF_MD_TEMPLATE _method("flag", &D::ClassType::flag);
    _d.CPGF_MD_TEMPLATE _method("setFlag", &D::ClassType::setFlag);
    _d.CPGF_MD_TEMPLATE _method("clearFlag", &D::ClassType::clearFlag);
    _d.CPGF_MD_TEMPLATE _method("setFlagValue", &D::ClassType::setFlagValue);
    _d.CPGF_MD_TEMPLATE _method("flag2", &D::ClassType::flag2);
    _d.CPGF_MD_TEMPLATE _method("setFlag2", &D::ClassType::setFlag2);
    _d.CPGF_MD_TEMPLATE _method("clearFlag2", &D::ClassType::clearFlag2);
    _d.CPGF_MD_TEMPLATE _method("setFlag2Value", &D::ClassType::setFlag2Value);
    _d.CPGF_MD_TEMPLATE _method("next", &D::ClassType::next);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
