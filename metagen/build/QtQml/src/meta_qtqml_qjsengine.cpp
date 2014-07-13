// Auto generated file, don't modify.

#include <qtQml_cpgf_compat.h>
#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>
#include <QtGui/qpixmap.h>
#include <private/qquickcontext2dcommandbuffer_p.h>
#include <private/qquickcontext2dtexture_p.h>
#include <private/qquickcanvasitem_p.h>
#include <private/qquickanchors_p_p.h>
#include <private/qquickcontext2dtile_p.h>
#include <private/qquickanimation_p.h>
#include <private/qquickscalegrid_p_p.h>
#include <private/qquickcontext2d_p.h>
#include <private/qquicktransition_p.h>
#include <private/qquickflickable_p_p.h>
#include <private/qqmlchangeset_p.h>
#include <private/qquickpath_p.h>
#include <private/qquickevents_p_p.h>
#include <private/qquicksprite_p.h>
#include <QtQuick/qquicktextdocument.h>
#include <QtQuick/qsgsimplerectnode.h>
#include <private/qqmlcontext_p.h>
#include <private/qsgrenderer_p.h>
#include <private/qsgrenderloop_p.h>

#include "QtQml/qjsengine.h"

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


