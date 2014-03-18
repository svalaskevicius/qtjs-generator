// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPDFWRITER_H
#define CPGF_META_QTGUI_QPDFWRITER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QPdfWriter(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QIODevice *)>();
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("title", &D::ClassType::title);
    _d.CPGF_MD_TEMPLATE _method("setTitle", &D::ClassType::setTitle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("creator", &D::ClassType::creator);
    _d.CPGF_MD_TEMPLATE _method("setCreator", &D::ClassType::setCreator, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("newPage", &D::ClassType::newPage);
    _d.CPGF_MD_TEMPLATE _method("setPageSize", &D::ClassType::setPageSize);
    _d.CPGF_MD_TEMPLATE _method("setPageSizeMM", &D::ClassType::setPageSizeMM);
    _d.CPGF_MD_TEMPLATE _method("setMargins", &D::ClassType::setMargins);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
