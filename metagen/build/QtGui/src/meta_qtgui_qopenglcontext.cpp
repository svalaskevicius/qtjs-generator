// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qopenglcontext.h>

#include "meta_qtgui_qopenglcontext.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qopenglcontext()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qopenglcontext(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QOpenGLContext()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QOpenGLContext, QObject> _nd = GDefineMetaClass<QOpenGLContext, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QOpenGLContext");
        buildMetaClass_QOpenGLContext(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QOpenGLContextWrapper, QOpenGLContext> _nd = GDefineMetaClass<QOpenGLContextWrapper, QOpenGLContext>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QOpenGLContextWrapper");
        buildMetaClass_QOpenGLContextWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QOpenGLContextGroup()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QOpenGLContextGroup, QObject> _nd = GDefineMetaClass<QOpenGLContextGroup, QObject>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QOpenGLContextGroup");
        buildMetaClass_QOpenGLContextGroup(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QOpenGLContextGroupWrapper, QOpenGLContextGroup> _nd = GDefineMetaClass<QOpenGLContextGroupWrapper, QOpenGLContextGroup>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QOpenGLContextGroupWrapper");
        buildMetaClass_QOpenGLContextGroupWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QOpenGLVersionProfile()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QOpenGLVersionProfile> _nd = GDefineMetaClass<QOpenGLVersionProfile>::declare("QOpenGLVersionProfile");
        buildMetaClass_QOpenGLVersionProfile(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


