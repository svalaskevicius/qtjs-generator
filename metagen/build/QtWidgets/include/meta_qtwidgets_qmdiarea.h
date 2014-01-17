// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QMDIAREA_H
#define __META_QTWIDGETS_QMDIAREA_H


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
void buildMetaClass_QMdiArea(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("minimumSizeHint", &D::ClassType::minimumSizeHint);
    _d.CPGF_MD_TEMPLATE _method("currentSubWindow", &D::ClassType::currentSubWindow);
    _d.CPGF_MD_TEMPLATE _method("activeSubWindow", &D::ClassType::activeSubWindow);
    _d.CPGF_MD_TEMPLATE _method("subWindowList", &D::ClassType::subWindowList)
        ._default(copyVariantFromCopyable(QMdiArea::CreationOrder))
    ;
    _d.CPGF_MD_TEMPLATE _method("addSubWindow", &D::ClassType::addSubWindow)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeSubWindow", &D::ClassType::removeSubWindow);
    _d.CPGF_MD_TEMPLATE _method("background", &D::ClassType::background);
    _d.CPGF_MD_TEMPLATE _method("setBackground", &D::ClassType::setBackground, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("activationOrder", &D::ClassType::activationOrder);
    _d.CPGF_MD_TEMPLATE _method("setActivationOrder", &D::ClassType::setActivationOrder);
    _d.CPGF_MD_TEMPLATE _method("setOption", &D::ClassType::setOption)
        ._default(copyVariantFromCopyable(true))
    ;
    _d.CPGF_MD_TEMPLATE _method("testOption", &D::ClassType::testOption);
    _d.CPGF_MD_TEMPLATE _method("setViewMode", &D::ClassType::setViewMode);
    _d.CPGF_MD_TEMPLATE _method("viewMode", &D::ClassType::viewMode);
    _d.CPGF_MD_TEMPLATE _method("documentMode", &D::ClassType::documentMode);
    _d.CPGF_MD_TEMPLATE _method("setDocumentMode", &D::ClassType::setDocumentMode);
    _d.CPGF_MD_TEMPLATE _method("setTabsClosable", &D::ClassType::setTabsClosable);
    _d.CPGF_MD_TEMPLATE _method("tabsClosable", &D::ClassType::tabsClosable);
    _d.CPGF_MD_TEMPLATE _method("setTabsMovable", &D::ClassType::setTabsMovable);
    _d.CPGF_MD_TEMPLATE _method("tabsMovable", &D::ClassType::tabsMovable);
    _d.CPGF_MD_TEMPLATE _method("setTabShape", &D::ClassType::setTabShape);
    _d.CPGF_MD_TEMPLATE _method("tabShape", &D::ClassType::tabShape);
    _d.CPGF_MD_TEMPLATE _method("setTabPosition", &D::ClassType::setTabPosition);
    _d.CPGF_MD_TEMPLATE _method("tabPosition", &D::ClassType::tabPosition);
    _d.CPGF_MD_TEMPLATE _method("subWindowActivated", &D::ClassType::subWindowActivated);
    _d.CPGF_MD_TEMPLATE _method("setActiveSubWindow", &D::ClassType::setActiveSubWindow);
    _d.CPGF_MD_TEMPLATE _method("tileSubWindows", &D::ClassType::tileSubWindows);
    _d.CPGF_MD_TEMPLATE _method("cascadeSubWindows", &D::ClassType::cascadeSubWindows);
    _d.CPGF_MD_TEMPLATE _method("closeActiveSubWindow", &D::ClassType::closeActiveSubWindow);
    _d.CPGF_MD_TEMPLATE _method("closeAllSubWindows", &D::ClassType::closeAllSubWindows);
    _d.CPGF_MD_TEMPLATE _method("activateNextSubWindow", &D::ClassType::activateNextSubWindow);
    _d.CPGF_MD_TEMPLATE _method("activatePreviousSubWindow", &D::ClassType::activatePreviousSubWindow);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AreaOption>("AreaOption")
        ._element("DontMaximizeSubWindowOnActivation", D::ClassType::DontMaximizeSubWindowOnActivation)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::WindowOrder>("WindowOrder")
        ._element("CreationOrder", D::ClassType::CreationOrder)
        ._element("StackingOrder", D::ClassType::StackingOrder)
        ._element("ActivationHistoryOrder", D::ClassType::ActivationHistoryOrder)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ViewMode>("ViewMode")
        ._element("SubWindowView", D::ClassType::SubWindowView)
        ._element("TabbedView", D::ClassType::TabbedView)
    ;
}


class QMdiAreaWrapper : public QMdiArea, public cpgf::GScriptWrapper {
public:
    
    QMdiAreaWrapper(QWidget * parent = 0)
        : QMdiArea(parent) {}
    
    QSize viewportSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewportSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
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
        QMdiArea::scrollContentsBy(dx, dy);
    }
    void super_scrollContentsBy(int dx, int dy)
    {
        QMdiArea::scrollContentsBy(dx, dy);
    }
    
    void wheelEvent(QWheelEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("wheelEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::wheelEvent(__arg0);
    }
    void super_wheelEvent(QWheelEvent * __arg0)
    {
        QAbstractScrollArea::wheelEvent(__arg0);
    }
    
    void setViewportMargins(int left, int top, int right, int bottom)
    {
        QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
    }
    
    bool viewportEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewportEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, event));
        }
        return QMdiArea::viewportEvent(event);
    }
    bool super_viewportEvent(QEvent * event)
    {
        return QMdiArea::viewportEvent(event);
    }
    
    void showEvent(QShowEvent * showEvent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, showEvent);
            return;
        }
        QMdiArea::showEvent(showEvent);
    }
    void super_showEvent(QShowEvent * showEvent)
    {
        QMdiArea::showEvent(showEvent);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QMdiArea::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QMdiArea::qt_metacast(__arg0);
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
    
    void resizeEvent(QResizeEvent * resizeEvent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, resizeEvent);
            return;
        }
        QMdiArea::resizeEvent(resizeEvent);
    }
    void super_resizeEvent(QResizeEvent * resizeEvent)
    {
        QMdiArea::resizeEvent(resizeEvent);
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
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QWidget::metric(__arg0);
    }
    int super_metric(QPaintDevice::PaintDeviceMetric __arg0) const
    {
        return QWidget::metric(__arg0);
    }
    
    void focusInEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::focusInEvent(__arg0);
    }
    void super_focusInEvent(QFocusEvent * __arg0)
    {
        QWidget::focusInEvent(__arg0);
    }
    
    void contextMenuEvent(QContextMenuEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("contextMenuEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::contextMenuEvent(__arg0);
    }
    void super_contextMenuEvent(QContextMenuEvent * __arg0)
    {
        QAbstractScrollArea::contextMenuEvent(__arg0);
    }
    
    bool event(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, event));
        }
        return QMdiArea::event(event);
    }
    bool super_event(QEvent * event)
    {
        return QMdiArea::event(event);
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
    
    void dropEvent(QDropEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::dropEvent(__arg0);
    }
    void super_dropEvent(QDropEvent * __arg0)
    {
        QAbstractScrollArea::dropEvent(__arg0);
    }
    
    bool focusNextChild()
    {
        return QWidget::focusNextChild();
    }
    
    void timerEvent(QTimerEvent * timerEvent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, timerEvent);
            return;
        }
        QMdiArea::timerEvent(timerEvent);
    }
    void super_timerEvent(QTimerEvent * timerEvent)
    {
        QMdiArea::timerEvent(timerEvent);
    }
    
    void setViewportMargins(const QMargins & margins)
    {
        QAbstractScrollArea::setViewportMargins(margins);
    }
    
    void paintEvent(QPaintEvent * paintEvent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, paintEvent);
            return;
        }
        QMdiArea::paintEvent(paintEvent);
    }
    void super_paintEvent(QPaintEvent * paintEvent)
    {
        QMdiArea::paintEvent(paintEvent);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void destroy(bool destroyWindow = true, bool destroySubWindows = true)
    {
        QWidget::destroy(destroyWindow, destroySubWindows);
    }
    
    void mouseDoubleClickEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::mouseDoubleClickEvent(__arg0);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * __arg0)
    {
        QAbstractScrollArea::mouseDoubleClickEvent(__arg0);
    }
    
    void focusOutEvent(QFocusEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::focusOutEvent(__arg0);
    }
    void super_focusOutEvent(QFocusEvent * __arg0)
    {
        QWidget::focusOutEvent(__arg0);
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
    
    void changeEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("changeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QFrame::changeEvent(__arg0);
    }
    void super_changeEvent(QEvent * __arg0)
    {
        QFrame::changeEvent(__arg0);
    }
    
    bool hasHeightForWidth() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasHeightForWidth"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
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
            return cpgf::fromVariant<QPainter * >(cpgf::invokeScriptFunction(func.get(), this));
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
        QMdiArea::setupViewport(viewport);
    }
    void super_setupViewport(QWidget * viewport)
    {
        QMdiArea::setupViewport(viewport);
    }
    
    bool eventFilter(QObject * object, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, object, event));
        }
        return QMdiArea::eventFilter(object, event);
    }
    bool super_eventFilter(QObject * object, QEvent * event)
    {
        return QMdiArea::eventFilter(object, event);
    }
    
    QPaintDevice * redirected(QPoint * offset) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("redirected"));
        if(func)
        {
            return cpgf::fromVariant<QPaintDevice * >(cpgf::invokeScriptFunction(func.get(), this, offset));
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
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QMdiArea::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QMdiArea::qt_metacall(__arg0, __arg1, __arg2);
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
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
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
    
    void dragMoveEvent(QDragMoveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::dragMoveEvent(__arg0);
    }
    void super_dragMoveEvent(QDragMoveEvent * __arg0)
    {
        QAbstractScrollArea::dragMoveEvent(__arg0);
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
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, next));
        }
        return QWidget::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QWidget::focusNextPrevChild(next);
    }
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QMdiArea::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QMdiArea::sizeHint();
    }
    
    void childEvent(QChildEvent * childEvent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, childEvent);
            return;
        }
        QMdiArea::childEvent(childEvent);
    }
    void super_childEvent(QChildEvent * childEvent)
    {
        QMdiArea::childEvent(childEvent);
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
    
    void mouseMoveEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::mouseMoveEvent(__arg0);
    }
    void super_mouseMoveEvent(QMouseEvent * __arg0)
    {
        QAbstractScrollArea::mouseMoveEvent(__arg0);
    }
    
    void keyPressEvent(QKeyEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::keyPressEvent(__arg0);
    }
    void super_keyPressEvent(QKeyEvent * __arg0)
    {
        QAbstractScrollArea::keyPressEvent(__arg0);
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
        QWidget::inputMethodEvent(__arg0);
    }
    void super_inputMethodEvent(QInputMethodEvent * __arg0)
    {
        QWidget::inputMethodEvent(__arg0);
    }
    
    void dragEnterEvent(QDragEnterEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::dragEnterEvent(__arg0);
    }
    void super_dragEnterEvent(QDragEnterEvent * __arg0)
    {
        QAbstractScrollArea::dragEnterEvent(__arg0);
    }
    
    void mousePressEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::mousePressEvent(__arg0);
    }
    void super_mousePressEvent(QMouseEvent * __arg0)
    {
        QAbstractScrollArea::mousePressEvent(__arg0);
    }
    
    void drawFrame(QPainter * __arg0)
    {
        QFrame::drawFrame(__arg0);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery __arg0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QWidget::inputMethodQuery(__arg0);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery __arg0) const
    {
        return QWidget::inputMethodQuery(__arg0);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::dragLeaveEvent(__arg0);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * __arg0)
    {
        QAbstractScrollArea::dragLeaveEvent(__arg0);
    }
    
    bool nativeEvent(const QByteArray & eventType, void * message, long * result)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("nativeEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, eventType, message, result));
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
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QMdiArea::minimumSizeHint();
    }
    QSize super_minimumSizeHint() const
    {
        return QMdiArea::minimumSizeHint();
    }
    
    int devType() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("devType"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
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
    
    QPaintEngine * paintEngine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEngine"));
        if(func)
        {
            return cpgf::fromVariant<QPaintEngine * >(cpgf::invokeScriptFunction(func.get(), this));
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
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QMdiArea::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QMdiArea::metaObject();
    }
    
    void keyReleaseEvent(QKeyEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::keyReleaseEvent(__arg0);
    }
    void super_keyReleaseEvent(QKeyEvent * __arg0)
    {
        QWidget::keyReleaseEvent(__arg0);
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
    
    void mouseReleaseEvent(QMouseEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QAbstractScrollArea::mouseReleaseEvent(__arg0);
    }
    void super_mouseReleaseEvent(QMouseEvent * __arg0)
    {
        QAbstractScrollArea::mouseReleaseEvent(__arg0);
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
};


template <typename D>
void buildMetaClass_QMdiAreaWrapper(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    
    _d.CPGF_MD_TEMPLATE _method("viewportSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::viewportSizeHint);
    _d.CPGF_MD_TEMPLATE _method("scrollContentsBy", (void (D::ClassType::*) (int, int))&D::ClassType::scrollContentsBy);
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
    _d.CPGF_MD_TEMPLATE _method("setupViewport", (void (D::ClassType::*) (QWidget *))&D::ClassType::setupViewport);
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
    _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
    _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
    _d.CPGF_MD_TEMPLATE _method("nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
    _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
    _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
    _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
    _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
    _d.CPGF_MD_TEMPLATE _method("super_viewportSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_viewportSizeHint);
    _d.CPGF_MD_TEMPLATE _method("super_scrollContentsBy", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollContentsBy);
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
    _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
    _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
    _d.CPGF_MD_TEMPLATE _method("super_actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::super_actionEvent);
    _d.CPGF_MD_TEMPLATE _method("super_setVisible", (void (D::ClassType::*) (bool))&D::ClassType::super_setVisible);
    _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
    _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
    _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
    _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
    _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
    _d.CPGF_MD_TEMPLATE _method("super_nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::super_nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("super_minimumSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSizeHint);
    _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
    _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
    _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
    _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
    _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
    _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
    _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
    
    buildMetaClass_QMdiArea<D>(config, _d);
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
