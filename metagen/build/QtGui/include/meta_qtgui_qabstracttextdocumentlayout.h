// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QABSTRACTTEXTDOCUMENTLAYOUT_H
#define CPGF_META_QTGUI_QABSTRACTTEXTDOCUMENTLAYOUT_H


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
void buildMetaClass_QAbstractTextDocumentLayout(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("draw", &D::ClassType::draw);
    _d.CPGF_MD_TEMPLATE _method("hitTest", &D::ClassType::hitTest, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("anchorAt", &D::ClassType::anchorAt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pageCount", &D::ClassType::pageCount);
    _d.CPGF_MD_TEMPLATE _method("documentSize", &D::ClassType::documentSize);
    _d.CPGF_MD_TEMPLATE _method("frameBoundingRect", &D::ClassType::frameBoundingRect);
    _d.CPGF_MD_TEMPLATE _method("blockBoundingRect", &D::ClassType::blockBoundingRect);
    _d.CPGF_MD_TEMPLATE _method("setPaintDevice", &D::ClassType::setPaintDevice);
    _d.CPGF_MD_TEMPLATE _method("paintDevice", &D::ClassType::paintDevice);
    _d.CPGF_MD_TEMPLATE _method("document", &D::ClassType::document);
    _d.CPGF_MD_TEMPLATE _method("registerHandler", &D::ClassType::registerHandler);
    _d.CPGF_MD_TEMPLATE _method("unregisterHandler", &D::ClassType::unregisterHandler)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("handlerForObject", &D::ClassType::handlerForObject);
    _d.CPGF_MD_TEMPLATE _method("update", &D::ClassType::update, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QRectF(0., 0., 1000000000., 1000000000.)))
    ;
    _d.CPGF_MD_TEMPLATE _method("updateBlock", &D::ClassType::updateBlock);
    _d.CPGF_MD_TEMPLATE _method("documentSizeChanged", &D::ClassType::documentSizeChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("pageCountChanged", &D::ClassType::pageCountChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    {
        GDefineMetaClass<QAbstractTextDocumentLayout::PaintContext> _nd = GDefineMetaClass<QAbstractTextDocumentLayout::PaintContext>::declare("PaintContext");
        _nd.CPGF_MD_TEMPLATE _constructor<void * ()>();
        _nd.CPGF_MD_TEMPLATE _field("cursorPosition", &QAbstractTextDocumentLayout::PaintContext::cursorPosition);
        _nd.CPGF_MD_TEMPLATE _field("palette", &QAbstractTextDocumentLayout::PaintContext::palette);
        _nd.CPGF_MD_TEMPLATE _field("clip", &QAbstractTextDocumentLayout::PaintContext::clip);
        _nd.CPGF_MD_TEMPLATE _field("selections", &QAbstractTextDocumentLayout::PaintContext::selections);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
    {
        GDefineMetaClass<QAbstractTextDocumentLayout::Selection> _nd = GDefineMetaClass<QAbstractTextDocumentLayout::Selection>::declare("Selection");
        _nd.CPGF_MD_TEMPLATE _field("cursor", &QAbstractTextDocumentLayout::Selection::cursor);
        _nd.CPGF_MD_TEMPLATE _field("format", &QAbstractTextDocumentLayout::Selection::format);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


class QAbstractTextDocumentLayoutWrapper : public QAbstractTextDocumentLayout, public cpgf::GScriptWrapper {
public:
    
    QAbstractTextDocumentLayoutWrapper(QTextDocument * doc)
        : QAbstractTextDocumentLayout(doc) {}
    
    void draw(QPainter * painter, const QAbstractTextDocumentLayout::PaintContext& context)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("draw"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, context);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_draw(QPainter * painter, const QAbstractTextDocumentLayout::PaintContext& context)
    {
        throw std::runtime_error("Abstract method");
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("positionInlineObject"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, item, posInDocument, format);
            return;
        }
        QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
    }
    void super_positionInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format)
    {
        QAbstractTextDocumentLayout::positionInlineObject(item, posInDocument, format);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
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
    
    void documentChanged(int from, int charsRemoved, int charsAdded)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("documentChanged"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, from, charsRemoved, charsAdded);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_documentChanged(int from, int charsRemoved, int charsAdded)
    {
        throw std::runtime_error("Abstract method");
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
    
    int pageCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("pageCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_pageCount() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QSizeF documentSize() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("documentSize"));
        if(func)
        {
            return cpgf::fromVariant<QSizeF >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSizeF super_documentSize() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    QRectF frameBoundingRect(QTextFrame * frame) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("frameBoundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this, frame).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QRectF super_frameBoundingRect(QTextFrame * frame) const
    {
        throw std::runtime_error("Abstract method");
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
    
    QTextCharFormat format(int pos)
    {
        return QAbstractTextDocumentLayout::format(pos);
    }
    
    QRectF blockBoundingRect(const QTextBlock & block) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("blockBoundingRect"));
        if(func)
        {
            return cpgf::fromVariant<QRectF >(cpgf::invokeScriptFunctionOnObject(func.get(), this, block).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QRectF super_blockBoundingRect(const QTextBlock & block) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void drawInlineObject(QPainter * painter, const QRectF & rect, QTextInlineObject object, int posInDocument, const QTextFormat & format)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawInlineObject"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, rect, object, posInDocument, format);
            return;
        }
        QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
    }
    void super_drawInlineObject(QPainter * painter, const QRectF & rect, QTextInlineObject object, int posInDocument, const QTextFormat & format)
    {
        QAbstractTextDocumentLayout::drawInlineObject(painter, rect, object, posInDocument, format);
    }
    
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
    
    int formatIndex(int pos)
    {
        return QAbstractTextDocumentLayout::formatIndex(pos);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAbstractTextDocumentLayout::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QAbstractTextDocumentLayout::qt_metacast(__arg0);
    }
    
    int hitTest(const QPointF & point, Qt::HitTestAccuracy accuracy) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hitTest"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, point, accuracy).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    int super_hitTest(const QPointF & point, Qt::HitTestAccuracy accuracy) const
    {
        throw std::runtime_error("Abstract method");
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
    
    void resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeInlineObject"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, item, posInDocument, format);
            return;
        }
        QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
    }
    void super_resizeInlineObject(QTextInlineObject item, int posInDocument, const QTextFormat & format)
    {
        QAbstractTextDocumentLayout::resizeInlineObject(item, posInDocument, format);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAbstractTextDocumentLayout::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QAbstractTextDocumentLayout::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QAbstractTextDocumentLayout::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QAbstractTextDocumentLayout::qt_metacall(__arg0, __arg1, __arg2);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("positionInlineObject", (void (D::ClassType::*) (QTextInlineObject, int, const QTextFormat &))&D::ClassType::positionInlineObject, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("documentChanged", (void (D::ClassType::*) (int, int, int))&D::ClassType::documentChanged);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("format", (QTextCharFormat (D::ClassType::*) (int))&D::ClassType::format);
        _d.CPGF_MD_TEMPLATE _method("drawInlineObject", (void (D::ClassType::*) (QPainter *, const QRectF &, QTextInlineObject, int, const QTextFormat &))&D::ClassType::drawInlineObject, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<4> >());
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("formatIndex", (int (D::ClassType::*) (int))&D::ClassType::formatIndex);
        _d.CPGF_MD_TEMPLATE _method("resizeInlineObject", (void (D::ClassType::*) (QTextInlineObject, int, const QTextFormat &))&D::ClassType::resizeInlineObject, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_draw", (void (D::ClassType::*) (QPainter *, const QAbstractTextDocumentLayout::PaintContext&))&D::ClassType::super_draw);
        _d.CPGF_MD_TEMPLATE _method("super_positionInlineObject", (void (D::ClassType::*) (QTextInlineObject, int, const QTextFormat &))&D::ClassType::super_positionInlineObject, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_documentChanged", (void (D::ClassType::*) (int, int, int))&D::ClassType::super_documentChanged);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_pageCount", (int (D::ClassType::*) () const)&D::ClassType::super_pageCount);
        _d.CPGF_MD_TEMPLATE _method("super_documentSize", (QSizeF (D::ClassType::*) () const)&D::ClassType::super_documentSize);
        _d.CPGF_MD_TEMPLATE _method("super_frameBoundingRect", (QRectF (D::ClassType::*) (QTextFrame *) const)&D::ClassType::super_frameBoundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_blockBoundingRect", (QRectF (D::ClassType::*) (const QTextBlock &) const)&D::ClassType::super_blockBoundingRect);
        _d.CPGF_MD_TEMPLATE _method("super_drawInlineObject", (void (D::ClassType::*) (QPainter *, const QRectF &, QTextInlineObject, int, const QTextFormat &))&D::ClassType::super_drawInlineObject, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<4> >());
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_hitTest", (int (D::ClassType::*) (const QPointF &, Qt::HitTestAccuracy) const)&D::ClassType::super_hitTest, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_resizeInlineObject", (void (D::ClassType::*) (QTextInlineObject, int, const QTextFormat &))&D::ClassType::super_resizeInlineObject, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    }
};


template <typename D>
void buildMetaClass_QAbstractTextDocumentLayoutWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTextDocument *)>();
    
    QAbstractTextDocumentLayoutWrapper::cpgf__register(_d);
    
    buildMetaClass_QAbstractTextDocumentLayout<D>(_d);
}


template <typename D>
void buildMetaClass_QTextObjectInterface(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("intrinsicSize", &D::ClassType::intrinsicSize, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("drawObject", &D::ClassType::drawObject, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<4> >());
}


class QTextObjectInterfaceWrapper : public QTextObjectInterface, public cpgf::GScriptWrapper {
public:
    
    QSizeF intrinsicSize(QTextDocument * doc, int posInDocument, const QTextFormat & format)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("intrinsicSize"));
        if(func)
        {
            return cpgf::fromVariant<QSizeF >(cpgf::invokeScriptFunctionOnObject(func.get(), this, doc, posInDocument, format).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    QSizeF super_intrinsicSize(QTextDocument * doc, int posInDocument, const QTextFormat & format)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void drawObject(QPainter * painter, const QRectF & rect, QTextDocument * doc, int posInDocument, const QTextFormat & format)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("drawObject"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter, rect, doc, posInDocument, format);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_drawObject(QPainter * painter, const QRectF & rect, QTextDocument * doc, int posInDocument, const QTextFormat & format)
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_intrinsicSize", (QSizeF (D::ClassType::*) (QTextDocument *, int, const QTextFormat &))&D::ClassType::super_intrinsicSize, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_drawObject", (void (D::ClassType::*) (QPainter *, const QRectF &, QTextDocument *, int, const QTextFormat &))&D::ClassType::super_drawObject, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<4> >());
    }
};


template <typename D>
void buildMetaClass_QTextObjectInterfaceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QTextObjectInterfaceWrapper::cpgf__register(_d);
    
    buildMetaClass_QTextObjectInterface<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
