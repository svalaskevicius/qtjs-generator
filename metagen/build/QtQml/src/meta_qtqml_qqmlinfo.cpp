// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlinfo.h>

#include "meta_qtqml_qqmlinfo.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_Global_qqmlinfo()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qqmlinfo(_d);
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QQmlInfo()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlInfo, QDebug> _nd = GDefineMetaClass<QQmlInfo, QDebug>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::lazyDeclare("QQmlInfo", &buildMetaClass_QQmlInfo);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


