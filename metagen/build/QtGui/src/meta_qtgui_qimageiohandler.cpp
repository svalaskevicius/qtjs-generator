// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qimageiohandler.h>

#include "meta_qtgui_qimageiohandler.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qimageiohandler()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qimageiohandler(_d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QImageIOHandler()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QImageIOHandler> _nd = GDefineMetaClass<QImageIOHandler>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QImageIOHandler", &buildMetaClass_QImageIOHandler);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QImageIOHandlerWrapper, QImageIOHandler> _nd = GDefineMetaClass<QImageIOHandlerWrapper, QImageIOHandler>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QImageIOHandlerWrapper", &buildMetaClass_QImageIOHandlerWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QImageIOPlugin()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QImageIOPlugin, QObject> _nd = GDefineMetaClass<QImageIOPlugin, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QImageIOPlugin", &buildMetaClass_QImageIOPlugin);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QImageIOPluginWrapper, QImageIOPlugin> _nd = GDefineMetaClass<QImageIOPluginWrapper, QImageIOPlugin>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QImageIOPluginWrapper", &buildMetaClass_QImageIOPluginWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


