// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qiconengineplugin.h>

#include "meta_qtgui_qiconengineplugin.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qiconengineplugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qiconengineplugin(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QIconEnginePlugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QIconEnginePlugin, QObject> _nd = GDefineMetaClass<QIconEnginePlugin, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QIconEnginePlugin");
        buildMetaClass_QIconEnginePlugin(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QIconEnginePluginWrapper, QIconEnginePlugin> _nd = GDefineMetaClass<QIconEnginePluginWrapper, QIconEnginePlugin>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QIconEnginePluginWrapper");
        buildMetaClass_QIconEnginePluginWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


