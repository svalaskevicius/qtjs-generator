// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QDATAWIDGETMAPPER_H
#define __META_QTWIDGETS_QDATAWIDGETMAPPER_H


#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtwidgets { 


template <typename D>
void buildMetaClass_QDataWidgetMapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setModel", &D::ClassType::setModel);
    _d.CPGF_MD_TEMPLATE _method("model", &D::ClassType::model);
    _d.CPGF_MD_TEMPLATE _method("setItemDelegate", &D::ClassType::setItemDelegate);
    _d.CPGF_MD_TEMPLATE _method("itemDelegate", &D::ClassType::itemDelegate);
    _d.CPGF_MD_TEMPLATE _method("setRootIndex", &D::ClassType::setRootIndex);
    _d.CPGF_MD_TEMPLATE _method("rootIndex", &D::ClassType::rootIndex);
    _d.CPGF_MD_TEMPLATE _method("setOrientation", &D::ClassType::setOrientation);
    _d.CPGF_MD_TEMPLATE _method("orientation", &D::ClassType::orientation);
    _d.CPGF_MD_TEMPLATE _method("setSubmitPolicy", &D::ClassType::setSubmitPolicy);
    _d.CPGF_MD_TEMPLATE _method("submitPolicy", &D::ClassType::submitPolicy);
    _d.CPGF_MD_TEMPLATE _method("addMapping", (void (D::ClassType::*) (QWidget *, int))&D::ClassType::addMapping);
    _d.CPGF_MD_TEMPLATE _method("addMapping", (void (D::ClassType::*) (QWidget *, int, const QByteArray &))&D::ClassType::addMapping, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("removeMapping", &D::ClassType::removeMapping);
    _d.CPGF_MD_TEMPLATE _method("mappedSection", &D::ClassType::mappedSection);
    _d.CPGF_MD_TEMPLATE _method("mappedPropertyName", &D::ClassType::mappedPropertyName);
    _d.CPGF_MD_TEMPLATE _method("mappedWidgetAt", &D::ClassType::mappedWidgetAt);
    _d.CPGF_MD_TEMPLATE _method("clearMapping", &D::ClassType::clearMapping);
    _d.CPGF_MD_TEMPLATE _method("currentIndex", &D::ClassType::currentIndex);
    _d.CPGF_MD_TEMPLATE _method("revert", &D::ClassType::revert);
    _d.CPGF_MD_TEMPLATE _method("submit", &D::ClassType::submit);
    _d.CPGF_MD_TEMPLATE _method("toFirst", &D::ClassType::toFirst);
    _d.CPGF_MD_TEMPLATE _method("toLast", &D::ClassType::toLast);
    _d.CPGF_MD_TEMPLATE _method("toNext", &D::ClassType::toNext);
    _d.CPGF_MD_TEMPLATE _method("toPrevious", &D::ClassType::toPrevious);
    _d.CPGF_MD_TEMPLATE _method("setCurrentIndex", &D::ClassType::setCurrentIndex);
    _d.CPGF_MD_TEMPLATE _method("setCurrentModelIndex", &D::ClassType::setCurrentModelIndex);
    _d.CPGF_MD_TEMPLATE _method("currentIndexChanged", &D::ClassType::currentIndexChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::SubmitPolicy>("SubmitPolicy")
        ._element("AutoSubmit", D::ClassType::AutoSubmit)
        ._element("ManualSubmit", D::ClassType::ManualSubmit)
    ;
}


class QDataWidgetMapperWrapper : public QDataWidgetMapper, public cpgf::GScriptWrapper {
public:
    
    QDataWidgetMapperWrapper(QObject * parent = 0)
        : QDataWidgetMapper(parent) {}
    
    void setCurrentIndex(int index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setCurrentIndex"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, index);
            return;
        }
        QDataWidgetMapper::setCurrentIndex(index);
    }
    void super_setCurrentIndex(int index)
    {
        QDataWidgetMapper::setCurrentIndex(index);
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
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
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
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QDataWidgetMapper::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QDataWidgetMapper::qt_metacall(__arg0, __arg1, __arg2);
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
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
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
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QDataWidgetMapper::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QDataWidgetMapper::qt_metacast(__arg0);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QDataWidgetMapper::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QDataWidgetMapper::metaObject();
    }
    template <typename D>
    static void cpgf__register(const cpgf::GMetaDataConfigFlags & config, D _d)
    {
        (void)config; (void)_d; (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("super_setCurrentIndex", (void (D::ClassType::*) (int))&D::ClassType::super_setCurrentIndex);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
    }
};


template <typename D>
void buildMetaClass_QDataWidgetMapperWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    QDataWidgetMapperWrapper::cpgf__register(config, _d);
    
    buildMetaClass_QDataWidgetMapper<D>(config, _d);
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
