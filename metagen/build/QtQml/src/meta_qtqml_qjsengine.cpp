// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQml/qjsengine.h>

#include "meta_qtqml_qjsengine.h"

using namespace cpgf;

namespace qt_metadata { 


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_Global_qjsengine()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qjsengine(_d);
    return _d.getMetaInfo();
}


#ifdef CPGF_METAGEN_LINKAGE_SPEC
CPGF_METAGEN_LINKAGE_SPEC
#endif
GDefineMetaInfo createMetaClass_QJSEngine()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QJSEngine, QObject> _nd = GDefineMetaClass<QJSEngine, QObject>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QJSEngine", &buildMetaClass_QJSEngine);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QJSEngineWrapper, QJSEngine> _nd = GDefineMetaClass<QJSEngineWrapper, QJSEngine>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::lazyDeclare("QJSEngineWrapper", &buildMetaClass_QJSEngineWrapper);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace qt_metadata


