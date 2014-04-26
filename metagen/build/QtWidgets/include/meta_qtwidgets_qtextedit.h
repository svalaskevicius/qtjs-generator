// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QTEXTEDIT_H
#define CPGF_META_QTWIDGETS_QTEXTEDIT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_QTextEdit(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QWidget *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setDocument", &D::ClassType::setDocument);
    _d.CPGF_MD_TEMPLATE _method("document", &D::ClassType::document);
    _d.CPGF_MD_TEMPLATE _method("setPlaceholderText", &D::ClassType::setPlaceholderText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("placeholderText", &D::ClassType::placeholderText);
    _d.CPGF_MD_TEMPLATE _method("setTextCursor", &D::ClassType::setTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textCursor", &D::ClassType::textCursor);
    _d.CPGF_MD_TEMPLATE _method("isReadOnly", &D::ClassType::isReadOnly);
    _d.CPGF_MD_TEMPLATE _method("setReadOnly", &D::ClassType::setReadOnly);
    _d.CPGF_MD_TEMPLATE _method("setTextInteractionFlags", &D::ClassType::setTextInteractionFlags);
    _d.CPGF_MD_TEMPLATE _method("textInteractionFlags", &D::ClassType::textInteractionFlags);
    _d.CPGF_MD_TEMPLATE _method("fontPointSize", &D::ClassType::fontPointSize);
    _d.CPGF_MD_TEMPLATE _method("fontFamily", &D::ClassType::fontFamily);
    _d.CPGF_MD_TEMPLATE _method("fontWeight", &D::ClassType::fontWeight);
    _d.CPGF_MD_TEMPLATE _method("fontUnderline", &D::ClassType::fontUnderline);
    _d.CPGF_MD_TEMPLATE _method("fontItalic", &D::ClassType::fontItalic);
    _d.CPGF_MD_TEMPLATE _method("textColor", &D::ClassType::textColor);
    _d.CPGF_MD_TEMPLATE _method("textBackgroundColor", &D::ClassType::textBackgroundColor);
    _d.CPGF_MD_TEMPLATE _method("currentFont", &D::ClassType::currentFont);
    _d.CPGF_MD_TEMPLATE _method("alignment", &D::ClassType::alignment);
    _d.CPGF_MD_TEMPLATE _method("mergeCurrentCharFormat", &D::ClassType::mergeCurrentCharFormat);
    _d.CPGF_MD_TEMPLATE _method("setCurrentCharFormat", &D::ClassType::setCurrentCharFormat);
    _d.CPGF_MD_TEMPLATE _method("currentCharFormat", &D::ClassType::currentCharFormat);
    _d.CPGF_MD_TEMPLATE _method("autoFormatting", &D::ClassType::autoFormatting);
    _d.CPGF_MD_TEMPLATE _method("setAutoFormatting", &D::ClassType::setAutoFormatting);
    _d.CPGF_MD_TEMPLATE _method("tabChangesFocus", &D::ClassType::tabChangesFocus);
    _d.CPGF_MD_TEMPLATE _method("setTabChangesFocus", &D::ClassType::setTabChangesFocus);
    _d.CPGF_MD_TEMPLATE _method("setDocumentTitle", &D::ClassType::setDocumentTitle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("documentTitle", &D::ClassType::documentTitle);
    _d.CPGF_MD_TEMPLATE _method("isUndoRedoEnabled", &D::ClassType::isUndoRedoEnabled);
    _d.CPGF_MD_TEMPLATE _method("setUndoRedoEnabled", &D::ClassType::setUndoRedoEnabled);
    _d.CPGF_MD_TEMPLATE _method("lineWrapMode", &D::ClassType::lineWrapMode);
    _d.CPGF_MD_TEMPLATE _method("setLineWrapMode", &D::ClassType::setLineWrapMode);
    _d.CPGF_MD_TEMPLATE _method("lineWrapColumnOrWidth", &D::ClassType::lineWrapColumnOrWidth);
    _d.CPGF_MD_TEMPLATE _method("setLineWrapColumnOrWidth", &D::ClassType::setLineWrapColumnOrWidth);
    _d.CPGF_MD_TEMPLATE _method("wordWrapMode", &D::ClassType::wordWrapMode);
    _d.CPGF_MD_TEMPLATE _method("setWordWrapMode", &D::ClassType::setWordWrapMode);
    _d.CPGF_MD_TEMPLATE _method("find", &D::ClassType::find, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("toPlainText", &D::ClassType::toPlainText);
    _d.CPGF_MD_TEMPLATE _method("toHtml", &D::ClassType::toHtml);
    _d.CPGF_MD_TEMPLATE _method("ensureCursorVisible", &D::ClassType::ensureCursorVisible);
    _d.CPGF_MD_TEMPLATE _method("loadResource", &D::ClassType::loadResource, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("createStandardContextMenu", (QMenu * (D::ClassType::*) ())&D::ClassType::createStandardContextMenu);
    _d.CPGF_MD_TEMPLATE _method("createStandardContextMenu", (QMenu * (D::ClassType::*) (const QPoint &))&D::ClassType::createStandardContextMenu);
    _d.CPGF_MD_TEMPLATE _method("cursorForPosition", &D::ClassType::cursorForPosition);
    _d.CPGF_MD_TEMPLATE _method("cursorRect", (QRect (D::ClassType::*) (const QTextCursor &) const)&D::ClassType::cursorRect, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("cursorRect", (QRect (D::ClassType::*) () const)&D::ClassType::cursorRect);
    _d.CPGF_MD_TEMPLATE _method("anchorAt", &D::ClassType::anchorAt);
    _d.CPGF_MD_TEMPLATE _method("overwriteMode", &D::ClassType::overwriteMode);
    _d.CPGF_MD_TEMPLATE _method("setOverwriteMode", &D::ClassType::setOverwriteMode);
    _d.CPGF_MD_TEMPLATE _method("tabStopWidth", &D::ClassType::tabStopWidth);
    _d.CPGF_MD_TEMPLATE _method("setTabStopWidth", &D::ClassType::setTabStopWidth);
    _d.CPGF_MD_TEMPLATE _method("cursorWidth", &D::ClassType::cursorWidth);
    _d.CPGF_MD_TEMPLATE _method("setCursorWidth", &D::ClassType::setCursorWidth);
    _d.CPGF_MD_TEMPLATE _method("acceptRichText", &D::ClassType::acceptRichText);
    _d.CPGF_MD_TEMPLATE _method("setAcceptRichText", &D::ClassType::setAcceptRichText);
    _d.CPGF_MD_TEMPLATE _method("setExtraSelections", &D::ClassType::setExtraSelections);
    _d.CPGF_MD_TEMPLATE _method("extraSelections", &D::ClassType::extraSelections);
    _d.CPGF_MD_TEMPLATE _method("moveCursor", &D::ClassType::moveCursor)
        ._default(copyVariantFromCopyable(QTextCursor::MoveAnchor))
    ;
    _d.CPGF_MD_TEMPLATE _method("canPaste", &D::ClassType::canPaste);
    _d.CPGF_MD_TEMPLATE _method("print", &D::ClassType::print);
    _d.CPGF_MD_TEMPLATE _method("inputMethodQuery", &D::ClassType::inputMethodQuery);
    _d.CPGF_MD_TEMPLATE _method("setFontPointSize", &D::ClassType::setFontPointSize);
    _d.CPGF_MD_TEMPLATE _method("setFontFamily", &D::ClassType::setFontFamily, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setFontWeight", &D::ClassType::setFontWeight);
    _d.CPGF_MD_TEMPLATE _method("setFontUnderline", &D::ClassType::setFontUnderline);
    _d.CPGF_MD_TEMPLATE _method("setFontItalic", &D::ClassType::setFontItalic);
    _d.CPGF_MD_TEMPLATE _method("setTextColor", &D::ClassType::setTextColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setTextBackgroundColor", &D::ClassType::setTextBackgroundColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setCurrentFont", &D::ClassType::setCurrentFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setAlignment", &D::ClassType::setAlignment);
    _d.CPGF_MD_TEMPLATE _method("setPlainText", &D::ClassType::setPlainText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setHtml", &D::ClassType::setHtml, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("cut", &D::ClassType::cut);
    _d.CPGF_MD_TEMPLATE _method("copy", &D::ClassType::copy);
    _d.CPGF_MD_TEMPLATE _method("paste", &D::ClassType::paste);
    _d.CPGF_MD_TEMPLATE _method("undo", &D::ClassType::undo);
    _d.CPGF_MD_TEMPLATE _method("redo", &D::ClassType::redo);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("selectAll", &D::ClassType::selectAll);
    _d.CPGF_MD_TEMPLATE _method("insertPlainText", &D::ClassType::insertPlainText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insertHtml", &D::ClassType::insertHtml, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("append", &D::ClassType::append, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("scrollToAnchor", &D::ClassType::scrollToAnchor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("zoomIn", &D::ClassType::zoomIn)
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("zoomOut", &D::ClassType::zoomOut)
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("textChanged", &D::ClassType::textChanged);
    _d.CPGF_MD_TEMPLATE _method("undoAvailable", &D::ClassType::undoAvailable);
    _d.CPGF_MD_TEMPLATE _method("redoAvailable", &D::ClassType::redoAvailable);
    _d.CPGF_MD_TEMPLATE _method("currentCharFormatChanged", &D::ClassType::currentCharFormatChanged);
    _d.CPGF_MD_TEMPLATE _method("copyAvailable", &D::ClassType::copyAvailable);
    _d.CPGF_MD_TEMPLATE _method("selectionChanged", &D::ClassType::selectionChanged);
    _d.CPGF_MD_TEMPLATE _method("cursorPositionChanged", &D::ClassType::cursorPositionChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::LineWrapMode>("LineWrapMode")
        ._element("NoWrap", D::ClassType::NoWrap)
        ._element("WidgetWidth", D::ClassType::WidgetWidth)
        ._element("FixedPixelWidth", D::ClassType::FixedPixelWidth)
        ._element("FixedColumnWidth", D::ClassType::FixedColumnWidth)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AutoFormattingFlag>("AutoFormattingFlag")
        ._element("AutoNone", D::ClassType::AutoNone)
        ._element("AutoBulletList", D::ClassType::AutoBulletList)
        ._element("AutoAll", D::ClassType::AutoAll)
    ;
    {
        GDefineMetaClass<QFlags<typename QTextEdit::AutoFormattingFlag > > _t_d = GDefineMetaClass<QFlags<typename QTextEdit::AutoFormattingFlag > >::lazyDeclare("AutoFormatting", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QTextEdit::AutoFormattingFlag > >, typename QTextEdit::AutoFormattingFlag >);
        _d._class(_t_d);
    }
    {
        GDefineMetaClass<QTextEdit::ExtraSelection> _nd = GDefineMetaClass<QTextEdit::ExtraSelection>::declare("ExtraSelection");
        _nd.CPGF_MD_TEMPLATE _field("cursor", &QTextEdit::ExtraSelection::cursor);
        _nd.CPGF_MD_TEMPLATE _field("format", &QTextEdit::ExtraSelection::format);
        _d.CPGF_MD_TEMPLATE _class(_nd);
    }
}


class QTextEditWrapper : public QTextEdit, public cpgf::GScriptWrapper {
public:
    
    QTextEditWrapper(QWidget * parent = 0)
        : QTextEdit(parent) {}
    
    QTextEditWrapper(const QString & text, QWidget * parent = 0)
        : QTextEdit(text, parent) {}
    
    QSize viewportSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewportSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QAbstractScrollArea::viewportSizeHint();
    }
    QSize super_viewportSizeHint() const
    {
        return QAbstractScrollArea::viewportSizeHint();
    }
    
    void scrollContentsBy(int dx, int dy)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollContentsBy"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, dx, dy);
            return;
        }
        QTextEdit::scrollContentsBy(dx, dy);
    }
    void super_scrollContentsBy(int dx, int dy)
    {
        QTextEdit::scrollContentsBy(dx, dy);
    }
    
    bool canInsertFromMimeData(const QMimeData * source) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("canInsertFromMimeData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, source).getValue());
        }
        return QTextEdit::canInsertFromMimeData(source);
    }
    bool super_canInsertFromMimeData(const QMimeData * source) const
    {
        return QTextEdit::canInsertFromMimeData(source);
    }
    
    void wheelEvent(QWheelEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::wheelEvent(e);
    }
    void super_wheelEvent(QWheelEvent * e)
    {
        QTextEdit::wheelEvent(e);
    }
    
    void setViewportMargins(int left, int top, int right, int bottom)
    {
        QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
    }
    
    bool viewportEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewportEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QAbstractScrollArea::viewportEvent(__arg0);
    }
    bool super_viewportEvent(QEvent * __arg0)
    {
        return QAbstractScrollArea::viewportEvent(__arg0);
    }
    
    void showEvent(QShowEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QTextEdit::showEvent(__arg0);
    }
    void super_showEvent(QShowEvent * __arg0)
    {
        QTextEdit::showEvent(__arg0);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QTextEdit::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QTextEdit::qt_metacast(__arg0);
    }
    
    void tabletEvent(QTabletEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("tabletEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::tabletEvent(__arg0);
    }
    void super_tabletEvent(QTabletEvent * __arg0)
    {
        QWidget::tabletEvent(__arg0);
    }
    
    void resizeEvent(QResizeEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::resizeEvent(e);
    }
    void super_resizeEvent(QResizeEvent * e)
    {
        QTextEdit::resizeEvent(e);
    }
    
    void hideEvent(QHideEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hideEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::hideEvent(__arg0);
    }
    void super_hideEvent(QHideEvent * __arg0)
    {
        QWidget::hideEvent(__arg0);
    }
    
    int metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QWidget::metric(__arg0);
    }
    int super_metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        return QWidget::metric(__arg0);
    }
    
    void focusInEvent(QFocusEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::focusInEvent(e);
    }
    void super_focusInEvent(QFocusEvent * e)
    {
        QTextEdit::focusInEvent(e);
    }
    
    void contextMenuEvent(QContextMenuEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::contextMenuEvent(e);
    }
    void super_contextMenuEvent(QContextMenuEvent * e)
    {
        QTextEdit::contextMenuEvent(e);
    }
    
    bool event(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, e).getValue());
        }
        return QTextEdit::event(e);
    }
    bool super_event(QEvent * e)
    {
        return QTextEdit::event(e);
    }
    
    void leaveEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::leaveEvent(__arg0);
    }
    void super_leaveEvent(QEvent * __arg0)
    {
        QWidget::leaveEvent(__arg0);
    }
    
    void dropEvent(QDropEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::dropEvent(e);
    }
    void super_dropEvent(QDropEvent * e)
    {
        QTextEdit::dropEvent(e);
    }
    
    bool focusNextChild()
    {
        return QWidget::focusNextChild();
    }
    
    void timerEvent(QTimerEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::timerEvent(e);
    }
    void super_timerEvent(QTimerEvent * e)
    {
        QTextEdit::timerEvent(e);
    }
    
    void setViewportMargins(const QMargins & margins)
    {
        QAbstractScrollArea::setViewportMargins(margins);
    }
    
    void paintEvent(QPaintEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::paintEvent(e);
    }
    void super_paintEvent(QPaintEvent * e)
    {
        QTextEdit::paintEvent(e);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void destroy(bool destroyWindow = true, bool destroySubWindows = true)
    {
        QWidget::destroy(destroyWindow, destroySubWindows);
    }
    
    void mouseDoubleClickEvent(QMouseEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::mouseDoubleClickEvent(e);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * e)
    {
        QTextEdit::mouseDoubleClickEvent(e);
    }
    
    void focusOutEvent(QFocusEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::focusOutEvent(e);
    }
    void super_focusOutEvent(QFocusEvent * e)
    {
        QTextEdit::focusOutEvent(e);
    }
    
    void create(WId __arg0 = 0, bool initializeWindow = true, bool destroyOldWindow = true)
    {
        QWidget::create(__arg0, initializeWindow, destroyOldWindow);
    }
    
    void moveEvent(QMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::moveEvent(__arg0);
    }
    void super_moveEvent(QMoveEvent * __arg0)
    {
        QWidget::moveEvent(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    void updateMicroFocus()
    {
        QWidget::updateMicroFocus();
    }
    
    void changeEvent(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::changeEvent(e);
    }
    void super_changeEvent(QEvent * e)
    {
        QTextEdit::changeEvent(e);
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QWidget::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QWidget::hasHeightForWidth();
    }
    
    QPainter * sharedPainter() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sharedPainter"));
        if(func)
        {
            return cpgf::fromVariant<QPainter * >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QWidget::sharedPainter();
    }
    QPainter * super_sharedPainter() const
    {
        return QWidget::sharedPainter();
    }
    
    void setupViewport(QWidget * viewport)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setupViewport"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, viewport);
            return;
        }
        QAbstractScrollArea::setupViewport(viewport);
    }
    void super_setupViewport(QWidget * viewport)
    {
        QAbstractScrollArea::setupViewport(viewport);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1).getValue());
        }
        return QAbstractScrollArea::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QAbstractScrollArea::eventFilter(__arg0, __arg1);
    }
    
    QPaintDevice * redirected(QPoint * offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("redirected"));
        if(func)
        {
            return cpgf::fromVariant<QPaintDevice * >(cpgf::invokeScriptFunction(func.get(), this, offset).getValue());
        }
        return QWidget::redirected(offset);
    }
    QPaintDevice * super_redirected(QPoint * offset) const
    {
        return QWidget::redirected(offset);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QTextEdit::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QTextEdit::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QWidget::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QWidget::heightForWidth(__arg0);
    }
    
    void enterEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::enterEvent(__arg0);
    }
    void super_enterEvent(QEvent * __arg0)
    {
        QWidget::enterEvent(__arg0);
    }
    
    void dragMoveEvent(QDragMoveEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::dragMoveEvent(e);
    }
    void super_dragMoveEvent(QDragMoveEvent * e)
    {
        QTextEdit::dragMoveEvent(e);
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    bool focusNextPrevChild(bool next)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusNextPrevChild"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, next).getValue());
        }
        return QTextEdit::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QTextEdit::focusNextPrevChild(next);
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QAbstractScrollArea::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QAbstractScrollArea::sizeHint();
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    void initPainter(QPainter * painter) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initPainter"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, painter);
            return;
        }
        QWidget::initPainter(painter);
    }
    void super_initPainter(QPainter * painter) const
    {
        QWidget::initPainter(painter);
    }
    
    bool focusPreviousChild()
    {
        return QWidget::focusPreviousChild();
    }
    
    QVariant loadResource(int type, const QUrl & name)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("loadResource"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, type, name).getValue());
        }
        return QTextEdit::loadResource(type, name);
    }
    QVariant super_loadResource(int type, const QUrl & name)
    {
        return QTextEdit::loadResource(type, name);
    }
    
    void mouseMoveEvent(QMouseEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::mouseMoveEvent(e);
    }
    void super_mouseMoveEvent(QMouseEvent * e)
    {
        QTextEdit::mouseMoveEvent(e);
    }
    
    void keyPressEvent(QKeyEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::keyPressEvent(e);
    }
    void super_keyPressEvent(QKeyEvent * e)
    {
        QTextEdit::keyPressEvent(e);
    }
    
    void actionEvent(QActionEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::actionEvent(__arg0);
    }
    void super_actionEvent(QActionEvent * __arg0)
    {
        QWidget::actionEvent(__arg0);
    }
    
    void setVisible(bool visible)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setVisible"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, visible);
            return;
        }
        QWidget::setVisible(visible);
    }
    void super_setVisible(bool visible)
    {
        QWidget::setVisible(visible);
    }
    
    void inputMethodEvent(QInputMethodEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QTextEdit::inputMethodEvent(__arg0);
    }
    void super_inputMethodEvent(QInputMethodEvent * __arg0)
    {
        QTextEdit::inputMethodEvent(__arg0);
    }
    
    void dragEnterEvent(QDragEnterEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::dragEnterEvent(e);
    }
    void super_dragEnterEvent(QDragEnterEvent * e)
    {
        QTextEdit::dragEnterEvent(e);
    }
    
    void mousePressEvent(QMouseEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::mousePressEvent(e);
    }
    void super_mousePressEvent(QMouseEvent * e)
    {
        QTextEdit::mousePressEvent(e);
    }
    
    void drawFrame(QPainter * __arg0)
    {
        QFrame::drawFrame(__arg0);
    }
    
    void insertFromMimeData(const QMimeData * source)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertFromMimeData"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, source);
            return;
        }
        QTextEdit::insertFromMimeData(source);
    }
    void super_insertFromMimeData(const QMimeData * source)
    {
        QTextEdit::insertFromMimeData(source);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery property) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, property).getValue());
        }
        return QTextEdit::inputMethodQuery(property);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery property) const
    {
        return QTextEdit::inputMethodQuery(property);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::dragLeaveEvent(e);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * e)
    {
        QTextEdit::dragLeaveEvent(e);
    }
    
    bool nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("nativeEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, eventType, message, result).getValue());
        }
        return QWidget::nativeEvent(eventType, message, result);
    }
    bool super_nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        return QWidget::nativeEvent(eventType, message, result);
    }
    
    QSize minimumSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QAbstractScrollArea::minimumSizeHint();
    }
    QSize super_minimumSizeHint() const
    {
        return QAbstractScrollArea::minimumSizeHint();
    }
    
    void doSetTextCursor(const QTextCursor & cursor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doSetTextCursor"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, cursor);
            return;
        }
        QTextEdit::doSetTextCursor(cursor);
    }
    void super_doSetTextCursor(const QTextCursor & cursor)
    {
        QTextEdit::doSetTextCursor(cursor);
    }
    
    int devType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("devType"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QWidget::devType();
    }
    int super_devType() const
    {
        return QWidget::devType();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    QMimeData * createMimeDataFromSelection() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createMimeDataFromSelection"));
        if(func)
        {
            return cpgf::fromVariant<QMimeData * >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QTextEdit::createMimeDataFromSelection();
    }
    QMimeData * super_createMimeDataFromSelection() const
    {
        return QTextEdit::createMimeDataFromSelection();
    }
    
    QPaintEngine * paintEngine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEngine"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine * >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QWidget::paintEngine();
    }
    QPaintEngine * super_paintEngine() const
    {
        return QWidget::paintEngine();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QTextEdit::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QTextEdit::metaObject();
    }
    
    void keyReleaseEvent(QKeyEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::keyReleaseEvent(e);
    }
    void super_keyReleaseEvent(QKeyEvent * e)
    {
        QTextEdit::keyReleaseEvent(e);
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    void mouseReleaseEvent(QMouseEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTextEdit::mouseReleaseEvent(e);
    }
    void super_mouseReleaseEvent(QMouseEvent * e)
    {
        QTextEdit::mouseReleaseEvent(e);
    }
    
    void closeEvent(QCloseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::closeEvent(__arg0);
    }
    void super_closeEvent(QCloseEvent * __arg0)
    {
        QWidget::closeEvent(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("viewportSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::viewportSizeHint);
        _d.CPGF_MD_TEMPLATE _method("scrollContentsBy", (void (D::ClassType::*) (int, int))&D::ClassType::scrollContentsBy);
        _d.CPGF_MD_TEMPLATE _method("canInsertFromMimeData", (bool (D::ClassType::*) (const QMimeData *) const)&D::ClassType::canInsertFromMimeData);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("setViewportMargins", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setViewportMargins);
        _d.CPGF_MD_TEMPLATE _method("viewportEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::viewportEvent);
        _d.CPGF_MD_TEMPLATE _method("showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::showEvent);
        _d.CPGF_MD_TEMPLATE _method("tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::hideEvent);
        _d.CPGF_MD_TEMPLATE _method("metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::metric);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("focusNextChild", (bool (D::ClassType::*) ())&D::ClassType::focusNextChild);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("setViewportMargins", (void (D::ClassType::*) (const QMargins &))&D::ClassType::setViewportMargins);
        _d.CPGF_MD_TEMPLATE _method("paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::paintEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("destroy", (void (D::ClassType::*) (bool, bool))&D::ClassType::destroy)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
        ;
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("create", (void (D::ClassType::*) (WId, bool, bool))&D::ClassType::create)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::moveEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::changeEvent);
        _d.CPGF_MD_TEMPLATE _method("sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::redirected);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::enterEvent);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::initPainter);
        _d.CPGF_MD_TEMPLATE _method("focusPreviousChild", (bool (D::ClassType::*) ())&D::ClassType::focusPreviousChild);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::actionEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("drawFrame", (void (D::ClassType::*) (QPainter *))&D::ClassType::drawFrame);
        _d.CPGF_MD_TEMPLATE _method("insertFromMimeData", (void (D::ClassType::*) (const QMimeData *))&D::ClassType::insertFromMimeData);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("doSetTextCursor", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::doSetTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("createMimeDataFromSelection", (QMimeData * (D::ClassType::*) () const)&D::ClassType::createMimeDataFromSelection);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_viewportSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_viewportSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_scrollContentsBy", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollContentsBy);
        _d.CPGF_MD_TEMPLATE _method("super_canInsertFromMimeData", (bool (D::ClassType::*) (const QMimeData *) const)&D::ClassType::super_canInsertFromMimeData);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_viewportEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_viewportEvent);
        _d.CPGF_MD_TEMPLATE _method("super_showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::super_showEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::super_tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("super_resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::super_resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::super_hideEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::super_paintEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::super_moveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_changeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("super_setupViewport", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_setupViewport);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::super_redirected);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_enterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::super_focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::super_initPainter);
        _d.CPGF_MD_TEMPLATE _method("super_loadResource", (QVariant (D::ClassType::*) (int, const QUrl &))&D::ClassType::super_loadResource, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::super_actionEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setVisible", (void (D::ClassType::*) (bool))&D::ClassType::super_setVisible);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_insertFromMimeData", (void (D::ClassType::*) (const QMimeData *))&D::ClassType::super_insertFromMimeData);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::super_nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_minimumSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_doSetTextCursor", (void (D::ClassType::*) (const QTextCursor &))&D::ClassType::super_doSetTextCursor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
        _d.CPGF_MD_TEMPLATE _method("super_createMimeDataFromSelection", (QMimeData * (D::ClassType::*) () const)&D::ClassType::super_createMimeDataFromSelection);
        _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
    }
};


template <typename D>
void buildMetaClass_QTextEditWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QTextEditWrapper::cpgf__register(_d);
    
    buildMetaClass_QTextEdit<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
