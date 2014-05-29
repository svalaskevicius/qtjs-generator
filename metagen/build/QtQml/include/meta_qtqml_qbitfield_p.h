// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QBITFIELD_P_H
#define CPGF_META_QTQML_QBITFIELD_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qbitfield_p(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


inline QBitField & opErAToRWrapper_QBitField__opAssign(QBitField * self, const QBitField & __arg0) {
    return (*self) = __arg0;
}


template <typename D>
void buildMetaClass_QBitField(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const quint32 *, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QBitField &)>();
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("united", &D::ClassType::united);
    _d.CPGF_MD_TEMPLATE _method("testBit", &D::ClassType::testBit);
    _d.CPGF_MD_TEMPLATE _operator<QBitField & (*)(cpgf::GMetaSelf, const QBitField &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QBitField & (*) (QBitField *, const QBitField &))&opErAToRWrapper_QBitField__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
