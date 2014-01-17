// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlextensionplugin.h>

#include "meta_qtqml_qqmlextensionplugin.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlExtensionPlugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlExtensionPlugin, QObject, QQmlExtensionInterface> _nd = GDefineMetaClass<QQmlExtensionPlugin, QObject, QQmlExtensionInterface>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlExtensionPlugin");
        buildMetaClass_QQmlExtensionPlugin(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlExtensionPluginWrapper, QQmlExtensionPlugin> _nd = GDefineMetaClass<QQmlExtensionPluginWrapper, QQmlExtensionPlugin>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlExtensionPluginWrapper");
        buildMetaClass_QQmlExtensionPluginWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


