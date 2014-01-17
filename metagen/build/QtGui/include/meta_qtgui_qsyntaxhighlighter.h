// Auto generated file, don't modify.

#ifndef __META_QTGUI_QSYNTAXHIGHLIGHTER_H
#define __META_QTGUI_QSYNTAXHIGHLIGHTER_H


#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtgui { 


template <typename D>
void buildMetaClass_QSyntaxHighlighter(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
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
    
    void setFormat(int start, int count, const QColor & color)
    {
        QSyntaxHighlighter::setFormat(start, count, color);
    }
    
    void setCurrentBlockState(int newState)
    {
        QSyntaxHighlighter::setCurrentBlockState(newState);
    }
    
    QTextBlockUserData * currentBlockUserData() const
    {
        return QSyntaxHighlighter::currentBlockUserData();
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
    
    int currentBlockState() const
    {
        return QSyntaxHighlighter::currentBlockState();
    }
    
    QTextCharFormat format(int pos) const
    {
        return QSyntaxHighlighter::format(pos);
    }
    
    void setFormat(int start, int count, const QTextCharFormat & format)
    {
        QSyntaxHighlighter::setFormat(start, count, format);
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
    
    void setFormat(int start, int count, const QFont & font)
    {
        QSyntaxHighlighter::setFormat(start, count, font);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    int previousBlockState() const
    {
        return QSyntaxHighlighter::previousBlockState();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QSyntaxHighlighter::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QSyntaxHighlighter::qt_metacast(__arg0);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
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
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QSyntaxHighlighter::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QSyntaxHighlighter::metaObject();
    }
    
    void setCurrentBlockUserData(QTextBlockUserData * data)
    {
        QSyntaxHighlighter::setCurrentBlockUserData(data);
    }
    
    QTextBlock currentBlock() const
    {
        return QSyntaxHighlighter::currentBlock();
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
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
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
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QSyntaxHighlighter::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QSyntaxHighlighter::qt_metacall(__arg0, __arg1, __arg2);
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
    
    void highlightBlock(const QString & text)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("highlightBlock"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, text);
            return;
        }
        throw "Abstract method";
    }
    void super_highlightBlock(const QString & text)
    {
        throw "Abstract method";
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
};


template <typename D>
void buildMetaClass_QSyntaxHighlighterWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTextDocument *)>();
    
    _d.CPGF_MD_TEMPLATE _method("setFormat", (void (D::ClassType::*) (int, int, const QColor &))&D::ClassType::setFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("setCurrentBlockState", (void (D::ClassType::*) (int))&D::ClassType::setCurrentBlockState);
    _d.CPGF_MD_TEMPLATE _method("currentBlockUserData", (QTextBlockUserData * (D::ClassType::*) () const)&D::ClassType::currentBlockUserData);
    _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
    _d.CPGF_MD_TEMPLATE _method("currentBlockState", (int (D::ClassType::*) () const)&D::ClassType::currentBlockState);
    _d.CPGF_MD_TEMPLATE _method("format", (QTextCharFormat (D::ClassType::*) (int) const)&D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("setFormat", (void (D::ClassType::*) (int, int, const QTextCharFormat &))&D::ClassType::setFormat);
    _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
    _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
    _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
    _d.CPGF_MD_TEMPLATE _method("setFormat", (void (D::ClassType::*) (int, int, const QFont &))&D::ClassType::setFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
    _d.CPGF_MD_TEMPLATE _method("previousBlockState", (int (D::ClassType::*) () const)&D::ClassType::previousBlockState);
    _d.CPGF_MD_TEMPLATE _method("setCurrentBlockUserData", (void (D::ClassType::*) (QTextBlockUserData *))&D::ClassType::setCurrentBlockUserData);
    _d.CPGF_MD_TEMPLATE _method("currentBlock", (QTextBlock (D::ClassType::*) () const)&D::ClassType::currentBlock);
    _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
    _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
    _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
    _d.CPGF_MD_TEMPLATE _method("highlightBlock", (void (D::ClassType::*) (const QString &))&D::ClassType::highlightBlock, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
    _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
    _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
    _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
    _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
    _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
    _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
    _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
    _d.CPGF_MD_TEMPLATE _method("super_highlightBlock", (void (D::ClassType::*) (const QString &))&D::ClassType::super_highlightBlock, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    
    buildMetaClass_QSyntaxHighlighter<D>(config, _d);
}


} // namespace meta_qtgui




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
