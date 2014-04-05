// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QTEXTDOCUMENT_H
#define CPGF_META_QTGUI_QTEXTDOCUMENT_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"


using namespace Qt;


namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qtextdocument(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("mightBeRichText", (bool (*) (const QString &))&mightBeRichText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("convertFromPlainText", (QString (*) (const QString &, WhiteSpaceMode))&convertFromPlainText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(WhiteSpacePre))
    ;
    _d.CPGF_MD_TEMPLATE _method("codecForHtml", (QTextCodec * (*) (const QByteArray &))&codecForHtml, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
}


template <typename D>
void buildMetaClass_QAbstractUndoItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("undo", &D::ClassType::undo);
    _d.CPGF_MD_TEMPLATE _method("redo", &D::ClassType::redo);
}


class QAbstractUndoItemWrapper : public QAbstractUndoItem, public cpgf::GScriptWrapper {
public:
    
    void undo()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("undo"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_undo()
    {
        throw std::runtime_error("Abstract method");
    }
    
    void redo()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("redo"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_redo()
    {
        throw std::runtime_error("Abstract method");
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_undo", (void (D::ClassType::*) ())&D::ClassType::super_undo);
        _d.CPGF_MD_TEMPLATE _method("super_redo", (void (D::ClassType::*) ())&D::ClassType::super_redo);
    }
};


template <typename D>
void buildMetaClass_QAbstractUndoItemWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QAbstractUndoItemWrapper::cpgf__register(_d);
    
    buildMetaClass_QAbstractUndoItem<D>(_d);
}


template <typename D>
void buildMetaClass_QTextDocument(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("clone", &D::ClassType::clone)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("setUndoRedoEnabled", &D::ClassType::setUndoRedoEnabled);
    _d.CPGF_MD_TEMPLATE _method("isUndoRedoEnabled", &D::ClassType::isUndoRedoEnabled);
    _d.CPGF_MD_TEMPLATE _method("isUndoAvailable", &D::ClassType::isUndoAvailable);
    _d.CPGF_MD_TEMPLATE _method("isRedoAvailable", &D::ClassType::isRedoAvailable);
    _d.CPGF_MD_TEMPLATE _method("availableUndoSteps", &D::ClassType::availableUndoSteps);
    _d.CPGF_MD_TEMPLATE _method("availableRedoSteps", &D::ClassType::availableRedoSteps);
    _d.CPGF_MD_TEMPLATE _method("revision", &D::ClassType::revision);
    _d.CPGF_MD_TEMPLATE _method("setDocumentLayout", &D::ClassType::setDocumentLayout);
    _d.CPGF_MD_TEMPLATE _method("documentLayout", &D::ClassType::documentLayout);
    _d.CPGF_MD_TEMPLATE _method("setMetaInformation", &D::ClassType::setMetaInformation, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("metaInformation", &D::ClassType::metaInformation);
    _d.CPGF_MD_TEMPLATE _method("toHtml", &D::ClassType::toHtml, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QByteArray()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setHtml", &D::ClassType::setHtml, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toPlainText", &D::ClassType::toPlainText);
    _d.CPGF_MD_TEMPLATE _method("setPlainText", &D::ClassType::setPlainText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("characterAt", &D::ClassType::characterAt);
    _d.CPGF_MD_TEMPLATE _method("find", (QTextCursor (D::ClassType::*) (const QString &, int, QTextDocument::FindFlags) const)&D::ClassType::find, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("find", (QTextCursor (D::ClassType::*) (const QString &, const QTextCursor &, QTextDocument::FindFlags) const)&D::ClassType::find, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("find", (QTextCursor (D::ClassType::*) (const QRegExp &, int, QTextDocument::FindFlags) const)&D::ClassType::find, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("find", (QTextCursor (D::ClassType::*) (const QRegExp &, const QTextCursor &, QTextDocument::FindFlags) const)&D::ClassType::find, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("frameAt", &D::ClassType::frameAt);
    _d.CPGF_MD_TEMPLATE _method("rootFrame", &D::ClassType::rootFrame);
    _d.CPGF_MD_TEMPLATE _method("object", &D::ClassType::object);
    _d.CPGF_MD_TEMPLATE _method("objectForFormat", &D::ClassType::objectForFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("findBlock", &D::ClassType::findBlock);
    _d.CPGF_MD_TEMPLATE _method("findBlockByNumber", &D::ClassType::findBlockByNumber);
    _d.CPGF_MD_TEMPLATE _method("findBlockByLineNumber", &D::ClassType::findBlockByLineNumber);
    _d.CPGF_MD_TEMPLATE _method("begin", &D::ClassType::begin);
    _d.CPGF_MD_TEMPLATE _method("end", &D::ClassType::end);
    _d.CPGF_MD_TEMPLATE _method("firstBlock", &D::ClassType::firstBlock);
    _d.CPGF_MD_TEMPLATE _method("lastBlock", &D::ClassType::lastBlock);
    _d.CPGF_MD_TEMPLATE _method("setPageSize", &D::ClassType::setPageSize);
    _d.CPGF_MD_TEMPLATE _method("pageSize", &D::ClassType::pageSize);
    _d.CPGF_MD_TEMPLATE _method("setDefaultFont", &D::ClassType::setDefaultFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("defaultFont", &D::ClassType::defaultFont);
    _d.CPGF_MD_TEMPLATE _method("pageCount", &D::ClassType::pageCount);
    _d.CPGF_MD_TEMPLATE _method("isModified", &D::ClassType::isModified);
    _d.CPGF_MD_TEMPLATE _method("resource", &D::ClassType::resource, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("addResource", &D::ClassType::addResource, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("allFormats", &D::ClassType::allFormats);
    _d.CPGF_MD_TEMPLATE _method("markContentsDirty", &D::ClassType::markContentsDirty);
    _d.CPGF_MD_TEMPLATE _method("setUseDesignMetrics", &D::ClassType::setUseDesignMetrics);
    _d.CPGF_MD_TEMPLATE _method("useDesignMetrics", &D::ClassType::useDesignMetrics);
    _d.CPGF_MD_TEMPLATE _method("drawContents", &D::ClassType::drawContents)
        ._default(copyVariantFromCopyable(QRectF()))
    ;
    _d.CPGF_MD_TEMPLATE _method("setTextWidth", &D::ClassType::setTextWidth);
    _d.CPGF_MD_TEMPLATE _method("textWidth", &D::ClassType::textWidth);
    _d.CPGF_MD_TEMPLATE _method("idealWidth", &D::ClassType::idealWidth);
    _d.CPGF_MD_TEMPLATE _method("indentWidth", &D::ClassType::indentWidth);
    _d.CPGF_MD_TEMPLATE _method("setIndentWidth", &D::ClassType::setIndentWidth);
    _d.CPGF_MD_TEMPLATE _method("documentMargin", &D::ClassType::documentMargin);
    _d.CPGF_MD_TEMPLATE _method("setDocumentMargin", &D::ClassType::setDocumentMargin);
    _d.CPGF_MD_TEMPLATE _method("adjustSize", &D::ClassType::adjustSize);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("blockCount", &D::ClassType::blockCount);
    _d.CPGF_MD_TEMPLATE _method("lineCount", &D::ClassType::lineCount);
    _d.CPGF_MD_TEMPLATE _method("characterCount", &D::ClassType::characterCount);
    _d.CPGF_MD_TEMPLATE _method("setDefaultStyleSheet", &D::ClassType::setDefaultStyleSheet, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("defaultStyleSheet", &D::ClassType::defaultStyleSheet);
    _d.CPGF_MD_TEMPLATE _method("undo", (void (D::ClassType::*) (QTextCursor *))&D::ClassType::undo);
    _d.CPGF_MD_TEMPLATE _method("redo", (void (D::ClassType::*) (QTextCursor *))&D::ClassType::redo);
    _d.CPGF_MD_TEMPLATE _method("clearUndoRedoStacks", &D::ClassType::clearUndoRedoStacks)
        ._default(copyVariantFromCopyable(QTextDocument::UndoAndRedoStacks))
    ;
    _d.CPGF_MD_TEMPLATE _method("maximumBlockCount", &D::ClassType::maximumBlockCount);
    _d.CPGF_MD_TEMPLATE _method("setMaximumBlockCount", &D::ClassType::setMaximumBlockCount);
    _d.CPGF_MD_TEMPLATE _method("defaultTextOption", &D::ClassType::defaultTextOption);
    _d.CPGF_MD_TEMPLATE _method("setDefaultTextOption", &D::ClassType::setDefaultTextOption, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("defaultCursorMoveStyle", &D::ClassType::defaultCursorMoveStyle);
    _d.CPGF_MD_TEMPLATE _method("setDefaultCursorMoveStyle", &D::ClassType::setDefaultCursorMoveStyle);
    _d.CPGF_MD_TEMPLATE _method("contentsChange", &D::ClassType::contentsChange);
    _d.CPGF_MD_TEMPLATE _method("contentsChanged", &D::ClassType::contentsChanged);
    _d.CPGF_MD_TEMPLATE _method("undoAvailable", &D::ClassType::undoAvailable);
    _d.CPGF_MD_TEMPLATE _method("redoAvailable", &D::ClassType::redoAvailable);
    _d.CPGF_MD_TEMPLATE _method("undoCommandAdded", &D::ClassType::undoCommandAdded);
    _d.CPGF_MD_TEMPLATE _method("modificationChanged", &D::ClassType::modificationChanged);
    _d.CPGF_MD_TEMPLATE _method("cursorPositionChanged", &D::ClassType::cursorPositionChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("blockCountChanged", &D::ClassType::blockCountChanged);
    _d.CPGF_MD_TEMPLATE _method("documentLayoutChanged", &D::ClassType::documentLayoutChanged);
    _d.CPGF_MD_TEMPLATE _method("undo", (void (D::ClassType::*) ())&D::ClassType::undo);
    _d.CPGF_MD_TEMPLATE _method("redo", (void (D::ClassType::*) ())&D::ClassType::redo);
    _d.CPGF_MD_TEMPLATE _method("appendUndoItem", &D::ClassType::appendUndoItem);
    _d.CPGF_MD_TEMPLATE _method("setModified", &D::ClassType::setModified)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::MetaInformation>("MetaInformation")
        ._element("DocumentTitle", D::ClassType::DocumentTitle)
        ._element("DocumentUrl", D::ClassType::DocumentUrl)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FindFlag>("FindFlag")
        ._element("FindBackward", D::ClassType::FindBackward)
        ._element("FindCaseSensitively", D::ClassType::FindCaseSensitively)
        ._element("FindWholeWords", D::ClassType::FindWholeWords)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ResourceType>("ResourceType")
        ._element("HtmlResource", D::ClassType::HtmlResource)
        ._element("ImageResource", D::ClassType::ImageResource)
        ._element("StyleSheetResource", D::ClassType::StyleSheetResource)
        ._element("UserResource", D::ClassType::UserResource)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Stacks>("Stacks")
        ._element("UndoStack", D::ClassType::UndoStack)
        ._element("RedoStack", D::ClassType::RedoStack)
        ._element("UndoAndRedoStacks", D::ClassType::UndoAndRedoStacks)
    ;
    {
        GDefineMetaClass<QFlags<typename QTextDocument::FindFlag > > _t_d = GDefineMetaClass<QFlags<typename QTextDocument::FindFlag > >::lazyDeclare("FindFlags", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QTextDocument::FindFlag > >, typename QTextDocument::FindFlag >);
        _d._class(_t_d);
    }
}


class QTextDocumentWrapper : public QTextDocument, public cpgf::GScriptWrapper {
public:
    
    QTextDocumentWrapper(QObject * parent = 0)
        : QTextDocument(parent) {}
    
    QTextDocumentWrapper(const QString & text, QObject * parent = 0)
        : QTextDocument(text, parent) {}
    
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
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
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
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void clear()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("clear"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QTextDocument::clear();
    }
    void super_clear()
    {
        QTextDocument::clear();
    }
    
    QVariant loadResource(int type, const QUrl & name)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("loadResource"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, type, name).getValue());
        }
        return QTextDocument::loadResource(type, name);
    }
    QVariant super_loadResource(int type, const QUrl & name)
    {
        return QTextDocument::loadResource(type, name);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QTextDocument::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QTextDocument::qt_metacast(__arg0);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this).getValue());
        }
        return QTextDocument::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QTextDocument::metaObject();
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
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QTextDocument::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QTextDocument::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    QTextObject * createObject(const QTextFormat & f)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("createObject"));
        if(func)
        {
            return cpgf::fromVariant<QTextObject * >(cpgf::invokeScriptFunction(func.get(), this, f).getValue());
        }
        return QTextDocument::createObject(f);
    }
    QTextObject * super_createObject(const QTextFormat & f)
    {
        return QTextDocument::createObject(f);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
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
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("loadResource", (QVariant (D::ClassType::*) (int, const QUrl &))&D::ClassType::loadResource, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("createObject", (QTextObject * (D::ClassType::*) (const QTextFormat &))&D::ClassType::createObject, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_clear", (void (D::ClassType::*) ())&D::ClassType::super_clear);
        _d.CPGF_MD_TEMPLATE _method("super_loadResource", (QVariant (D::ClassType::*) (int, const QUrl &))&D::ClassType::super_loadResource, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_createObject", (QTextObject * (D::ClassType::*) (const QTextFormat &))&D::ClassType::super_createObject, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
    }
};


template <typename D>
void buildMetaClass_QTextDocumentWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QTextDocumentWrapper::cpgf__register(_d);
    
    buildMetaClass_QTextDocument<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
