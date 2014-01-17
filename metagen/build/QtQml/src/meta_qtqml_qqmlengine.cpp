// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qqmlengine.h>

#include "meta_qtqml_qqmlengine.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlEngine()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlEngine, QJSEngine> _nd = GDefineMetaClass<QQmlEngine, QJSEngine>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlEngine");
        buildMetaClass_QQmlEngine(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlEngineWrapper, QQmlEngine> _nd = GDefineMetaClass<QQmlEngineWrapper, QQmlEngine>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlEngineWrapper");
        buildMetaClass_QQmlEngineWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QQmlImageProviderBase()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QQmlImageProviderBase> _nd = GDefineMetaClass<QQmlImageProviderBase>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QQmlImageProviderBase");
        buildMetaClass_QQmlImageProviderBase(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QQmlImageProviderBaseWrapper, QQmlImageProviderBase> _nd = GDefineMetaClass<QQmlImageProviderBaseWrapper, QQmlImageProviderBase>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent> >::declare("QQmlImageProviderBaseWrapper");
        buildMetaClass_QQmlImageProviderBaseWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


