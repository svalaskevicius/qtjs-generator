// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QFileSelector>
#include <QtCore/QState>

#include <QtQuick/qsgmaterial.h>

#include "meta_qtqml_qsgmaterial.h"

using namespace cpgf;

namespace meta_qtqml { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QSGMaterial()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QSGMaterial> _nd = GDefineMetaClass<QSGMaterial>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QSGMaterial");
        buildMetaClass_QSGMaterial(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QSGMaterialWrapper, QSGMaterial> _nd = GDefineMetaClass<QSGMaterialWrapper, QSGMaterial>::Policy<MakePolicy<GMetaRuleCopyConstructorAbsent> >::declare("QSGMaterialWrapper");
        buildMetaClass_QSGMaterialWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QSGMaterialShader()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QSGMaterialShader> _nd = GDefineMetaClass<QSGMaterialShader>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent, GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QSGMaterialShader");
        buildMetaClass_QSGMaterialShader(0, _nd);
        _d._class(_nd);
    }
    {
        GDefineMetaClass<QSGMaterialShaderWrapper, QSGMaterialShader> _nd = GDefineMetaClass<QSGMaterialShaderWrapper, QSGMaterialShader>::Policy<MakePolicy<GMetaRuleDefaultConstructorAbsent, GMetaRuleCopyConstructorAbsent> >::declare("QSGMaterialShaderWrapper");
        buildMetaClass_QSGMaterialShaderWrapper(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QSGMaterialType()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QSGMaterialType> _nd = GDefineMetaClass<QSGMaterialType>::declare("QSGMaterialType");
        buildMetaClass_QSGMaterialType(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtqml


