// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QSYNTAXHIGHLIGHTER_H
#define CPGF_META_QTGUI_QSYNTAXHIGHLIGHTER_H


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
void buildMetaClass_QSyntaxHighlighter(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setDocument", &D::ClassType::setDocument);
    _d.CPGF_MD_TEMPLATE _method("document", &D::ClassType::document);
    _d.CPGF_MD_TEMPLATE _method("rehighlight", &D::ClassType::rehighlight);
    _d.CPGF_MD_TEMPLATE _method("rehighlightBlock", &D::ClassType::rehighlightBlock);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QSyntaxHighlighterWrapper : public QSyntaxHighlighter, public cpgf::GScriptWrapper {
public:
    
    QSyntaxHighlighterWrapper(QObject * parent)
        : QSyntaxHighlighter(parent) {}
    
    QSyntaxHighlighterWrapper(QTextDocument * parent)
        : QSyntaxHighlighter(parent) {}
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void setFormat(int start, int count, const QColor & color)
    {
        QSyntaxHighlighter::setFormat(start, count, color);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void highlightBlock(const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("highlightBlock"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, text);
            return;
        }
        throw std::runtime_error("Abstract method");
    }
    void super_highlightBlock(const QString & text)
    {
        throw std::runtime_error("Abstract method");
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
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    QTextBlock currentBlock() const
    {
        return QSyntaxHighlighter::currentBlock();
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
    
    int previousBlockState() const
    {
        return QSyntaxHighlighter::previousBlockState();
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
    
    void setCurrentBlockState(int newState)
    {
        QSyntaxHighlighter::setCurrentBlockState(newState);
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
    
    int currentBlockState() const
    {
        return QSyntaxHighlighter::currentBlockState();
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
    
    QTextBlockUserData * currentBlockUserData() const
    {
        return QSyntaxHighlighter::currentBlockUserData();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QSyntaxHighlighter::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSyntaxHighlighter::qt_metacast(__arg0);
    }
    
    void setFormat(int start, int count, const QTextCharFormat & format)
    {
        QSyntaxHighlighter::setFormat(start, count, format);
    }
    
    void setCurrentBlockUserData(QTextBlockUserData * data)
    {
        QSyntaxHighlighter::setCurrentBlockUserData(data);
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
    
    QTextCharFormat format(int pos) const
    {
        return QSyntaxHighlighter::format(pos);
    }
    
    void setFormat(int start, int count, const QFont & font)
    {
        QSyntaxHighlighter::setFormat(start, count, font);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QSyntaxHighlighter::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSyntaxHighlighter::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QSyntaxHighlighter::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSyntaxHighlighter::qt_metacall(__arg0, __arg1, __arg2);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("setFormat", (void (D::ClassType::*) (int, int, const QColor &))&D::ClassType::setFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("highlightBlock", (void (D::ClassType::*) (const QString &))&D::ClassType::highlightBlock, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("currentBlock", (QTextBlock (D::ClassType::*) () const)&D::ClassType::currentBlock);
        _d.CPGF_MD_TEMPLATE _method("previousBlockState", (int (D::ClassType::*) () const)&D::ClassType::previousBlockState);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("setCurrentBlockState", (void (D::ClassType::*) (int))&D::ClassType::setCurrentBlockState);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("currentBlockState", (int (D::ClassType::*) () const)&D::ClassType::currentBlockState);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("currentBlockUserData", (QTextBlockUserData * (D::ClassType::*) () const)&D::ClassType::currentBlockUserData);
        _d.CPGF_MD_TEMPLATE _method("setFormat", (void (D::ClassType::*) (int, int, const QTextCharFormat &))&D::ClassType::setFormat);
        _d.CPGF_MD_TEMPLATE _method("setCurrentBlockUserData", (void (D::ClassType::*) (QTextBlockUserData *))&D::ClassType::setCurrentBlockUserData);
        _d.CPGF_MD_TEMPLATE _method("format", (QTextCharFormat (D::ClassType::*) (int) const)&D::ClassType::format);
        _d.CPGF_MD_TEMPLATE _method("setFormat", (void (D::ClassType::*) (int, int, const QFont &))&D::ClassType::setFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
        _d.CPGF_MD_TEMPLATE _method("super_highlightBlock", (void (D::ClassType::*) (const QString &))&D::ClassType::super_highlightBlock, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    }
};


template <typename D>
void buildMetaClass_QSyntaxHighlighterWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTextDocument *)>();
    
    QSyntaxHighlighterWrapper::cpgf__register(_d);
    
    buildMetaClass_QSyntaxHighlighter<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
