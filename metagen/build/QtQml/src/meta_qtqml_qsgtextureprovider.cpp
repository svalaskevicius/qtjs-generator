// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQuick/qsgtextureprovider.h>

#include "meta_qtqml_qsgtextureprovider.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QSGTextureProvider()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QSGTextureProvider, QObject> _nd = GDefineMetaClass<QSGTextureProvider, QObject>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QSGTextureProvider");
        buildMetaClass_QSGTextureProvider(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QSGTextureProviderWrapper, QSGTextureProvider> _nd = GDefineMetaClass<QSGTextureProviderWrapper, QSGTextureProvider>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QSGTextureProviderWrapper");
        buildMetaClass_QSGTextureProviderWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


