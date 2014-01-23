// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qopengldebug.h>

#include "meta_qtgui_qopengldebug.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qopengldebug()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qopengldebug(_d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QOpenGLDebugLogger()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QOpenGLDebugLogger, QObject> _nd = GDefineMetaClass<QOpenGLDebugLogger, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QOpenGLDebugLogger", &buildMetaClass_QOpenGLDebugLogger);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QOpenGLDebugLoggerWrapper, QOpenGLDebugLogger> _nd = GDefineMetaClass<QOpenGLDebugLoggerWrapper, QOpenGLDebugLogger>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QOpenGLDebugLoggerWrapper", &buildMetaClass_QOpenGLDebugLoggerWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QOpenGLDebugMessage()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QOpenGLDebugMessage> _nd = GDefineMetaClass<QOpenGLDebugMessage>::lazyDeclare("QOpenGLDebugMessage", &buildMetaClass_QOpenGLDebugMessage);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


