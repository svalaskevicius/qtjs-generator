// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QSTYLEFACTORY_H
#define CPGF_META_QTWIDGETS_QSTYLEFACTORY_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QStyleFactory(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("keys", &D::ClassType::keys);
    _d.CPGF_MD_TEMPLATE _method("create", &D::ClassType::create, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
