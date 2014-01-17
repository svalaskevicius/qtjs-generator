// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qjsengine.h>

#include "meta_qtqml_qjsengine.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qjsengine()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qjsengine(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QJSEngine()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QJSEngine, QObject> _nd = GDefineMetaClass<QJSEngine, QObject>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QJSEngine");
        buildMetaClass_QJSEngine(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QJSEngineWrapper, QJSEngine> _nd = GDefineMetaClass<QJSEngineWrapper, QJSEngine>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QJSEngineWrapper");
        buildMetaClass_QJSEngineWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


