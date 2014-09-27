// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QPAINTENGINE_H
#define CPGF_META_QTGUI_QPAINTENGINE_H


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
void buildMetaClass_Global_qpaintengine(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QPaintEngine(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("isActive", &D::ClassType::isActive);
    _d.CPGF_MD_TEMPLATE _method("setActive", &D::ClassType::setActive);
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("updateState", &D::ClassType::updateState);
    _d.CPGF_MD_TEMPLATE _method("drawRects", (void (D::ClassType::*) (const QRect *, int))&D::ClassType::drawRects);
    _d.CPGF_MD_TEMPLATE _method("drawRects", (void (D::ClassType::*) (const QRectF *, int))&D::ClassType::drawRects);
    _d.CPGF_MD_TEMPLATE _method("drawLines", (void (D::ClassType::*) (const QLine *, int))&D::ClassType::drawLines);
    _d.CPGF_MD_TEMPLATE _method("drawLines", (void (D::ClassType::*) (const QLineF *, int))&D::ClassType::drawLines);
    _d.CPGF_MD_TEMPLATE _method("drawEllipse", (void (D::ClassType::*) (const QRectF &))&D::ClassType::drawEllipse, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawEllipse", (void (D::ClassType::*) (const QRect &))&D::ClassType::drawEllipse);
    _d.CPGF_MD_TEMPLATE _method("drawPath", &D::ClassType::drawPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawPoints", (void (D::ClassType::*) (const QPointF *, int))&D::ClassType::drawPoints);
    _d.CPGF_MD_TEMPLATE _method("drawPoints", (void (D::ClassType::*) (const QPoint *, int))&D::ClassType::drawPoints);
    _d.CPGF_MD_TEMPLATE _method("drawPolygon", (void (D::ClassType::*) (const QPointF *, int, QPaintEngine::PolygonDrawMode))&D::ClassType::drawPolygon);
    _d.CPGF_MD_TEMPLATE _method("drawPolygon", (void (D::ClassType::*) (const QPoint *, int, QPaintEngine::PolygonDrawMode))&D::ClassType::drawPolygon);
    _d.CPGF_MD_TEMPLATE _method("drawPixmap", &D::ClassType::drawPixmap, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("drawTextItem", &D::ClassType::drawTextItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("drawTiledPixmap", &D::ClassType::drawTiledPixmap, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("drawImage", &D::ClassType::drawImage, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(Qt::AutoColor))
    ;
    _d.CPGF_MD_TEMPLATE _method("setPaintDevice", &D::ClassType::setPaintDevice);
    _d.CPGF_MD_TEMPLATE _method("paintDevice", &D::ClassType::paintDevice);
    _d.CPGF_MD_TEMPLATE _method("setSystemClip", &D::ClassType::setSystemClip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("systemClip", &D::ClassType::systemClip);
    _d.CPGF_MD_TEMPLATE _method("setSystemRect", &D::ClassType::setSystemRect);
    _d.CPGF_MD_TEMPLATE _method("systemRect", &D::ClassType::systemRect);
    _d.CPGF_MD_TEMPLATE _method("coordinateOffset", &D::ClassType::coordinateOffset);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("fix_neg_rect", &D::ClassType::fix_neg_rect);
    _d.CPGF_MD_TEMPLATE _method("testDirty", &D::ClassType::testDirty);
    _d.CPGF_MD_TEMPLATE _method("setDirty", &D::ClassType::setDirty);
    _d.CPGF_MD_TEMPLATE _method("clearDirty", &D::ClassType::clearDirty);
    _d.CPGF_MD_TEMPLATE _method("hasFeature", &D::ClassType::hasFeature);
    _d.CPGF_MD_TEMPLATE _method("painter", &D::ClassType::painter);
    _d.CPGF_MD_TEMPLATE _method("syncState", &D::ClassType::syncState);
    _d.CPGF_MD_TEMPLATE _method("isExtended", &D::ClassType::isExtended);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PaintEngineFeature>("PaintEngineFeature")
        ._element("PrimitiveTransform", D::ClassType::PrimitiveTransform)
        ._element("PatternTransform", D::ClassType::PatternTransform)
        ._element("PixmapTransform", D::ClassType::PixmapTransform)
        ._element("PatternBrush", D::ClassType::PatternBrush)
        ._element("LinearGradientFill", D::ClassType::LinearGradientFill)
        ._element("RadialGradientFill", D::ClassType::RadialGradientFill)
        ._element("ConicalGradientFill", D::ClassType::ConicalGradientFill)
        ._element("AlphaBlend", D::ClassType::AlphaBlend)
        ._element("PorterDuff", D::ClassType::PorterDuff)
        ._element("PainterPaths", D::ClassType::PainterPaths)
        ._element("Antialiasing", D::ClassType::Antialiasing)
        ._element("BrushStroke", D::ClassType::BrushStroke)
        ._element("ConstantOpacity", D::ClassType::ConstantOpacity)
        ._element("MaskedBrush", D::ClassType::MaskedBrush)
        ._element("PerspectiveTransform", D::ClassType::PerspectiveTransform)
        ._element("BlendModes", D::ClassType::BlendModes)
        ._element("ObjectBoundingModeGradients", D::ClassType::ObjectBoundingModeGradients)
        ._element("RasterOpModes", D::ClassType::RasterOpModes)
        ._element("PaintOutsidePaintEvent", D::ClassType::PaintOutsidePaintEvent)
        ._element("AllFeatures", D::ClassType::AllFeatures)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::DirtyFlag>("DirtyFlag")
        ._element("DirtyPen", D::ClassType::DirtyPen)
        ._element("DirtyBrush", D::ClassType::DirtyBrush)
        ._element("DirtyBrushOrigin", D::ClassType::DirtyBrushOrigin)
        ._element("DirtyFont", D::ClassType::DirtyFont)
        ._element("DirtyBackground", D::ClassType::DirtyBackground)
        ._element("DirtyBackgroundMode", D::ClassType::DirtyBackgroundMode)
        ._element("DirtyTransform", D::ClassType::DirtyTransform)
        ._element("DirtyClipRegion", D::ClassType::DirtyClipRegion)
        ._element("DirtyClipPath", D::ClassType::DirtyClipPath)
        ._element("DirtyHints", D::ClassType::DirtyHints)
        ._element("DirtyCompositionMode", D::ClassType::DirtyCompositionMode)
        ._element("DirtyClipEnabled", D::ClassType::DirtyClipEnabled)
        ._element("DirtyOpacity", D::ClassType::DirtyOpacity)
        ._element("AllDirty", D::ClassType::AllDirty)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::PolygonDrawMode>("PolygonDrawMode")
        ._element("OddEvenMode", D::ClassType::OddEvenMode)
        ._element("WindingMode", D::ClassType::WindingMode)
        ._element("ConvexMode", D::ClassType::ConvexMode)
        ._element("PolylineMode", D::ClassType::PolylineMode)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Type>("Type")
        ._element("X11", D::ClassType::X11)
        ._element("Windows", D::ClassType::Windows)
        ._element("QuickDraw", D::ClassType::QuickDraw)
        ._element("CoreGraphics", D::ClassType::CoreGraphics)
        ._element("MacPrinter", D::ClassType::MacPrinter)
        ._element("QWindowSystem", D::ClassType::QWindowSystem)
        ._element("PostScript", D::ClassType::PostScript)
        ._element("OpenGL", D::ClassType::OpenGL)
        ._element("Picture", D::ClassType::Picture)
        ._element("SVG", D::ClassType::SVG)
        ._element("Raster", D::ClassType::Raster)
        ._element("Direct3D", D::ClassType::Direct3D)
        ._element("Pdf", D::ClassType::Pdf)
        ._element("OpenVG", D::ClassType::OpenVG)
        ._element("OpenGL2", D::ClassType::OpenGL2)
        ._element("PaintBuffer", D::ClassType::PaintBuffer)
        ._element("Blitter", D::ClassType::Blitter)
        ._element("Direct2D", D::ClassType::Direct2D)
        ._element("User", D::ClassType::User)
        ._element("MaxUser", D::ClassType::MaxUser)
    ;
    {
        GDefineMetaClass<QFlags<typename QPaintEngine::PaintEngineFeature > > _t_d = GDefineMetaClass<QFlags<typename QPaintEngine::PaintEngineFeature > >::lazyDeclare("PaintEngineFeatures", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QPaintEngine::PaintEngineFeature > >, typename QPaintEngine::PaintEngineFeature >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QFlags<typename QPaintEngine::DirtyFlag > > _t_d = GDefineMetaClass<QFlags<typename QPaintEngine::DirtyFlag > >::lazyDeclare("DirtyFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QPaintEngine::DirtyFlag > >, typename QPaintEngine::DirtyFlag >);
        _d._class(_t_d);
    }
}


class QPaintEngineWrapper : public QPaintEngine, public cpgf::GScriptWrapper {
public:
    
    QPaintEngineWrapper(QPaintEngine::PaintEngineFeatures features = 0)
        : QPaintEngine(features) {}
    
    void drawTextItem(const QPointF & p, const QTextItem & textItem)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawTextItem"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, p, textItem);
            return;
        }
        QPaintEngine::drawTextItem(p, textItem);
    }
    void super_drawTextItem(const QPointF & p, const QTextItem & textItem)
    {
        QPaintEngine::drawTextItem(p, textItem);
    }
    
    void drawTiledPixmap(const QRectF & r, const QPixmap & pixmap, const QPointF & s)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawTiledPixmap"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, r, pixmap, s);
            return;
        }
        QPaintEngine::drawTiledPixmap(r, pixmap, s);
    }
    void super_drawTiledPixmap(const QRectF & r, const QPixmap & pixmap, const QPointF & s)
    {
        QPaintEngine::drawTiledPixmap(r, pixmap, s);
    }
    
    bool end()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("end"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_end()
    {
        throw std::runtime_error("Abstract method");
    }
    
    void drawPolygon(const QPointF * points, int pointCount, QPaintEngine::PolygonDrawMode mode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawPolygon"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, points, pointCount, mode);
            return;
        }
        QPaintEngine::drawPolygon(points, pointCount, mode);
    }
    void super_drawPolygon(const QPointF * points, int pointCount, QPaintEngine::PolygonDrawMode mode)
    {
        QPaintEngine::drawPolygon(points, pointCount, mode);
    }
    
    void drawPath(const QPainterPath & path)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawPath"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, path);
            return;
        }
        QPaintEngine::drawPath(path);
    }
    void super_drawPath(const QPainterPath & path)
    {
        QPaintEngine::drawPath(path);
    }
    
    void drawLines(const QLineF * lines, int lineCount)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawLines"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, lines, lineCount);
            return;
        }
        QPaintEngine::drawLines(lines, lineCount);
    }
    void super_drawLines(const QLineF * lines, int lineCount)
    {
        QPaintEngine::drawLines(lines, lineCount);
    }
    
    void drawEllipse(const QRectF & r)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawEllipse"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, r);
            return;
        }
        QPaintEngine::drawEllipse(r);
    }
    void super_drawEllipse(const QRectF & r)
    {
        QPaintEngine::drawEllipse(r);
    }
    
    void drawImage(const QRectF & r, const QImage & pm, const QRectF & sr, Qt::ImageConversionFlags flags = Qt::AutoColor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawImage"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, r, pm, sr, flags);
            return;
        }
        QPaintEngine::drawImage(r, pm, sr, flags);
    }
    void super_drawImage(const QRectF & r, const QImage & pm, const QRectF & sr, Qt::ImageConversionFlags flags = Qt::AutoColor)
    {
        QPaintEngine::drawImage(r, pm, sr, flags);
    }
    
    bool begin(QPaintDevice * pdev)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("begin"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, pdev).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_begin(QPaintDevice * pdev)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void drawPolygon(const QPoint * points, int pointCount, QPaintEngine::PolygonDrawMode mode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawPolygon"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, points, pointCount, mode);
            return;
        }
        QPaintEngine::drawPolygon(points, pointCount, mode);
    }
    void super_drawPolygon(const QPoint * points, int pointCount, QPaintEngine::PolygonDrawMode mode)
    {
        QPaintEngine::drawPolygon(points, pointCount, mode);
    }
    
    void drawPoints(const QPointF * points, int pointCount)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawPoints"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, points, pointCount);
            return;
        }
        QPaintEngine::drawPoints(points, pointCount);
    }
    void super_drawPoints(const QPointF * points, int pointCount)
    {
        QPaintEngine::drawPoints(points, pointCount);
    }
    
    void updateState(const QPaintEngineState & state)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateState"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, state);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_updateState(const QPaintEngineState & state)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void drawRects(const QRectF * rects, int rectCount)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawRects"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rects, rectCount);
            return;
        }
        QPaintEngine::drawRects(rects, rectCount);
    }
    void super_drawRects(const QRectF * rects, int rectCount)
    {
        QPaintEngine::drawRects(rects, rectCount);
    }
    
    QPoint coordinateOffset() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("coordinateOffset"));
        if(func)
        {
            return cpgf::fromVariant<QPoint >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QPaintEngine::coordinateOffset();
    }
    QPoint super_coordinateOffset() const
    {
        return QPaintEngine::coordinateOffset();
    }
    
    QPaintEngine::Type type() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("type"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine::Type >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QPaintEngine::Type super_type() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void drawEllipse(const QRect & r)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawEllipse"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, r);
            return;
        }
        QPaintEngine::drawEllipse(r);
    }
    void super_drawEllipse(const QRect & r)
    {
        QPaintEngine::drawEllipse(r);
    }
    
    void drawPoints(const QPoint * points, int pointCount)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawPoints"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, points, pointCount);
            return;
        }
        QPaintEngine::drawPoints(points, pointCount);
    }
    void super_drawPoints(const QPoint * points, int pointCount)
    {
        QPaintEngine::drawPoints(points, pointCount);
    }
    
    void drawLines(const QLine * lines, int lineCount)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawLines"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, lines, lineCount);
            return;
        }
        QPaintEngine::drawLines(lines, lineCount);
    }
    void super_drawLines(const QLine * lines, int lineCount)
    {
        QPaintEngine::drawLines(lines, lineCount);
    }
    
    void drawRects(const QRect * rects, int rectCount)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawRects"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, rects, rectCount);
            return;
        }
        QPaintEngine::drawRects(rects, rectCount);
    }
    void super_drawRects(const QRect * rects, int rectCount)
    {
        QPaintEngine::drawRects(rects, rectCount);
    }
    
    void drawPixmap(const QRectF & r, const QPixmap & pm, const QRectF & sr)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawPixmap"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, r, pm, sr);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_drawPixmap(const QRectF & r, const QPixmap & pm, const QRectF & sr)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_drawTextItem", (void (D::ClassType::*) (const QPointF &, const QTextItem &))&D::ClassType::super_drawTextItem, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_drawTiledPixmap", (void (D::ClassType::*) (const QRectF &, const QPixmap &, const QPointF &))&D::ClassType::super_drawTiledPixmap, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_end", (bool (D::ClassType::*) ())&D::ClassType::super_end);
        _d.CPGF_MD_TEMPLATE _method("super_drawPolygon", (void (D::ClassType::*) (const QPointF *, int, QPaintEngine::PolygonDrawMode))&D::ClassType::super_drawPolygon);
        _d.CPGF_MD_TEMPLATE _method("super_drawPath", (void (D::ClassType::*) (const QPainterPath &))&D::ClassType::super_drawPath, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_drawLines", (void (D::ClassType::*) (const QLineF *, int))&D::ClassType::super_drawLines);
        _d.CPGF_MD_TEMPLATE _method("super_drawEllipse", (void (D::ClassType::*) (const QRectF &))&D::ClassType::super_drawEllipse, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_drawImage", (void (D::ClassType::*) (const QRectF &, const QImage &, const QRectF &, Qt::ImageConversionFlags))&D::ClassType::super_drawImage, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >())
            ._default(copyVariantFromCopyable(Qt::AutoColor))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_begin", (bool (D::ClassType::*) (QPaintDevice *))&D::ClassType::super_begin);
        _d.CPGF_MD_TEMPLATE _method("super_drawPolygon", (void (D::ClassType::*) (const QPoint *, int, QPaintEngine::PolygonDrawMode))&D::ClassType::super_drawPolygon);
        _d.CPGF_MD_TEMPLATE _method("super_drawPoints", (void (D::ClassType::*) (const QPointF *, int))&D::ClassType::super_drawPoints);
        _d.CPGF_MD_TEMPLATE _method("super_updateState", (void (D::ClassType::*) (const QPaintEngineState &))&D::ClassType::super_updateState);
        _d.CPGF_MD_TEMPLATE _method("super_drawRects", (void (D::ClassType::*) (const QRectF *, int))&D::ClassType::super_drawRects);
        _d.CPGF_MD_TEMPLATE _method("super_coordinateOffset", (QPoint (D::ClassType::*) () const)&D::ClassType::super_coordinateOffset);
        _d.CPGF_MD_TEMPLATE _method("super_type", (QPaintEngine::Type (D::ClassType::*) () const)&D::ClassType::super_type);
        _d.CPGF_MD_TEMPLATE _method("super_drawEllipse", (void (D::ClassType::*) (const QRect &))&D::ClassType::super_drawEllipse);
        _d.CPGF_MD_TEMPLATE _method("super_drawPoints", (void (D::ClassType::*) (const QPoint *, int))&D::ClassType::super_drawPoints);
        _d.CPGF_MD_TEMPLATE _method("super_drawLines", (void (D::ClassType::*) (const QLine *, int))&D::ClassType::super_drawLines);
        _d.CPGF_MD_TEMPLATE _method("super_drawRects", (void (D::ClassType::*) (const QRect *, int))&D::ClassType::super_drawRects);
        _d.CPGF_MD_TEMPLATE _method("super_drawPixmap", (void (D::ClassType::*) (const QRectF &, const QPixmap &, const QRectF &))&D::ClassType::super_drawPixmap, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<2> >());
    }
};


template <typename D>
void buildMetaClass_QPaintEngineWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QPaintEngine::PaintEngineFeatures)>()
        ._default(copyVariantFromCopyable(0))
    ;
    
    QPaintEngineWrapper::cpgf__register(_d);
    
    buildMetaClass_QPaintEngine<D>(_d);
}


template <typename D>
void buildMetaClass_QPaintEngineState(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("pen", &D::ClassType::pen);
    _d.CPGF_MD_TEMPLATE _method("brush", &D::ClassType::brush);
    _d.CPGF_MD_TEMPLATE _method("brushOrigin", &D::ClassType::brushOrigin);
    _d.CPGF_MD_TEMPLATE _method("backgroundBrush", &D::ClassType::backgroundBrush);
    _d.CPGF_MD_TEMPLATE _method("backgroundMode", &D::ClassType::backgroundMode);
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("matrix", &D::ClassType::matrix);
    _d.CPGF_MD_TEMPLATE _method("transform", &D::ClassType::transform);
    _d.CPGF_MD_TEMPLATE _method("clipOperation", &D::ClassType::clipOperation);
    _d.CPGF_MD_TEMPLATE _method("clipRegion", &D::ClassType::clipRegion);
    _d.CPGF_MD_TEMPLATE _method("clipPath", &D::ClassType::clipPath);
    _d.CPGF_MD_TEMPLATE _method("isClipEnabled", &D::ClassType::isClipEnabled);
    _d.CPGF_MD_TEMPLATE _method("renderHints", &D::ClassType::renderHints);
    _d.CPGF_MD_TEMPLATE _method("compositionMode", &D::ClassType::compositionMode);
    _d.CPGF_MD_TEMPLATE _method("opacity", &D::ClassType::opacity);
    _d.CPGF_MD_TEMPLATE _method("painter", &D::ClassType::painter);
    _d.CPGF_MD_TEMPLATE _method("brushNeedsResolving", &D::ClassType::brushNeedsResolving);
    _d.CPGF_MD_TEMPLATE _method("penNeedsResolving", &D::ClassType::penNeedsResolving);
}


template <typename D>
void buildMetaClass_QTextItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("descent", &D::ClassType::descent);
    _d.CPGF_MD_TEMPLATE _method("ascent", &D::ClassType::ascent);
    _d.CPGF_MD_TEMPLATE _method("width", &D::ClassType::width);
    _d.CPGF_MD_TEMPLATE _method("renderFlags", &D::ClassType::renderFlags);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::RenderFlag>("RenderFlag")
        ._element("RightToLeft", D::ClassType::RightToLeft)
        ._element("Overline", D::ClassType::Overline)
        ._element("Underline", D::ClassType::Underline)
        ._element("StrikeOut", D::ClassType::StrikeOut)
        ._element("Dummy", D::ClassType::Dummy)
    ;
    {
        GDefineMetaClass<QFlags<typename QTextItem::RenderFlag > > _t_d = GDefineMetaClass<QFlags<typename QTextItem::RenderFlag > >::lazyDeclare("RenderFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QTextItem::RenderFlag > >, typename QTextItem::RenderFlag >);
        _d._class(_t_d);
    }
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
