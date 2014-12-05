// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QNUMERIC_H
#define CPGF_META_QTCORE_QNUMERIC_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qnumeric(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qIsInf", (QT_BEGIN_NAMESPACE bool (*) (double))&qIsInf);
    _d.CPGF_MD_TEMPLATE _method("qIsNaN", (bool (*) (double))&qIsNaN);
    _d.CPGF_MD_TEMPLATE _method("qIsFinite", (bool (*) (double))&qIsFinite);
    _d.CPGF_MD_TEMPLATE _method("qIsInf", (bool (*) (float))&qIsInf);
    _d.CPGF_MD_TEMPLATE _method("qIsNaN", (bool (*) (float))&qIsNaN);
    _d.CPGF_MD_TEMPLATE _method("qIsFinite", (bool (*) (float))&qIsFinite);
    _d.CPGF_MD_TEMPLATE _method("qSNaN", (double (*) ())&qSNaN);
    _d.CPGF_MD_TEMPLATE _method("qQNaN", (double (*) ())&qQNaN);
    _d.CPGF_MD_TEMPLATE _method("qInf", (double (*) ())&qInf);
    _d.CPGF_MD_TEMPLATE _method("qFloatDistance", (quint32 (*) (float, float))&qFloatDistance);
    _d.CPGF_MD_TEMPLATE _method("qFloatDistance", (quint64 (*) (double, double))&qFloatDistance);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_23")
        ._element("Q_INFINITY", Q_INFINITY)
        ._element("Q_SNAN", Q_SNAN)
        ._element("Q_QNAN", Q_QNAN)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
