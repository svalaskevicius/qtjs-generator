// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGDEFAULTRECTANGLENODE_P_H
#define CPGF_META_QTQML_QSGDEFAULTRECTANGLENODE_P_H


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
void buildMetaClass_QSGDefaultRectangleNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("setRect", &D::ClassType::setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPenColor", &D::ClassType::setPenColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPenWidth", &D::ClassType::setPenWidth);
    _d.CPGF_MD_TEMPLATE _method("setGradientStops", &D::ClassType::setGradientStops);
    _d.CPGF_MD_TEMPLATE _method("setRadius", &D::ClassType::setRadius);
    _d.CPGF_MD_TEMPLATE _method("setAntialiasing", &D::ClassType::setAntialiasing);
    _d.CPGF_MD_TEMPLATE _method("setAligned", &D::ClassType::setAligned);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
}


class QSGDefaultRectangleNodeWrapper : public QSGDefaultRectangleNode, public cpgf::GScriptWrapper {
public:
    
    QSGDefaultRectangleNodeWrapper()
        : QSGDefaultRectangleNode() {}
    
    void setGradientStops(const QGradientStops & stops)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGradientStops"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, stops);
            return;
        }
        QSGDefaultRectangleNode::setGradientStops(stops);
    }
    void super_setGradientStops(const QGradientStops & stops)
    {
        QSGDefaultRectangleNode::setGradientStops(stops);
    }
    
    void setPenWidth(qreal width)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPenWidth"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, width);
            return;
        }
        QSGDefaultRectangleNode::setPenWidth(width);
    }
    void super_setPenWidth(qreal width)
    {
        QSGDefaultRectangleNode::setPenWidth(width);
    }
    
    void setAntialiasing(bool antialiasing)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setAntialiasing"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, antialiasing);
            return;
        }
        QSGDefaultRectangleNode::setAntialiasing(antialiasing);
    }
    void super_setAntialiasing(bool antialiasing)
    {
        QSGDefaultRectangleNode::setAntialiasing(antialiasing);
    }
    
    void setAligned(bool aligned)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setAligned"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, aligned);
            return;
        }
        QSGDefaultRectangleNode::setAligned(aligned);
    }
    void super_setAligned(bool aligned)
    {
        QSGDefaultRectangleNode::setAligned(aligned);
    }
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGDefaultRectangleNode::update();
    }
    void super_update()
    {
        QSGDefaultRectangleNode::update();
    }
    
    bool isSubtreeBlocked() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSubtreeBlocked"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGNode::isSubtreeBlocked();
    }
    bool super_isSubtreeBlocked() const
    {
        return QSGNode::isSubtreeBlocked();
    }
    
    void setRadius(qreal radius)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRadius"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, radius);
            return;
        }
        QSGDefaultRectangleNode::setRadius(radius);
    }
    void super_setRadius(qreal radius)
    {
        QSGDefaultRectangleNode::setRadius(radius);
    }
    
    void setRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        QSGDefaultRectangleNode::setRect(rect);
    }
    void super_setRect(const QRectF & rect)
    {
        QSGDefaultRectangleNode::setRect(rect);
    }
    
    void setColor(const QColor & color)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, color);
            return;
        }
        QSGDefaultRectangleNode::setColor(color);
    }
    void super_setColor(const QColor & color)
    {
        QSGDefaultRectangleNode::setColor(color);
    }
    
    void setPenColor(const QColor & color)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPenColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, color);
            return;
        }
        QSGDefaultRectangleNode::setPenColor(color);
    }
    void super_setPenColor(const QColor & color)
    {
        QSGDefaultRectangleNode::setPenColor(color);
    }
    
    void preprocess()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("preprocess"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QSGNode::preprocess();
    }
    void super_preprocess()
    {
        QSGNode::preprocess();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setGradientStops", (void (D::ClassType::*) (const QGradientStops &))&D::ClassType::super_setGradientStops);
        _d.CPGF_MD_TEMPLATE _method("super_setPenWidth", (void (D::ClassType::*) (qreal))&D::ClassType::super_setPenWidth);
        _d.CPGF_MD_TEMPLATE _method("super_setAntialiasing", (void (D::ClassType::*) (bool))&D::ClassType::super_setAntialiasing);
        _d.CPGF_MD_TEMPLATE _method("super_setAligned", (void (D::ClassType::*) (bool))&D::ClassType::super_setAligned);
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) ())&D::ClassType::super_update);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_setRadius", (void (D::ClassType::*) (qreal))&D::ClassType::super_setRadius);
        _d.CPGF_MD_TEMPLATE _method("super_setRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setPenColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setPenColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
    }
};


template <typename D>
void buildMetaClass_QSGDefaultRectangleNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGDefaultRectangleNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGDefaultRectangleNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGSmoothColorMaterial(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("compare", &D::ClassType::compare);
}


class QSGSmoothColorMaterialWrapper : public QSGSmoothColorMaterial, public cpgf::GScriptWrapper {
public:
    
    QSGSmoothColorMaterialWrapper()
        : QSGSmoothColorMaterial() {}
    
    QSGMaterialShader * createShader() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createShader"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialShader * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGSmoothColorMaterial::createShader();
    }
    QSGMaterialShader * super_createShader() const
    {
        return QSGSmoothColorMaterial::createShader();
    }
    
    QSGMaterialType * type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QSGMaterialType * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGSmoothColorMaterial::type();
    }
    QSGMaterialType * super_type() const
    {
        return QSGSmoothColorMaterial::type();
    }
    
    int compare(const QSGMaterial * other) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("compare"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, other).getValue());
        }
        return QSGSmoothColorMaterial::compare(other);
    }
    int super_compare(const QSGMaterial * other) const
    {
        return QSGSmoothColorMaterial::compare(other);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::createShader);
        _d.CPGF_MD_TEMPLATE _method("type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::type);
        _d.CPGF_MD_TEMPLATE _method("super_createShader", (QSGMaterialShader * (D::ClassType::*) () const)&D::ClassType::super_createShader);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QSGMaterialType * (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_compare", (int (D::ClassType::*) (const QSGMaterial *) const)&D::ClassType::super_compare);
    }
};


template <typename D>
void buildMetaClass_QSGSmoothColorMaterialWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGSmoothColorMaterialWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGSmoothColorMaterial<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
