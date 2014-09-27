// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGMATERIAL_H
#define CPGF_META_QTQML_QSGMATERIAL_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"


using namespace QSGBatchRenderer;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_QSGMaterial(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("createShader", &D::ClassType::createShader);
    _d.CPGF_MD_TEMPLATE _method("compare", &D::ClassType::compare);
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("setFlag", &D::ClassType::setFlag)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Flag>("Flag")
        ._element("Blending", D::ClassType::Blending)
        ._element("RequiresDeterminant", D::ClassType::RequiresDeterminant)
        ._element("RequiresFullMatrixExceptTranslate", D::ClassType::RequiresFullMatrixExceptTranslate)
        ._element("RequiresFullMatrix", D::ClassType::RequiresFullMatrix)
        ._element("CustomCompileStep", D::ClassType::CustomCompileStep)
    ;
    {
        GDefineMetaClass<QFlags<typename QSGMaterial::Flag > > _t_d = GDefineMetaClass<QFlags<typename QSGMaterial::Flag > >::lazyDeclare("Flags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QSGMaterial::Flag > >, typename QSGMaterial::Flag >);
        _d._class(_t_d);
    }
}


class QSGMaterialWrapper : public QSGMaterial, public cpgf::GScriptWrapper {
public:
    
    QSGMaterialWrapper()
        : QSGMaterial() {}
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSGMaterialShader * super_createShader() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSGMaterialType * super_type() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, other).getValue());
        }
        return QSGMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QSGMaterial::compare(other);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
    }
};


template <typename D>
void buildMetaClass_QSGMaterialWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QSGMaterialWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGMaterial<D>(_d);
}


template <typename D>
void buildMetaClass_QSGMaterialShader(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("activate", &D::ClassType::activate);
    _d.CPGF_MD_TEMPLATE _method("deactivate", &D::ClassType::deactivate);
    _d.CPGF_MD_TEMPLATE _method("updateState", &D::ClassType::updateState);
    _d.CPGF_MD_TEMPLATE _method("attributeNames", &D::ClassType::attributeNames);
    _d.CPGF_MD_TEMPLATE _method("program", &D::ClassType::program);
    {
        GDefineMetaClass<QSGMaterialShader::RenderState> _nd = GDefineMetaClass<QSGMaterialShader::RenderState>::declare("RenderState");
        _nd.CPGF_MD_TEMPLATE _method("dirtyStates", &QSGMaterialShader::RenderState::dirtyStates);
        _nd.CPGF_MD_TEMPLATE _method("isMatrixDirty", &QSGMaterialShader::RenderState::isMatrixDirty);
        _nd.CPGF_MD_TEMPLATE _method("isOpacityDirty", &QSGMaterialShader::RenderState::isOpacityDirty);
        _nd.CPGF_MD_TEMPLATE _method("opacity", &QSGMaterialShader::RenderState::opacity);
        _nd.CPGF_MD_TEMPLATE _method("combinedMatrix", &QSGMaterialShader::RenderState::combinedMatrix);
        _nd.CPGF_MD_TEMPLATE _method("modelViewMatrix", &QSGMaterialShader::RenderState::modelViewMatrix);
        _nd.CPGF_MD_TEMPLATE _method("projectionMatrix", &QSGMaterialShader::RenderState::projectionMatrix);
        _nd.CPGF_MD_TEMPLATE _method("viewportRect", &QSGMaterialShader::RenderState::viewportRect);
        _nd.CPGF_MD_TEMPLATE _method("deviceRect", &QSGMaterialShader::RenderState::deviceRect);
        _nd.CPGF_MD_TEMPLATE _method("determinant", &QSGMaterialShader::RenderState::determinant);
        _nd.CPGF_MD_TEMPLATE _method("devicePixelRatio", &QSGMaterialShader::RenderState::devicePixelRatio);
        _nd.CPGF_MD_TEMPLATE _method("context", &QSGMaterialShader::RenderState::context);
        _nd.CPGF_MD_TEMPLATE _enum<typename QSGMaterialShader::RenderState::DirtyState>("DirtyState")
            ._element("DirtyMatrix", QSGMaterialShader::RenderState::DirtyMatrix)
            ._element("DirtyOpacity", QSGMaterialShader::RenderState::DirtyOpacity)
        ;
        {
            GDefineMetaClass<QFlags<typename QSGMaterialShader::RenderState::DirtyState > > _t_nd = GDefineMetaClass<QFlags<typename QSGMaterialShader::RenderState::DirtyState > >::lazyDeclare("DirtyStates", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QSGMaterialShader::RenderState::DirtyState > >, typename QSGMaterialShader::RenderState::DirtyState >);
            _d._class(_t_nd);
        }
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


class QSGMaterialShaderWrapper : public QSGMaterialShader, public cpgf::GScriptWrapper {
public:
    
    QSGMaterialShaderWrapper()
        : QSGMaterialShader() {}
    
    void setShaderSourceFiles(QOpenGLShader::ShaderType type, const QStringList & sourceFiles)
    {
        QSGMaterialShader::setShaderSourceFiles(type, sourceFiles);
    }
    
    void compile()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compile"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGMaterialShader::compile();
    }
    void super_compile()
    {
        QSGMaterialShader::compile();
    }
    
    const char * fragmentShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("fragmentShader"));
        if(func)
        {
            return cpgf::fromVariant<const char * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGMaterialShader::fragmentShader();
    }
    const char * super_fragmentShader() const
    {
        return QSGMaterialShader::fragmentShader();
    }
    
    const char * vertexShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("vertexShader"));
        if(func)
        {
            return cpgf::fromVariant<const char * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGMaterialShader::vertexShader();
    }
    const char * super_vertexShader() const
    {
        return QSGMaterialShader::vertexShader();
    }
    
    void deactivate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("deactivate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGMaterialShader::deactivate();
    }
    void super_deactivate()
    {
        QSGMaterialShader::deactivate();
    }
    
    void setShaderSourceFile(QOpenGLShader::ShaderType type, const QString & sourceFile)
    {
        QSGMaterialShader::setShaderSourceFile(type, sourceFile);
    }
    
    void initialize()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initialize"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGMaterialShader::initialize();
    }
    void super_initialize()
    {
        QSGMaterialShader::initialize();
    }
    
    char const *const * attributeNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("attributeNames"));
        if(func)
        {
            return cpgf::fromVariant<char const *const * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    char const *const * super_attributeNames() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void updateState(const QSGMaterialShader::RenderState& state, QSGMaterial * newMaterial, QSGMaterial * oldMaterial)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateState"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, state, newMaterial, oldMaterial);
            return;
        }
        QSGMaterialShader::updateState(state, newMaterial, oldMaterial);
    }
    void super_updateState(const QSGMaterialShader::RenderState& state, QSGMaterial * newMaterial, QSGMaterial * oldMaterial)
    {
        QSGMaterialShader::updateState(state, newMaterial, oldMaterial);
    }
    
    void activate()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("activate"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGMaterialShader::activate();
    }
    void super_activate()
    {
        QSGMaterialShader::activate();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("setShaderSourceFiles", (void (D::ClassType::*) (QOpenGLShader::ShaderType, const QStringList &))&D::ClassType::setShaderSourceFiles, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("compile", (void (D::ClassType::*) ())&D::ClassType::compile);
        _d.CPGF_MD_TEMPLATE _method("fragmentShader", (const char * (D::ClassType::*) () const)&D::ClassType::fragmentShader);
        _d.CPGF_MD_TEMPLATE _method("vertexShader", (const char * (D::ClassType::*) () const)&D::ClassType::vertexShader);
        _d.CPGF_MD_TEMPLATE _method("setShaderSourceFile", (void (D::ClassType::*) (QOpenGLShader::ShaderType, const QString &))&D::ClassType::setShaderSourceFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("initialize", (void (D::ClassType::*) ())&D::ClassType::initialize);
        _d.CPGF_MD_TEMPLATE _method("super_compile", (void (D::ClassType::*) ())&D::ClassType::super_compile);
        _d.CPGF_MD_TEMPLATE _method("super_fragmentShader", (const char * (D::ClassType::*) () const)&D::ClassType::super_fragmentShader);
        _d.CPGF_MD_TEMPLATE _method("super_vertexShader", (const char * (D::ClassType::*) () const)&D::ClassType::super_vertexShader);
        _d.CPGF_MD_TEMPLATE _method("super_deactivate", (void (D::ClassType::*) ())&D::ClassType::super_deactivate);
        _d.CPGF_MD_TEMPLATE _method("super_initialize", (void (D::ClassType::*) ())&D::ClassType::super_initialize);
        _d.CPGF_MD_TEMPLATE _method("super_attributeNames", (char const *const * (D::ClassType::*) () const)&D::ClassType::super_attributeNames);
        _d.CPGF_MD_TEMPLATE _method("super_updateState", (void (D::ClassType::*) (const QSGMaterialShader::RenderState&, QSGMaterial *, QSGMaterial *))&D::ClassType::super_updateState);
        _d.CPGF_MD_TEMPLATE _method("super_activate", (void (D::ClassType::*) ())&D::ClassType::super_activate);
    }
};


template <typename D>
void buildMetaClass_QSGMaterialShaderWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QSGMaterialShaderWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGMaterialShader<D>(_d);
}


template <typename D>
void buildMetaClass_QSGMaterialType(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
