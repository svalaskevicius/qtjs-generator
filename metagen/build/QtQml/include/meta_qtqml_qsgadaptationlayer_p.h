// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QSGADAPTATIONLAYER_P_H
#define CPGF_META_QTQML_QSGADAPTATIONLAYER_P_H


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
void buildMetaClass_QSGDistanceFieldGlyphConsumer(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("invalidateGlyphs", &D::ClassType::invalidateGlyphs, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


class QSGDistanceFieldGlyphConsumerWrapper : public QSGDistanceFieldGlyphConsumer, public cpgf::GScriptWrapper {
public:
    
    void invalidateGlyphs(const QVector< quint32 > & glyphs)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("invalidateGlyphs"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, glyphs);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_invalidateGlyphs(const QVector< quint32 > & glyphs)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_invalidateGlyphs", (void (D::ClassType::*) (const QVector< quint32 > &))&D::ClassType::super_invalidateGlyphs, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    }
};


template <typename D>
void buildMetaClass_QSGDistanceFieldGlyphConsumerWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGDistanceFieldGlyphConsumerWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGDistanceFieldGlyphConsumer<D>(_d);
}


template <typename D>
void buildMetaClass_QSGGlyphNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setGlyphs", &D::ClassType::setGlyphs, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setColor", &D::ClassType::setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setStyle", &D::ClassType::setStyle);
    _d.CPGF_MD_TEMPLATE _method("setStyleColor", &D::ClassType::setStyleColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("baseLine", &D::ClassType::baseLine);
    _d.CPGF_MD_TEMPLATE _method("boundingRect", &D::ClassType::boundingRect);
    _d.CPGF_MD_TEMPLATE _method("setBoundingRect", &D::ClassType::setBoundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setPreferredAntialiasingMode", &D::ClassType::setPreferredAntialiasingMode);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
    _d.CPGF_MD_TEMPLATE _method("setOwnerElement", &D::ClassType::setOwnerElement);
    _d.CPGF_MD_TEMPLATE _method("ownerElement", &D::ClassType::ownerElement);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AntialiasingMode>("AntialiasingMode")
        ._element("GrayAntialiasing", D::ClassType::GrayAntialiasing)
        ._element("LowQualitySubPixelAntialiasing", D::ClassType::LowQualitySubPixelAntialiasing)
        ._element("HighQualitySubPixelAntialiasing", D::ClassType::HighQualitySubPixelAntialiasing)
    ;
}


class QSGGlyphNodeWrapper : public QSGGlyphNode, public cpgf::GScriptWrapper {
public:
    
    QSGGlyphNodeWrapper()
        : QSGGlyphNode() {}
    
    void setStyleColor(const QColor & color)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setStyleColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, color);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setStyleColor(const QColor & color)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setColor(const QColor & color)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, color);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setColor(const QColor & color)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QPointF baseLine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("baseLine"));
        if(func)
        {
            return cpgf::fromVariant<QPointF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QPointF super_baseLine() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setBoundingRect(const QRectF & bounds)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setBoundingRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, bounds);
            return;
        }
        QSGGlyphNode::setBoundingRect(bounds);
    }
    void super_setBoundingRect(const QRectF & bounds)
    {
        QSGGlyphNode::setBoundingRect(bounds);
    }
    
    void setPreferredAntialiasingMode(QSGGlyphNode::AntialiasingMode __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPreferredAntialiasingMode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setPreferredAntialiasingMode(QSGGlyphNode::AntialiasingMode __arg0)
    {
        throw std::runtime_error("Abstract method");
    }
    
    QRectF boundingRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("boundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSGGlyphNode::boundingRect();
    }
    QRectF super_boundingRect() const
    {
        return QSGGlyphNode::boundingRect();
    }
    
    void setGlyphs(const QPointF & position, const QGlyphRun & glyphs)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGlyphs"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, position, glyphs);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setGlyphs(const QPointF & position, const QGlyphRun & glyphs)
    {
        throw std::runtime_error("Abstract method");
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
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_update()
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setStyle(QQuickText::TextStyle style)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setStyle"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, style);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setStyle(QQuickText::TextStyle style)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setStyleColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setStyleColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_baseLine", (QPointF (D::ClassType::*) () const)&D::ClassType::super_baseLine);
        _d.CPGF_MD_TEMPLATE _method("super_setBoundingRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setBoundingRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setPreferredAntialiasingMode", (void (D::ClassType::*) (QSGGlyphNode::AntialiasingMode))&D::ClassType::super_setPreferredAntialiasingMode);
        _d.CPGF_MD_TEMPLATE _method("super_boundingRect", (QRectF (D::ClassType::*) () const)&D::ClassType::super_boundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_setGlyphs", (void (D::ClassType::*) (const QPointF &, const QGlyphRun &))&D::ClassType::super_setGlyphs, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) ())&D::ClassType::super_update);
        _d.CPGF_MD_TEMPLATE _method("super_setStyle", (void (D::ClassType::*) (QQuickText::TextStyle))&D::ClassType::super_setStyle);
    }
};


template <typename D>
void buildMetaClass_QSGGlyphNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QSGGlyphNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGGlyphNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGImageNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setTargetRect", &D::ClassType::setTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setInnerTargetRect", &D::ClassType::setInnerTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setInnerSourceRect", &D::ClassType::setInnerSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setSubSourceRect", &D::ClassType::setSubSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setTexture", &D::ClassType::setTexture);
    _d.CPGF_MD_TEMPLATE _method("setAntialiasing", &D::ClassType::setAntialiasing);
    _d.CPGF_MD_TEMPLATE _method("setMirror", &D::ClassType::setMirror);
    _d.CPGF_MD_TEMPLATE _method("setMipmapFiltering", &D::ClassType::setMipmapFiltering);
    _d.CPGF_MD_TEMPLATE _method("setFiltering", &D::ClassType::setFiltering);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalWrapMode", &D::ClassType::setHorizontalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("setVerticalWrapMode", &D::ClassType::setVerticalWrapMode);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update);
}


class QSGImageNodeWrapper : public QSGImageNode, public cpgf::GScriptWrapper {
public:
    
    void setTargetRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTargetRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setTargetRect(const QRectF & rect)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setMirror(bool mirror)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setMirror"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, mirror);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setMirror(bool mirror)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setFiltering(QSGTexture::Filtering filtering)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setFiltering"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, filtering);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setFiltering(QSGTexture::Filtering filtering)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setInnerTargetRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setInnerTargetRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setInnerTargetRect(const QRectF & rect)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setHorizontalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setHorizontalWrapMode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, wrapMode);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setHorizontalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        throw std::runtime_error("Abstract method");
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
    
    void setMipmapFiltering(QSGTexture::Filtering filtering)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setMipmapFiltering"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, filtering);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setMipmapFiltering(QSGTexture::Filtering filtering)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setTexture(QSGTexture * texture)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setTexture"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, texture);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setTexture(QSGTexture * texture)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setAntialiasing(bool antialiasing)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setAntialiasing"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, antialiasing);
            return;
        }
        QSGImageNode::setAntialiasing(antialiasing);
    }
    void super_setAntialiasing(bool antialiasing)
    {
        QSGImageNode::setAntialiasing(antialiasing);
    }
    
    void setInnerSourceRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setInnerSourceRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setInnerSourceRect(const QRectF & rect)
    {
        throw std::runtime_error("Abstract method");
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
    
    void setVerticalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setVerticalWrapMode"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, wrapMode);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setVerticalWrapMode(QSGTexture::WrapMode wrapMode)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_update()
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setSubSourceRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSubSourceRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setSubSourceRect(const QRectF & rect)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setTargetRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setMirror", (void (D::ClassType::*) (bool))&D::ClassType::super_setMirror);
        _d.CPGF_MD_TEMPLATE _method("super_setFiltering", (void (D::ClassType::*) (QSGTexture::Filtering))&D::ClassType::super_setFiltering);
        _d.CPGF_MD_TEMPLATE _method("super_setInnerTargetRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setInnerTargetRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setHorizontalWrapMode", (void (D::ClassType::*) (QSGTexture::WrapMode))&D::ClassType::super_setHorizontalWrapMode);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_setMipmapFiltering", (void (D::ClassType::*) (QSGTexture::Filtering))&D::ClassType::super_setMipmapFiltering);
        _d.CPGF_MD_TEMPLATE _method("super_setTexture", (void (D::ClassType::*) (QSGTexture *))&D::ClassType::super_setTexture);
        _d.CPGF_MD_TEMPLATE _method("super_setAntialiasing", (void (D::ClassType::*) (bool))&D::ClassType::super_setAntialiasing);
        _d.CPGF_MD_TEMPLATE _method("super_setInnerSourceRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setInnerSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_setVerticalWrapMode", (void (D::ClassType::*) (QSGTexture::WrapMode))&D::ClassType::super_setVerticalWrapMode);
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) ())&D::ClassType::super_update);
        _d.CPGF_MD_TEMPLATE _method("super_setSubSourceRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setSubSourceRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    }
};


template <typename D>
void buildMetaClass_QSGImageNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGImageNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGImageNode<D>(_d);
}


template <typename D>
void buildMetaClass_QSGRectangleNode(D _d)
{
    (void)_d;
    using namespace cpgf;
    
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


class QSGRectangleNodeWrapper : public QSGRectangleNode, public cpgf::GScriptWrapper {
public:
    
    void setAligned(bool aligned)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setAligned"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, aligned);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setAligned(bool aligned)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setAntialiasing(bool antialiasing)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setAntialiasing"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, antialiasing);
            return;
        }
        QSGRectangleNode::setAntialiasing(antialiasing);
    }
    void super_setAntialiasing(bool antialiasing)
    {
        QSGRectangleNode::setAntialiasing(antialiasing);
    }
    
    void setColor(const QColor & color)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, color);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setColor(const QColor & color)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setRadius(qreal radius)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRadius"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, radius);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setRadius(qreal radius)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setPenColor(const QColor & color)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPenColor"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, color);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setPenColor(const QColor & color)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setRect(const QRectF & rect)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRect"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rect);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setRect(const QRectF & rect)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setPenWidth(qreal width)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPenWidth"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, width);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setPenWidth(qreal width)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void setGradientStops(const QGradientStops & stops)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setGradientStops"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, stops);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_setGradientStops(const QGradientStops & stops)
    {
        throw std::runtime_error("Abstract method");
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
    
    void update()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("update"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_update()
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_setAligned", (void (D::ClassType::*) (bool))&D::ClassType::super_setAligned);
        _d.CPGF_MD_TEMPLATE _method("super_setAntialiasing", (void (D::ClassType::*) (bool))&D::ClassType::super_setAntialiasing);
        _d.CPGF_MD_TEMPLATE _method("super_setColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setRadius", (void (D::ClassType::*) (qreal))&D::ClassType::super_setRadius);
        _d.CPGF_MD_TEMPLATE _method("super_setPenColor", (void (D::ClassType::*) (const QColor &))&D::ClassType::super_setPenColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setRect", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_setRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_setPenWidth", (void (D::ClassType::*) (qreal))&D::ClassType::super_setPenWidth);
        _d.CPGF_MD_TEMPLATE _method("super_setGradientStops", (void (D::ClassType::*) (const QGradientStops &))&D::ClassType::super_setGradientStops);
        _d.CPGF_MD_TEMPLATE _method("super_preprocess", (void (D::ClassType::*) ())&D::ClassType::super_preprocess);
        _d.CPGF_MD_TEMPLATE _method("super_isSubtreeBlocked", (bool (D::ClassType::*) () const)&D::ClassType::super_isSubtreeBlocked);
        _d.CPGF_MD_TEMPLATE _method("super_update", (void (D::ClassType::*) ())&D::ClassType::super_update);
    }
};


template <typename D>
void buildMetaClass_QSGRectangleNodeWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QSGRectangleNodeWrapper::cpgf__register(_d);
    
    buildMetaClass_QSGRectangleNode<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
