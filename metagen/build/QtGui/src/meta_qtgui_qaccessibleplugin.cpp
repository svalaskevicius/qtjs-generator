// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qaccessibleplugin.h>

#include "meta_qtgui_qaccessibleplugin.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qaccessibleplugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qaccessibleplugin(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QAccessiblePlugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QAccessiblePlugin, QObject> _nd = GDefineMetaClass<QAccessiblePlugin, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QAccessiblePlugin");
        buildMetaClass_QAccessiblePlugin(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QAccessiblePluginWrapper, QAccessiblePlugin> _nd = GDefineMetaClass<QAccessiblePluginWrapper, QAccessiblePlugin>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QAccessiblePluginWrapper");
        buildMetaClass_QAccessiblePluginWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


