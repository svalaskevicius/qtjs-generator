// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGSHADERSOURCEBUILDER_P_H
#define CPGF_META_QTQML_QSGSHADERSOURCEBUILDER_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtQml_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QSGShaderSourceBuilder(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("source", &D::ClassType::source);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("appendSource", &D::ClassType::appendSource, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("appendSourceFile", &D::ClassType::appendSourceFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addDefinition", &D::ClassType::addDefinition, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("removeVersion", &D::ClassType::removeVersion);
    _d.CPGF_MD_TEMPLATE _method("initializeProgramFromFiles", &D::ClassType::initializeProgramFromFiles, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
}


class QSGShaderSourceBuilderWrapper : public QSGShaderSourceBuilder, public cpgf::GScriptWrapper {
public:
    
    QSGShaderSourceBuilderWrapper()
        : QSGShaderSourceBuilder() {}
    
    QString resolveShaderPath(const QString & path) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resolveShaderPath"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunction(func.get(), this, path).getValue());
        }
        return QSGShaderSourceBuilder::resolveShaderPath(path);
    }
    QString super_resolveShaderPath(const QString & path) const
    {
        return QSGShaderSourceBuilder::resolveShaderPath(path);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("resolveShaderPath", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::resolveShaderPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_resolveShaderPath", (QString (D::ClassType::*) (const QString &) const)&D::ClassType::super_resolveShaderPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    }
};


template <typename D>
void buildMetaClass_QSGShaderSourceBuilderWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGShaderSourceBuilderWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGShaderSourceBuilder<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
