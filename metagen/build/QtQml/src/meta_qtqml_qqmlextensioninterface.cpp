// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlextensioninterface.h>

#include "meta_qtqml_qqmlextensioninterface.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_Global_qqmlextensioninterface()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qqmlextensioninterface(_d);
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QQmlExtensionInterface()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlExtensionInterface, QQmlTypesExtensionInterface> _nd = GDefineMetaClass<QQmlExtensionInterface, QQmlTypesExtensionInterface>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QQmlExtensionInterface", &buildMetaClass_QQmlExtensionInterface);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlExtensionInterfaceWrapper, QQmlExtensionInterface> _nd = GDefineMetaClass<QQmlExtensionInterfaceWrapper, QQmlExtensionInterface>::lazyDeclare("QQmlExtensionInterfaceWrapper", &buildMetaClass_QQmlExtensionInterfaceWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QQmlTypesExtensionInterface()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlTypesExtensionInterface> _nd = GDefineMetaClass<QQmlTypesExtensionInterface>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QQmlTypesExtensionInterface", &buildMetaClass_QQmlTypesExtensionInterface);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlTypesExtensionInterfaceWrapper, QQmlTypesExtensionInterface> _nd = GDefineMetaClass<QQmlTypesExtensionInterfaceWrapper, QQmlTypesExtensionInterface>::lazyDeclare("QQmlTypesExtensionInterfaceWrapper", &buildMetaClass_QQmlTypesExtensionInterfaceWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


