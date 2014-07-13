// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QOPENGLSHADERPROGRAM_H
#define CPGF_META_QTGUI_QOPENGLSHADERPROGRAM_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QOpenGLShader(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QOpenGLShader::ShaderType, QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("shaderType", &D::ClassType::shaderType);
    _d.CPGF_MD_TEMPLATE _method("compileSourceCode", (bool (D::ClassType::*) (const char *))&D::ClassType::compileSourceCode);
    _d.CPGF_MD_TEMPLATE _method("compileSourceCode", (bool (D::ClassType::*) (const QByteArray &))&D::ClassType::compileSourceCode, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("compileSourceCode", (bool (D::ClassType::*) (const QString &))&D::ClassType::compileSourceCode, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("compileSourceFile", &D::ClassType::compileSourceFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("sourceCode", &D::ClassType::sourceCode);
    _d.CPGF_MD_TEMPLATE _method("isCompiled", &D::ClassType::isCompiled);
    _d.CPGF_MD_TEMPLATE _method("log", &D::ClassType::log);
    _d.CPGF_MD_TEMPLATE _method("shaderId", &D::ClassType::shaderId);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasOpenGLShaders", &D::ClassType::hasOpenGLShaders)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ShaderTypeBit>("ShaderTypeBit")
        ._element("Vertex", D::ClassType::Vertex)
        ._element("Fragment", D::ClassType::Fragment)
        ._element("Geometry", D::ClassType::Geometry)
        ._element("TessellationControl", D::ClassType::TessellationControl)
        ._element("TessellationEvaluation", D::ClassType::TessellationEvaluation)
        ._element("Compute", D::ClassType::Compute)
    ;
    {
        GDefineMetaClass<QFlags<typename QOpenGLShader::ShaderTypeBit > > _t_d = GDefineMetaClass<QFlags<typename QOpenGLShader::ShaderTypeBit > >::lazyDeclare("ShaderType", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QOpenGLShader::ShaderTypeBit > >, typename QOpenGLShader::ShaderTypeBit >);
        _d._class(_t_d);
    }
}


class QOpenGLShaderWrapper : public QOpenGLShader, public cpgf::GScriptWrapper {
public:
    
    QOpenGLShaderWrapper(QOpenGLShader::ShaderType type, QObject * parent = 0)
        : QOpenGLShader(type, parent) {}
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QOpenGLShader::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QOpenGLShader::qt_metacast(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QOpenGLShader::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QOpenGLShader::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QOpenGLShader::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QOpenGLShader::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    }
};


template <typename D>
void buildMetaClass_QOpenGLShaderWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QOpenGLShaderWrapper::cpgf__register(_d);
    
    buildMetaClass_QOpenGLShader<D>(_d);
}


template <typename D>
void buildMetaClass_QOpenGLShaderProgram(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("addShader", &D::ClassType::addShader);
    _d.CPGF_MD_TEMPLATE _method("removeShader", &D::ClassType::removeShader);
    _d.CPGF_MD_TEMPLATE _method("shaders", &D::ClassType::shaders);
    _d.CPGF_MD_TEMPLATE _method("addShaderFromSourceCode", (bool (D::ClassType::*) (QOpenGLShader::ShaderType, const char *))&D::ClassType::addShaderFromSourceCode);
    _d.CPGF_MD_TEMPLATE _method("addShaderFromSourceCode", (bool (D::ClassType::*) (QOpenGLShader::ShaderType, const QByteArray &))&D::ClassType::addShaderFromSourceCode, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("addShaderFromSourceCode", (bool (D::ClassType::*) (QOpenGLShader::ShaderType, const QString &))&D::ClassType::addShaderFromSourceCode, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("addShaderFromSourceFile", &D::ClassType::addShaderFromSourceFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("removeAllShaders", &D::ClassType::removeAllShaders);
    _d.CPGF_MD_TEMPLATE _method("link", &D::ClassType::link);
    _d.CPGF_MD_TEMPLATE _method("isLinked", &D::ClassType::isLinked);
    _d.CPGF_MD_TEMPLATE _method("log", &D::ClassType::log);
    _d.CPGF_MD_TEMPLATE _method("bind", &D::ClassType::bind);
    _d.CPGF_MD_TEMPLATE _method("release", &D::ClassType::release);
    _d.CPGF_MD_TEMPLATE _method("create", &D::ClassType::create);
    _d.CPGF_MD_TEMPLATE _method("programId", &D::ClassType::programId);
    _d.CPGF_MD_TEMPLATE _method("maxGeometryOutputVertices", &D::ClassType::maxGeometryOutputVertices);
    _d.CPGF_MD_TEMPLATE _method("setPatchVertexCount", &D::ClassType::setPatchVertexCount);
    _d.CPGF_MD_TEMPLATE _method("patchVertexCount", &D::ClassType::patchVertexCount);
    _d.CPGF_MD_TEMPLATE _method("setDefaultOuterTessellationLevels", &D::ClassType::setDefaultOuterTessellationLevels, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("defaultOuterTessellationLevels", &D::ClassType::defaultOuterTessellationLevels);
    _d.CPGF_MD_TEMPLATE _method("setDefaultInnerTessellationLevels", &D::ClassType::setDefaultInnerTessellationLevels, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("defaultInnerTessellationLevels", &D::ClassType::defaultInnerTessellationLevels);
    _d.CPGF_MD_TEMPLATE _method("bindAttributeLocation", (void (D::ClassType::*) (const char *, int))&D::ClassType::bindAttributeLocation);
    _d.CPGF_MD_TEMPLATE _method("bindAttributeLocation", (void (D::ClassType::*) (const QByteArray &, int))&D::ClassType::bindAttributeLocation, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("bindAttributeLocation", (void (D::ClassType::*) (const QString &, int))&D::ClassType::bindAttributeLocation, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("attributeLocation", (int (D::ClassType::*) (const char *) const)&D::ClassType::attributeLocation);
    _d.CPGF_MD_TEMPLATE _method("attributeLocation", (int (D::ClassType::*) (const QByteArray &) const)&D::ClassType::attributeLocation, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("attributeLocation", (int (D::ClassType::*) (const QString &) const)&D::ClassType::attributeLocation, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (int, GLfloat))&D::ClassType::setAttributeValue);
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (int, GLfloat, GLfloat))&D::ClassType::setAttributeValue);
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (int, GLfloat, GLfloat, GLfloat))&D::ClassType::setAttributeValue);
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (int, GLfloat, GLfloat, GLfloat, GLfloat))&D::ClassType::setAttributeValue);
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (int, const QVector2D &))&D::ClassType::setAttributeValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (int, const QVector3D &))&D::ClassType::setAttributeValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (int, const QVector4D &))&D::ClassType::setAttributeValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (int, const QColor &))&D::ClassType::setAttributeValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (int, const GLfloat *, int, int))&D::ClassType::setAttributeValue);
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (const char *, GLfloat))&D::ClassType::setAttributeValue);
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (const char *, GLfloat, GLfloat))&D::ClassType::setAttributeValue);
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (const char *, GLfloat, GLfloat, GLfloat))&D::ClassType::setAttributeValue);
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (const char *, GLfloat, GLfloat, GLfloat, GLfloat))&D::ClassType::setAttributeValue);
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (const char *, const QVector2D &))&D::ClassType::setAttributeValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (const char *, const QVector3D &))&D::ClassType::setAttributeValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (const char *, const QVector4D &))&D::ClassType::setAttributeValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (const char *, const QColor &))&D::ClassType::setAttributeValue, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("setAttributeValue", (void (D::ClassType::*) (const char *, const GLfloat *, int, int))&D::ClassType::setAttributeValue);
    _d.CPGF_MD_TEMPLATE _method("setAttributeArray", (void (D::ClassType::*) (int, const GLfloat *, int, int))&D::ClassType::setAttributeArray)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeArray", (void (D::ClassType::*) (int, const QVector2D *, int))&D::ClassType::setAttributeArray)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeArray", (void (D::ClassType::*) (int, const QVector3D *, int))&D::ClassType::setAttributeArray)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeArray", (void (D::ClassType::*) (int, const QVector4D *, int))&D::ClassType::setAttributeArray)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeArray", (void (D::ClassType::*) (int, GLenum, const void *, int, int))&D::ClassType::setAttributeArray)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeArray", (void (D::ClassType::*) (const char *, const GLfloat *, int, int))&D::ClassType::setAttributeArray)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeArray", (void (D::ClassType::*) (const char *, const QVector2D *, int))&D::ClassType::setAttributeArray)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeArray", (void (D::ClassType::*) (const char *, const QVector3D *, int))&D::ClassType::setAttributeArray)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeArray", (void (D::ClassType::*) (const char *, const QVector4D *, int))&D::ClassType::setAttributeArray)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeArray", (void (D::ClassType::*) (const char *, GLenum, const void *, int, int))&D::ClassType::setAttributeArray)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeBuffer", (void (D::ClassType::*) (int, GLenum, int, int, int))&D::ClassType::setAttributeBuffer)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setAttributeBuffer", (void (D::ClassType::*) (const char *, GLenum, int, int, int))&D::ClassType::setAttributeBuffer)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("enableAttributeArray", (void (D::ClassType::*) (int))&D::ClassType::enableAttributeArray);
    _d.CPGF_MD_TEMPLATE _method("enableAttributeArray", (void (D::ClassType::*) (const char *))&D::ClassType::enableAttributeArray);
    _d.CPGF_MD_TEMPLATE _method("disableAttributeArray", (void (D::ClassType::*) (int))&D::ClassType::disableAttributeArray);
    _d.CPGF_MD_TEMPLATE _method("disableAttributeArray", (void (D::ClassType::*) (const char *))&D::ClassType::disableAttributeArray);
    _d.CPGF_MD_TEMPLATE _method("uniformLocation", (int (D::ClassType::*) (const char *) const)&D::ClassType::uniformLocation);
    _d.CPGF_MD_TEMPLATE _method("uniformLocation", (int (D::ClassType::*) (const QByteArray &) const)&D::ClassType::uniformLocation, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("uniformLocation", (int (D::ClassType::*) (const QString &) const)&D::ClassType::uniformLocation, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const GLfloat *, int, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const GLint *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const GLuint *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QVector2D *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QVector3D *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QVector4D *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QMatrix2x2 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QMatrix2x3 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QMatrix2x4 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QMatrix3x2 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QMatrix3x3 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QMatrix3x4 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QMatrix4x2 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QMatrix4x3 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (int, const QMatrix4x4 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const GLfloat *, int, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const GLint *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const GLuint *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QVector2D *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QVector3D *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QVector4D *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QMatrix2x2 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QMatrix2x3 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QMatrix2x4 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QMatrix3x2 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QMatrix3x3 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QMatrix3x4 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QMatrix4x2 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QMatrix4x3 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("setUniformValueArray", (void (D::ClassType::*) (const char *, const QMatrix4x4 *, int))&D::ClassType::setUniformValueArray);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasOpenGLShaderPrograms", &D::ClassType::hasOpenGLShaderPrograms)
        ._default(copyVariantFromCopyable(0))
    ;
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
