// Auto generated file, don't modify.

#ifndef __META_QTCORE_QMATH_H
#define __META_QTCORE_QMATH_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qmath(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("qCeil", (int (*) (qreal))&qCeil);
    _d.CPGF_MD_TEMPLATE _method("qFloor", (int (*) (qreal))&qFloor);
    _d.CPGF_MD_TEMPLATE _method("qFabs", (qreal (*) (qreal))&qFabs);
    _d.CPGF_MD_TEMPLATE _method("qSin", (qreal (*) (qreal))&qSin);
    _d.CPGF_MD_TEMPLATE _method("qCos", (qreal (*) (qreal))&qCos);
    _d.CPGF_MD_TEMPLATE _method("qTan", (qreal (*) (qreal))&qTan);
    _d.CPGF_MD_TEMPLATE _method("qAcos", (qreal (*) (qreal))&qAcos);
    _d.CPGF_MD_TEMPLATE _method("qAsin", (qreal (*) (qreal))&qAsin);
    _d.CPGF_MD_TEMPLATE _method("qAtan", (qreal (*) (qreal))&qAtan);
    _d.CPGF_MD_TEMPLATE _method("qAtan2", (qreal (*) (qreal, qreal))&qAtan2);
    _d.CPGF_MD_TEMPLATE _method("qSqrt", (qreal (*) (qreal))&qSqrt);
    _d.CPGF_MD_TEMPLATE _method("qLn", (qreal (*) (qreal))&qLn);
    _d.CPGF_MD_TEMPLATE _method("qExp", (qreal (*) (qreal))&qExp);
    _d.CPGF_MD_TEMPLATE _method("qPow", (qreal (*) (qreal, qreal))&qPow);
    _d.CPGF_MD_TEMPLATE _method("qFastSin", (qreal (*) (qreal))&qFastSin);
    _d.CPGF_MD_TEMPLATE _method("qFastCos", (qreal (*) (qreal))&qFastCos);
    _d.CPGF_MD_TEMPLATE _method("qDegreesToRadians", (float (*) (float))&qDegreesToRadians);
    _d.CPGF_MD_TEMPLATE _method("qDegreesToRadians", (double (*) (double))&qDegreesToRadians);
    _d.CPGF_MD_TEMPLATE _method("qRadiansToDegrees", (float (*) (float))&qRadiansToDegrees);
    _d.CPGF_MD_TEMPLATE _method("qRadiansToDegrees", (double (*) (double))&qRadiansToDegrees);
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtCore_20")
        ._element("QT_SINE_TABLE_SIZE", QT_SINE_TABLE_SIZE)
        ._element("M_E", M_E)
        ._element("M_LOG2E", M_LOG2E)
        ._element("M_LOG10E", M_LOG10E)
        ._element("M_LN2", M_LN2)
        ._element("M_LN10", M_LN10)
        ._element("M_PI", M_PI)
        ._element("M_PI_2", M_PI_2)
        ._element("M_PI_4", M_PI_4)
        ._element("M_1_PI", M_1_PI)
        ._element("M_2_PI", M_2_PI)
        ._element("M_2_SQRTPI", M_2_SQRTPI)
        ._element("M_SQRT2", M_SQRT2)
        ._element("M_SQRT1_2", M_SQRT1_2)
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
