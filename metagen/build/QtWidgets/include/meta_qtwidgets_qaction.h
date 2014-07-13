// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QACTION_H
#define CPGF_META_QTWIDGETS_QACTION_H


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
void buildMetaClass_QAction(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QIcon &, const QString &, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setActionGroup", &D::ClassType::setActionGroup);
    _d.CPGF_MD_TEMPLATE _method("actionGroup", &D::ClassType::actionGroup);
    _d.CPGF_MD_TEMPLATE _method("setIcon", &D::ClassType::setIcon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setIconText", &D::ClassType::setIconText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("iconText", &D::ClassType::iconText);
    _d.CPGF_MD_TEMPLATE _method("setToolTip", &D::ClassType::setToolTip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toolTip", &D::ClassType::toolTip);
    _d.CPGF_MD_TEMPLATE _method("setStatusTip", &D::ClassType::setStatusTip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("statusTip", &D::ClassType::statusTip);
    _d.CPGF_MD_TEMPLATE _method("setWhatsThis", &D::ClassType::setWhatsThis, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("whatsThis", &D::ClassType::whatsThis);
    _d.CPGF_MD_TEMPLATE _method("setPriority", &D::ClassType::setPriority);
    _d.CPGF_MD_TEMPLATE _method("priority", &D::ClassType::priority);
    _d.CPGF_MD_TEMPLATE _method("menu", &D::ClassType::menu);
    _d.CPGF_MD_TEMPLATE _method("setMenu", &D::ClassType::setMenu);
    _d.CPGF_MD_TEMPLATE _method("setSeparator", &D::ClassType::setSeparator);
    _d.CPGF_MD_TEMPLATE _method("isSeparator", &D::ClassType::isSeparator);
    _d.CPGF_MD_TEMPLATE _method("setShortcut", &D::ClassType::setShortcut, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("shortcut", &D::ClassType::shortcut);
    _d.CPGF_MD_TEMPLATE _method("setShortcuts", (void (D::ClassType::*) (const QList< QKeySequence > &))&D::ClassType::setShortcuts);
    _d.CPGF_MD_TEMPLATE _method("setShortcuts", (void (D::ClassType::*) (QKeySequence::StandardKey))&D::ClassType::setShortcuts);
    _d.CPGF_MD_TEMPLATE _method("shortcuts", &D::ClassType::shortcuts);
    _d.CPGF_MD_TEMPLATE _method("setShortcutContext", &D::ClassType::setShortcutContext);
    _d.CPGF_MD_TEMPLATE _method("shortcutContext", &D::ClassType::shortcutContext);
    _d.CPGF_MD_TEMPLATE _method("setAutoRepeat", &D::ClassType::setAutoRepeat);
    _d.CPGF_MD_TEMPLATE _method("autoRepeat", &D::ClassType::autoRepeat);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setCheckable", &D::ClassType::setCheckable);
    _d.CPGF_MD_TEMPLATE _method("isCheckable", &D::ClassType::isCheckable);
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("setData", &D::ClassType::setData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("isChecked", &D::ClassType::isChecked);
    _d.CPGF_MD_TEMPLATE _method("isEnabled", &D::ClassType::isEnabled);
    _d.CPGF_MD_TEMPLATE _method("isVisible", &D::ClassType::isVisible);
    _d.CPGF_MD_TEMPLATE _method("activate", &D::ClassType::activate);
    _d.CPGF_MD_TEMPLATE _method("showStatusText", &D::ClassType::showStatusText)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setMenuRole", &D::ClassType::setMenuRole);
    _d.CPGF_MD_TEMPLATE _method("menuRole", &D::ClassType::menuRole);
    _d.CPGF_MD_TEMPLATE _method("setIconVisibleInMenu", &D::ClassType::setIconVisibleInMenu);
    _d.CPGF_MD_TEMPLATE _method("isIconVisibleInMenu", &D::ClassType::isIconVisibleInMenu);
    _d.CPGF_MD_TEMPLATE _method("parentWidget", &D::ClassType::parentWidget);
    _d.CPGF_MD_TEMPLATE _method("associatedWidgets", &D::ClassType::associatedWidgets);
    _d.CPGF_MD_TEMPLATE _method("associatedGraphicsWidgets", &D::ClassType::associatedGraphicsWidgets);
    _d.CPGF_MD_TEMPLATE _method("trigger", &D::ClassType::trigger);
    _d.CPGF_MD_TEMPLATE _method("hover", &D::ClassType::hover);
    _d.CPGF_MD_TEMPLATE _method("setChecked", &D::ClassType::setChecked);
    _d.CPGF_MD_TEMPLATE _method("toggle", &D::ClassType::toggle);
    _d.CPGF_MD_TEMPLATE _method("setEnabled", &D::ClassType::setEnabled);
    _d.CPGF_MD_TEMPLATE _method("setDisabled", &D::ClassType::setDisabled);
    _d.CPGF_MD_TEMPLATE _method("setVisible", &D::ClassType::setVisible);
    _d.CPGF_MD_TEMPLATE _method("changed", &D::ClassType::changed);
    _d.CPGF_MD_TEMPLATE _method("triggered", &D::ClassType::triggered)
        ._default(copyVariantFromCopyable(false))
    ;
    _d.CPGF_MD_TEMPLATE _method("hovered", &D::ClassType::hovered);
    _d.CPGF_MD_TEMPLATE _method("toggled", &D::ClassType::toggled);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::MenuRole>("MenuRole")
        ._element("NoRole", D::ClassType::NoRole)
        ._element("TextHeuristicRole", D::ClassType::TextHeuristicRole)
        ._element("ApplicationSpecificRole", D::ClassType::ApplicationSpecificRole)
        ._element("AboutQtRole", D::ClassType::AboutQtRole)
        ._element("AboutRole", D::ClassType::AboutRole)
        ._element("PreferencesRole", D::ClassType::PreferencesRole)
        ._element("QuitRole", D::ClassType::QuitRole)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Priority>("Priority")
        ._element("LowPriority", D::ClassType::LowPriority)
        ._element("NormalPriority", D::ClassType::NormalPriority)
        ._element("HighPriority", D::ClassType::HighPriority)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ActionEvent>("ActionEvent")
        ._element("Trigger", D::ClassType::Trigger)
        ._element("Hover", D::ClassType::Hover)
    ;
}


class QActionWrapper : public QAction, public cpgf::GScriptWrapper {
public:
    
    QActionWrapper(QObject * parent)
        : QAction(parent) {}
    
    QActionWrapper(const QString & text, QObject * parent)
        : QAction(text, parent) {}
    
    QActionWrapper(const QIcon & icon, const QString & text, QObject * parent)
        : QAction(icon, text, parent) {}
    
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
        return QAction::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QAction::qt_metacast(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QAction::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QAction::event(__arg0);
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
        return QAction::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QAction::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QAction::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QAction::qt_metacall(__arg0, __arg1, __arg2);
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
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
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
void buildMetaClass_QActionWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QActionWrapper::cpgf__register(_d);
    
    buildMetaClass_QAction<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
