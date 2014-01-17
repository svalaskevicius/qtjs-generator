// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlextensioninterface.h>

#include "meta_qtqml_qqmlextensioninterface.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qqmlextensioninterface()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qqmlextensioninterface(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlExtensionInterface()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlExtensionInterface, QQmlTypesExtensionInterface> _nd = GDefineMetaClass<QQmlExtensionInterface, QQmlTypesExtensionInterface>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlExtensionInterface");
        buildMetaClass_QQmlExtensionInterface(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlExtensionInterfaceWrapper, QQmlExtensionInterface> _nd = GDefineMetaClass<QQmlExtensionInterfaceWrapper, QQmlExtensionInterface>::declare("QQmlExtensionInterfaceWrapper");
        buildMetaClass_QQmlExtensionInterfaceWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlTypesExtensionInterface()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlTypesExtensionInterface> _nd = GDefineMetaClass<QQmlTypesExtensionInterface>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlTypesExtensionInterface");
        buildMetaClass_QQmlTypesExtensionInterface(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlTypesExtensionInterfaceWrapper, QQmlTypesExtensionInterface> _nd = GDefineMetaClass<QQmlTypesExtensionInterfaceWrapper, QQmlTypesExtensionInterface>::declare("QQmlTypesExtensionInterfaceWrapper");
        buildMetaClass_QQmlTypesExtensionInterfaceWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


