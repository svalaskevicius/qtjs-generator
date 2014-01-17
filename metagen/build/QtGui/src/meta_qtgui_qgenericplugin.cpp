// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qgenericplugin.h>

#include "meta_qtgui_qgenericplugin.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qgenericplugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qgenericplugin(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QGenericPlugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QGenericPlugin, QObject> _nd = GDefineMetaClass<QGenericPlugin, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QGenericPlugin");
        buildMetaClass_QGenericPlugin(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QGenericPluginWrapper, QGenericPlugin> _nd = GDefineMetaClass<QGenericPluginWrapper, QGenericPlugin>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QGenericPluginWrapper");
        buildMetaClass_QGenericPluginWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


