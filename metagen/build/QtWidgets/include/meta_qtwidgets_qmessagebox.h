// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QMESSAGEBOX_H
#define CPGF_META_QTWIDGETS_QMESSAGEBOX_H


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
void buildMetaClass_QMessageBox(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QMessageBox::Icon, const QString &, const QString &, QMessageBox::StandardButtons, QWidget *, Qt::WindowFlags)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(Qt::Dialog|Qt::MSWindowsFixedSizeDialogHint))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QMessageBox::NoButton))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, const QString &, QMessageBox::Icon, int, int, int, QWidget *, Qt::WindowFlags)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::Dialog|Qt::MSWindowsFixedSizeDialogHint))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("addButton", (void (D::ClassType::*) (QAbstractButton *, QMessageBox::ButtonRole))&D::ClassType::addButton);
    _d.CPGF_MD_TEMPLATE _method("addButton", (QPushButton * (D::ClassType::*) (const QString &, QMessageBox::ButtonRole))&D::ClassType::addButton, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("addButton", (QPushButton * (D::ClassType::*) (QMessageBox::StandardButton))&D::ClassType::addButton);
    _d.CPGF_MD_TEMPLATE _method("removeButton", &D::ClassType::removeButton);
    _d.CPGF_MD_TEMPLATE _method("buttons", &D::ClassType::buttons);
    _d.CPGF_MD_TEMPLATE _method("buttonRole", &D::ClassType::buttonRole);
    _d.CPGF_MD_TEMPLATE _method("setStandardButtons", &D::ClassType::setStandardButtons);
    _d.CPGF_MD_TEMPLATE _method("standardButtons", &D::ClassType::standardButtons);
    _d.CPGF_MD_TEMPLATE _method("standardButton", &D::ClassType::standardButton);
    _d.CPGF_MD_TEMPLATE _method("button", &D::ClassType::button);
    _d.CPGF_MD_TEMPLATE _method("defaultButton", &D::ClassType::defaultButton);
    _d.CPGF_MD_TEMPLATE _method("setDefaultButton", (void (D::ClassType::*) (QPushButton *))&D::ClassType::setDefaultButton);
    _d.CPGF_MD_TEMPLATE _method("setDefaultButton", (void (D::ClassType::*) (QMessageBox::StandardButton))&D::ClassType::setDefaultButton);
    _d.CPGF_MD_TEMPLATE _method("escapeButton", &D::ClassType::escapeButton);
    _d.CPGF_MD_TEMPLATE _method("setEscapeButton", (void (D::ClassType::*) (QAbstractButton *))&D::ClassType::setEscapeButton);
    _d.CPGF_MD_TEMPLATE _method("setEscapeButton", (void (D::ClassType::*) (QMessageBox::StandardButton))&D::ClassType::setEscapeButton);
    _d.CPGF_MD_TEMPLATE _method("clickedButton", &D::ClassType::clickedButton);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _method("setIcon", &D::ClassType::setIcon);
    _d.CPGF_MD_TEMPLATE _method("iconPixmap", &D::ClassType::iconPixmap, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _method("setIconPixmap", &D::ClassType::setIconPixmap);
    _d.CPGF_MD_TEMPLATE _method("textFormat", &D::ClassType::textFormat);
    _d.CPGF_MD_TEMPLATE _method("setTextFormat", &D::ClassType::setTextFormat);
    _d.CPGF_MD_TEMPLATE _method("setTextInteractionFlags", &D::ClassType::setTextInteractionFlags);
    _d.CPGF_MD_TEMPLATE _method("textInteractionFlags", &D::ClassType::textInteractionFlags);
    _d.CPGF_MD_TEMPLATE _method("setCheckBox", &D::ClassType::setCheckBox);
    _d.CPGF_MD_TEMPLATE _method("checkBox", &D::ClassType::checkBox);
    _d.CPGF_MD_TEMPLATE _method("buttonText", &D::ClassType::buttonText);
    _d.CPGF_MD_TEMPLATE _method("setButtonText", &D::ClassType::setButtonText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("informativeText", &D::ClassType::informativeText);
    _d.CPGF_MD_TEMPLATE _method("setInformativeText", &D::ClassType::setInformativeText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("detailedText", &D::ClassType::detailedText);
    _d.CPGF_MD_TEMPLATE _method("setDetailedText", &D::ClassType::setDetailedText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setWindowTitle", &D::ClassType::setWindowTitle, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setWindowModality", &D::ClassType::setWindowModality);
    _d.CPGF_MD_TEMPLATE _method("buttonClicked", &D::ClassType::buttonClicked);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("information", (QMessageBox::StandardButton (*) (QWidget *, const QString &, const QString &, QMessageBox::StandardButtons, QMessageBox::StandardButton))&D::ClassType::information, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QMessageBox::NoButton))
        ._default(copyVariantFromCopyable(QMessageBox::Ok))
    ;
    _d.CPGF_MD_TEMPLATE _method("question", (QMessageBox::StandardButton (*) (QWidget *, const QString &, const QString &, QMessageBox::StandardButtons, QMessageBox::StandardButton))&D::ClassType::question, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QMessageBox::NoButton))
        ._default(copyVariantFromCopyable(QMessageBox::StandardButtons(QMessageBox::Yes|QMessageBox::No)))
    ;
    _d.CPGF_MD_TEMPLATE _method("warning", (QMessageBox::StandardButton (*) (QWidget *, const QString &, const QString &, QMessageBox::StandardButtons, QMessageBox::StandardButton))&D::ClassType::warning, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QMessageBox::NoButton))
        ._default(copyVariantFromCopyable(QMessageBox::Ok))
    ;
    _d.CPGF_MD_TEMPLATE _method("critical", (QMessageBox::StandardButton (*) (QWidget *, const QString &, const QString &, QMessageBox::StandardButtons, QMessageBox::StandardButton))&D::ClassType::critical, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QMessageBox::NoButton))
        ._default(copyVariantFromCopyable(QMessageBox::Ok))
    ;
    _d.CPGF_MD_TEMPLATE _method("about", &D::ClassType::about, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("aboutQt", &D::ClassType::aboutQt, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("information", (int (*) (QWidget *, const QString &, const QString &, int, int, int))&D::ClassType::information, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("information", (int (*) (QWidget *, const QString &, const QString &, const QString &, const QString &, const QString &, int, int))&D::ClassType::information, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("information", (QMessageBox::StandardButton (*) (QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton))&D::ClassType::information, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(QMessageBox::NoButton))
    ;
    _d.CPGF_MD_TEMPLATE _method("question", (int (*) (QWidget *, const QString &, const QString &, int, int, int))&D::ClassType::question, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("question", (int (*) (QWidget *, const QString &, const QString &, const QString &, const QString &, const QString &, int, int))&D::ClassType::question, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("question", (int (*) (QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton))&D::ClassType::question, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("warning", (int (*) (QWidget *, const QString &, const QString &, int, int, int))&D::ClassType::warning, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("warning", (int (*) (QWidget *, const QString &, const QString &, const QString &, const QString &, const QString &, int, int))&D::ClassType::warning, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("warning", (int (*) (QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton))&D::ClassType::warning, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("critical", (int (*) (QWidget *, const QString &, const QString &, int, int, int))&D::ClassType::critical, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("critical", (int (*) (QWidget *, const QString &, const QString &, const QString &, const QString &, const QString &, int, int))&D::ClassType::critical, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2>, cpgf::GMetaRuleCopyConstReference<3>, cpgf::GMetaRuleCopyConstReference<4>, cpgf::GMetaRuleCopyConstReference<5> >())
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(QString()))
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("critical", (int (*) (QWidget *, const QString &, const QString &, QMessageBox::StandardButton, QMessageBox::StandardButton))&D::ClassType::critical, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >());
    _d.CPGF_MD_TEMPLATE _method("standardIcon", &D::ClassType::standardIcon, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Icon>("Icon")
        ._element("NoIcon", D::ClassType::NoIcon)
        ._element("Information", D::ClassType::Information)
        ._element("Warning", D::ClassType::Warning)
        ._element("Critical", D::ClassType::Critical)
        ._element("Question", D::ClassType::Question)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ButtonRole>("ButtonRole")
        ._element("InvalidRole", D::ClassType::InvalidRole)
        ._element("AcceptRole", D::ClassType::AcceptRole)
        ._element("RejectRole", D::ClassType::RejectRole)
        ._element("DestructiveRole", D::ClassType::DestructiveRole)
        ._element("ActionRole", D::ClassType::ActionRole)
        ._element("HelpRole", D::ClassType::HelpRole)
        ._element("YesRole", D::ClassType::YesRole)
        ._element("NoRole", D::ClassType::NoRole)
        ._element("ResetRole", D::ClassType::ResetRole)
        ._element("ApplyRole", D::ClassType::ApplyRole)
        ._element("NRoles", D::ClassType::NRoles)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::StandardButton>("StandardButton")
        ._element("NoButton", D::ClassType::NoButton)
        ._element("Ok", D::ClassType::Ok)
        ._element("Save", D::ClassType::Save)
        ._element("SaveAll", D::ClassType::SaveAll)
        ._element("Open", D::ClassType::Open)
        ._element("Yes", D::ClassType::Yes)
        ._element("YesToAll", D::ClassType::YesToAll)
        ._element("No", D::ClassType::No)
        ._element("NoToAll", D::ClassType::NoToAll)
        ._element("Abort", D::ClassType::Abort)
        ._element("Retry", D::ClassType::Retry)
        ._element("Ignore", D::ClassType::Ignore)
        ._element("Close", D::ClassType::Close)
        ._element("Cancel", D::ClassType::Cancel)
        ._element("Discard", D::ClassType::Discard)
        ._element("Help", D::ClassType::Help)
        ._element("Apply", D::ClassType::Apply)
        ._element("Reset", D::ClassType::Reset)
        ._element("RestoreDefaults", D::ClassType::RestoreDefaults)
        ._element("FirstButton", D::ClassType::FirstButton)
        ._element("LastButton", D::ClassType::LastButton)
        ._element("YesAll", D::ClassType::YesAll)
        ._element("NoAll", D::ClassType::NoAll)
        ._element("Default", D::ClassType::Default)
        ._element("Escape", D::ClassType::Escape)
        ._element("FlagMask", D::ClassType::FlagMask)
        ._element("ButtonMask", D::ClassType::ButtonMask)
    ;
    {
        GDefineMetaClass<QFlags<typename QMessageBox::StandardButton > > _t_d = GDefineMetaClass<QFlags<typename QMessageBox::StandardButton > >::lazyDeclare("StandardButtons", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QMessageBox::StandardButton > >, typename QMessageBox::StandardButton >);
        _d._class(_t_d);
    }
}


class QMessageBoxWrapper : public QMessageBox, public cpgf::GScriptWrapper {
public:
    
    QMessageBoxWrapper(QWidget * parent = 0)
        : QMessageBox(parent) {}
    
    QMessageBoxWrapper(QMessageBox::Icon icon, const QString & title, const QString & text, QMessageBox::StandardButtons buttons = QMessageBox::NoButton, QWidget * parent = 0, Qt::WindowFlags flags = Qt::Dialog|Qt::MSWindowsFixedSizeDialogHint)
        : QMessageBox(icon, title, text, buttons, parent, flags) {}
    
    QMessageBoxWrapper(const QString & title, const QString & text, QMessageBox::Icon icon, int button0, int button1, int button2, QWidget * parent = 0, Qt::WindowFlags f = Qt::Dialog|Qt::MSWindowsFixedSizeDialogHint)
        : QMessageBox(title, text, icon, button0, button1, button2, parent, f) {}
    
    void mouseDoubleClickEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseDoubleClickEvent(__arg0);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseDoubleClickEvent(__arg0);
    }
    
    QPaintEngine * paintEngine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEngine"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::paintEngine();
    }
    QPaintEngine * super_paintEngine() const
    {
        return QWidget::paintEngine();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void keyReleaseEvent(QKeyEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::keyReleaseEvent(__arg0);
    }
    void super_keyReleaseEvent(QKeyEvent * __arg0)
    {
        QWidget::keyReleaseEvent(__arg0);
    }
    
    void updateMicroFocus()
    {
        QWidget::updateMicroFocus();
    }
    
    void resizeEvent(QResizeEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QMessageBox::resizeEvent(event);
    }
    void super_resizeEvent(QResizeEvent * event)
    {
        QMessageBox::resizeEvent(event);
    }
    
    void wheelEvent(QWheelEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::wheelEvent(__arg0);
    }
    void super_wheelEvent(QWheelEvent * __arg0)
    {
        QWidget::wheelEvent(__arg0);
    }
    
    void showEvent(QShowEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QMessageBox::showEvent(event);
    }
    void super_showEvent(QShowEvent * event)
    {
        QMessageBox::showEvent(event);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    QSize minimumSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QDialog::minimumSizeHint();
    }
    QSize super_minimumSizeHint() const
    {
        return QDialog::minimumSizeHint();
    }
    
    void mouseReleaseEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseReleaseEvent(__arg0);
    }
    void super_mouseReleaseEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseReleaseEvent(__arg0);
    }
    
    void focusOutEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::focusOutEvent(__arg0);
    }
    void super_focusOutEvent(QFocusEvent * __arg0)
    {
        QWidget::focusOutEvent(__arg0);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void dragEnterEvent(QDragEnterEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragEnterEvent(__arg0);
    }
    void super_dragEnterEvent(QDragEnterEvent * __arg0)
    {
        QWidget::dragEnterEvent(__arg0);
    }
    
    void hideEvent(QHideEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hideEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::hideEvent(__arg0);
    }
    void super_hideEvent(QHideEvent * __arg0)
    {
        QWidget::hideEvent(__arg0);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QDialog::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QDialog::eventFilter(__arg0, __arg1);
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
    
    void contextMenuEvent(QContextMenuEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QDialog::contextMenuEvent(__arg0);
    }
    void super_contextMenuEvent(QContextMenuEvent * __arg0)
    {
        QDialog::contextMenuEvent(__arg0);
    }
    
    void done(int __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("done"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QDialog::done(__arg0);
    }
    void super_done(int __arg0)
    {
        QDialog::done(__arg0);
    }
    
    void enterEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("enterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::enterEvent(__arg0);
    }
    void super_enterEvent(QEvent * __arg0)
    {
        QWidget::enterEvent(__arg0);
    }
    
    void inputMethodEvent(QInputMethodEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::inputMethodEvent(__arg0);
    }
    void super_inputMethodEvent(QInputMethodEvent * __arg0)
    {
        QWidget::inputMethodEvent(__arg0);
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
    
    bool focusPreviousChild()
    {
        return QWidget::focusPreviousChild();
    }
    
    void dropEvent(QDropEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dropEvent(__arg0);
    }
    void super_dropEvent(QDropEvent * __arg0)
    {
        QWidget::dropEvent(__arg0);
    }
    
    void closeEvent(QCloseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QMessageBox::closeEvent(event);
    }
    void super_closeEvent(QCloseEvent * event)
    {
        QMessageBox::closeEvent(event);
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
    
    void focusInEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::focusInEvent(__arg0);
    }
    void super_focusInEvent(QFocusEvent * __arg0)
    {
        QWidget::focusInEvent(__arg0);
    }
    
    QPaintDevice * redirected(QPoint * offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("redirected"));
        if(func)
        {
            return cpgf::fromVariant<QPaintDevice * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, offset).getValue());
        }
        return QWidget::redirected(offset);
    }
    QPaintDevice * super_redirected(QPoint * offset) const
    {
        return QWidget::redirected(offset);
    }
    
    void initPainter(QPainter * painter) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("initPainter"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, painter);
            return;
        }
        QWidget::initPainter(painter);
    }
    void super_initPainter(QPainter * painter) const
    {
        QWidget::initPainter(painter);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QMessageBox::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QMessageBox::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QMessageBox::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QMessageBox::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    int metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metric"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::metric(__arg0);
    }
    int super_metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        return QWidget::metric(__arg0);
    }
    
    QPainter * sharedPainter() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sharedPainter"));
        if(func)
        {
            return cpgf::fromVariant<QPainter * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::sharedPainter();
    }
    QPainter * super_sharedPainter() const
    {
        return QWidget::sharedPainter();
    }
    
    void adjustPosition(QWidget * __arg0)
    {
        QDialog::adjustPosition(__arg0);
    }
    
    void setVisible(bool visible)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setVisible"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, visible);
            return;
        }
        QDialog::setVisible(visible);
    }
    void super_setVisible(bool visible)
    {
        QDialog::setVisible(visible);
    }
    
    int exec()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("exec"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QDialog::exec();
    }
    int super_exec()
    {
        return QDialog::exec();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void leaveEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("leaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::leaveEvent(__arg0);
    }
    void super_leaveEvent(QEvent * __arg0)
    {
        QWidget::leaveEvent(__arg0);
    }
    
    void open()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("open"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QMessageBox::open();
    }
    void super_open()
    {
        QMessageBox::open();
    }
    
    void moveEvent(QMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::moveEvent(__arg0);
    }
    void super_moveEvent(QMoveEvent * __arg0)
    {
        QWidget::moveEvent(__arg0);
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
    
    bool nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("nativeEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, eventType, message, result).getValue());
        }
        return QWidget::nativeEvent(eventType, message, result);
    }
    bool super_nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        return QWidget::nativeEvent(eventType, message, result);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::inputMethodQuery(__arg0);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery __arg0) const
    {
        return QWidget::inputMethodQuery(__arg0);
    }
    
    void reject()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("reject"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QDialog::reject();
    }
    void super_reject()
    {
        QDialog::reject();
    }
    
    void dragMoveEvent(QDragMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragMoveEvent(__arg0);
    }
    void super_dragMoveEvent(QDragMoveEvent * __arg0)
    {
        QWidget::dragMoveEvent(__arg0);
    }
    
    void actionEvent(QActionEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("actionEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::actionEvent(__arg0);
    }
    void super_actionEvent(QActionEvent * __arg0)
    {
        QWidget::actionEvent(__arg0);
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
    
    void create(WId __arg0 = 0, bool initializeWindow = true, bool destroyOldWindow = true)
    {
        QWidget::create(__arg0, initializeWindow, destroyOldWindow);
    }
    
    bool focusNextPrevChild(bool next)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusNextPrevChild"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, next).getValue());
        }
        return QWidget::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QWidget::focusNextPrevChild(next);
    }
    
    void destroy(bool destroyWindow = true, bool destroySubWindows = true)
    {
        QWidget::destroy(destroyWindow, destroySubWindows);
    }
    
    void tabletEvent(QTabletEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("tabletEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::tabletEvent(__arg0);
    }
    void super_tabletEvent(QTabletEvent * __arg0)
    {
        QWidget::tabletEvent(__arg0);
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::hasHeightForWidth();
    }
    bool super_hasHeightForWidth() const
    {
        return QWidget::hasHeightForWidth();
    }
    
    void accept()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("accept"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QDialog::accept();
    }
    void super_accept()
    {
        QDialog::accept();
    }
    
    void changeEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QMessageBox::changeEvent(event);
    }
    void super_changeEvent(QEvent * event)
    {
        QMessageBox::changeEvent(event);
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, event);
            return;
        }
        QMessageBox::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QMessageBox::keyPressEvent(event);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QMessageBox::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QMessageBox::qt_metacast(__arg0);
    }
    
    bool focusNextChild()
    {
        return QWidget::focusNextChild();
    }
    
    bool event(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, e).getValue());
        }
        return QMessageBox::event(e);
    }
    bool super_event(QEvent * e)
    {
        return QMessageBox::event(e);
    }
    
    int devType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("devType"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QWidget::devType();
    }
    int super_devType() const
    {
        return QWidget::devType();
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QDialog::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QDialog::sizeHint();
    }
    
    void mouseMoveEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mouseMoveEvent(__arg0);
    }
    void super_mouseMoveEvent(QMouseEvent * __arg0)
    {
        QWidget::mouseMoveEvent(__arg0);
    }
    
    void paintEvent(QPaintEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::paintEvent(__arg0);
    }
    void super_paintEvent(QPaintEvent * __arg0)
    {
        QWidget::paintEvent(__arg0);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::dragLeaveEvent(__arg0);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        QWidget::dragLeaveEvent(__arg0);
    }
    
    int heightForWidth(int __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("heightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QWidget::heightForWidth(__arg0);
    }
    int super_heightForWidth(int __arg0) const
    {
        return QWidget::heightForWidth(__arg0);
    }
    
    void mousePressEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QWidget::mousePressEvent(__arg0);
    }
    void super_mousePressEvent(QMouseEvent * __arg0)
    {
        QWidget::mousePressEvent(__arg0);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::showEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::hideEvent);
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::enterEvent);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("focusPreviousChild", (bool (D::ClassType::*) ())&D::ClassType::focusPreviousChild);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::redirected);
        _d.CPGF_MD_TEMPLATE _method("initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::initPainter);
        _d.CPGF_MD_TEMPLATE _method("metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::metric);
        _d.CPGF_MD_TEMPLATE _method("sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("adjustPosition", (void (D::ClassType::*) (QWidget *))&D::ClassType::adjustPosition);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::moveEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::actionEvent);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("create", (void (D::ClassType::*) (WId, bool, bool))&D::ClassType::create)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("destroy", (void (D::ClassType::*) (bool, bool))&D::ClassType::destroy)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
        ;
        _d.CPGF_MD_TEMPLATE _method("tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::changeEvent);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("focusNextChild", (bool (D::ClassType::*) ())&D::ClassType::focusNextChild);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::paintEvent);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::super_resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::super_showEvent);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::super_hideEvent);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_done", (void (D::ClassType::*) (int))&D::ClassType::super_done);
        _d.CPGF_MD_TEMPLATE _method("super_enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_enterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::super_redirected);
        _d.CPGF_MD_TEMPLATE _method("super_initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::super_initPainter);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("super_setVisible", (void (D::ClassType::*) (bool))&D::ClassType::super_setVisible);
        _d.CPGF_MD_TEMPLATE _method("super_exec", (int (D::ClassType::*) ())&D::ClassType::super_exec);
        _d.CPGF_MD_TEMPLATE _method("super_leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_open", (void (D::ClassType::*) ())&D::ClassType::super_open);
        _d.CPGF_MD_TEMPLATE _method("super_moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::super_moveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::super_nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_reject", (void (D::ClassType::*) ())&D::ClassType::super_reject);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::super_actionEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::super_focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("super_tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::super_tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_accept", (void (D::ClassType::*) ())&D::ClassType::super_accept);
        _d.CPGF_MD_TEMPLATE _method("super_changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_changeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::super_paintEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
    }
};


template <typename D>
void buildMetaClass_QMessageBoxWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QMessageBoxWrapper::cpgf__register(_d);
    
    buildMetaClass_QMessageBox<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
