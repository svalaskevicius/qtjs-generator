// Auto generated file, don't modify.

#ifndef CPGF_META_QTWIDGETS_QTABLEWIDGET_H
#define CPGF_META_QTWIDGETS_QTABLEWIDGET_H


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
void buildMetaClass_Global_qtablewidget(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QTableWidgetItem &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QTableWidgetItem &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleCopyConstReference<1> >());
}


template <typename D>
void buildMetaClass_QTableWidget(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QWidget *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, QWidget *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setRowCount", &D::ClassType::setRowCount);
    _d.CPGF_MD_TEMPLATE _method("rowCount", &D::ClassType::rowCount);
    _d.CPGF_MD_TEMPLATE _method("setColumnCount", &D::ClassType::setColumnCount);
    _d.CPGF_MD_TEMPLATE _method("columnCount", &D::ClassType::columnCount);
    _d.CPGF_MD_TEMPLATE _method("row", &D::ClassType::row);
    _d.CPGF_MD_TEMPLATE _method("column", &D::ClassType::column);
    _d.CPGF_MD_TEMPLATE _method("item", &D::ClassType::item);
    _d.CPGF_MD_TEMPLATE _method("setItem", &D::ClassType::setItem);
    _d.CPGF_MD_TEMPLATE _method("takeItem", &D::ClassType::takeItem);
    _d.CPGF_MD_TEMPLATE _method("verticalHeaderItem", &D::ClassType::verticalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("setVerticalHeaderItem", &D::ClassType::setVerticalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("takeVerticalHeaderItem", &D::ClassType::takeVerticalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("horizontalHeaderItem", &D::ClassType::horizontalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalHeaderItem", &D::ClassType::setHorizontalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("takeHorizontalHeaderItem", &D::ClassType::takeHorizontalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("setVerticalHeaderLabels", &D::ClassType::setVerticalHeaderLabels, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setHorizontalHeaderLabels", &D::ClassType::setHorizontalHeaderLabels, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("currentRow", &D::ClassType::currentRow);
    _d.CPGF_MD_TEMPLATE _method("currentColumn", &D::ClassType::currentColumn);
    _d.CPGF_MD_TEMPLATE _method("currentItem", &D::ClassType::currentItem);
    _d.CPGF_MD_TEMPLATE _method("setCurrentItem", (void (D::ClassType::*) (QTableWidgetItem *))&D::ClassType::setCurrentItem);
    _d.CPGF_MD_TEMPLATE _method("setCurrentItem", (void (D::ClassType::*) (QTableWidgetItem *, QItemSelectionModel::SelectionFlags))&D::ClassType::setCurrentItem);
    _d.CPGF_MD_TEMPLATE _method("setCurrentCell", (void (D::ClassType::*) (int, int))&D::ClassType::setCurrentCell);
    _d.CPGF_MD_TEMPLATE _method("setCurrentCell", (void (D::ClassType::*) (int, int, QItemSelectionModel::SelectionFlags))&D::ClassType::setCurrentCell);
    _d.CPGF_MD_TEMPLATE _method("sortItems", &D::ClassType::sortItems)
        ._default(copyVariantFromCopyable(Qt::AscendingOrder))
    ;
    _d.CPGF_MD_TEMPLATE _method("setSortingEnabled", &D::ClassType::setSortingEnabled);
    _d.CPGF_MD_TEMPLATE _method("isSortingEnabled", &D::ClassType::isSortingEnabled);
    _d.CPGF_MD_TEMPLATE _method("editItem", &D::ClassType::editItem);
    _d.CPGF_MD_TEMPLATE _method("openPersistentEditor", &D::ClassType::openPersistentEditor);
    _d.CPGF_MD_TEMPLATE _method("closePersistentEditor", &D::ClassType::closePersistentEditor);
    _d.CPGF_MD_TEMPLATE _method("cellWidget", &D::ClassType::cellWidget);
    _d.CPGF_MD_TEMPLATE _method("setCellWidget", &D::ClassType::setCellWidget);
    _d.CPGF_MD_TEMPLATE _method("removeCellWidget", &D::ClassType::removeCellWidget);
    _d.CPGF_MD_TEMPLATE _method("isItemSelected", &D::ClassType::isItemSelected);
    _d.CPGF_MD_TEMPLATE _method("setItemSelected", &D::ClassType::setItemSelected);
    _d.CPGF_MD_TEMPLATE _method("setRangeSelected", &D::ClassType::setRangeSelected);
    _d.CPGF_MD_TEMPLATE _method("selectedRanges", &D::ClassType::selectedRanges);
    _d.CPGF_MD_TEMPLATE _method("selectedItems", &D::ClassType::selectedItems);
    _d.CPGF_MD_TEMPLATE _method("findItems", &D::ClassType::findItems, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("visualRow", &D::ClassType::visualRow);
    _d.CPGF_MD_TEMPLATE _method("visualColumn", &D::ClassType::visualColumn);
    _d.CPGF_MD_TEMPLATE _method("itemAt", (QTableWidgetItem * (D::ClassType::*) (const QPoint &) const)&D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("itemAt", (QTableWidgetItem * (D::ClassType::*) (int, int) const)&D::ClassType::itemAt);
    _d.CPGF_MD_TEMPLATE _method("visualItemRect", &D::ClassType::visualItemRect);
    _d.CPGF_MD_TEMPLATE _method("itemPrototype", &D::ClassType::itemPrototype);
    _d.CPGF_MD_TEMPLATE _method("setItemPrototype", &D::ClassType::setItemPrototype);
    _d.CPGF_MD_TEMPLATE _method("scrollToItem", &D::ClassType::scrollToItem)
        ._default(copyVariantFromCopyable(QAbstractItemView::EnsureVisible))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertRow", &D::ClassType::insertRow);
    _d.CPGF_MD_TEMPLATE _method("insertColumn", &D::ClassType::insertColumn);
    _d.CPGF_MD_TEMPLATE _method("removeRow", &D::ClassType::removeRow);
    _d.CPGF_MD_TEMPLATE _method("removeColumn", &D::ClassType::removeColumn);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("clearContents", &D::ClassType::clearContents);
    _d.CPGF_MD_TEMPLATE _method("itemPressed", &D::ClassType::itemPressed);
    _d.CPGF_MD_TEMPLATE _method("itemClicked", &D::ClassType::itemClicked);
    _d.CPGF_MD_TEMPLATE _method("itemDoubleClicked", &D::ClassType::itemDoubleClicked);
    _d.CPGF_MD_TEMPLATE _method("itemActivated", &D::ClassType::itemActivated);
    _d.CPGF_MD_TEMPLATE _method("itemEntered", &D::ClassType::itemEntered);
    _d.CPGF_MD_TEMPLATE _method("itemChanged", &D::ClassType::itemChanged);
    _d.CPGF_MD_TEMPLATE _method("currentItemChanged", &D::ClassType::currentItemChanged);
    _d.CPGF_MD_TEMPLATE _method("itemSelectionChanged", &D::ClassType::itemSelectionChanged);
    _d.CPGF_MD_TEMPLATE _method("cellPressed", &D::ClassType::cellPressed);
    _d.CPGF_MD_TEMPLATE _method("cellClicked", &D::ClassType::cellClicked);
    _d.CPGF_MD_TEMPLATE _method("cellDoubleClicked", &D::ClassType::cellDoubleClicked);
    _d.CPGF_MD_TEMPLATE _method("cellActivated", &D::ClassType::cellActivated);
    _d.CPGF_MD_TEMPLATE _method("cellEntered", &D::ClassType::cellEntered);
    _d.CPGF_MD_TEMPLATE _method("cellChanged", &D::ClassType::cellChanged);
    _d.CPGF_MD_TEMPLATE _method("currentCellChanged", &D::ClassType::currentCellChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QTableWidgetWrapper : public QTableWidget, public cpgf::GScriptWrapper {
public:
    
    QTableWidgetWrapper(QWidget * parent = 0)
        : QTableWidget(parent) {}
    
    QTableWidgetWrapper(int rows, int columns, QWidget * parent = 0)
        : QTableWidget(rows, columns, parent) {}
    
    QRegion visualRegionForSelection(const QItemSelection & selection) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visualRegionForSelection"));
        if(func)
        {
            return cpgf::fromVariant<QRegion >(cpgf::invokeScriptFunction(func.get(), this, selection));
        }
        return QTableView::visualRegionForSelection(selection);
    }
    QRegion super_visualRegionForSelection(const QItemSelection & selection) const
    {
        return QTableView::visualRegionForSelection(selection);
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
    
    QAbstractItemView::DropIndicatorPosition dropIndicatorPosition() const
    {
        return QAbstractItemView::dropIndicatorPosition();
    }
    
    QStringList mimeTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mimeTypes"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QTableWidget::mimeTypes();
    }
    QStringList super_mimeTypes() const
    {
        return QTableWidget::mimeTypes();
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
    
    void executeDelayedItemsLayout()
    {
        QAbstractItemView::executeDelayedItemsLayout();
    }
    
    void resizeEvent(QResizeEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resizeEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::resizeEvent(event);
    }
    void super_resizeEvent(QResizeEvent * event)
    {
        QAbstractItemView::resizeEvent(event);
    }
    
    void scrollDirtyRegion(int dx, int dy)
    {
        QAbstractItemView::scrollDirtyRegion(dx, dy);
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
    
    void pressed(const QModelIndex & index)
    {
        QAbstractItemView::pressed(index);
    }
    
    void rowMoved(int row, int oldIndex, int newIndex)
    {
        QTableView::rowMoved(row, oldIndex, newIndex);
    }
    
    void keyboardSearch(const QString & search)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyboardSearch"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, search);
            return;
        }
        QAbstractItemView::keyboardSearch(search);
    }
    void super_keyboardSearch(const QString & search)
    {
        QAbstractItemView::keyboardSearch(search);
    }
    
    void verticalScrollbarAction(int action)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("verticalScrollbarAction"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, action);
            return;
        }
        QTableView::verticalScrollbarAction(action);
    }
    void super_verticalScrollbarAction(int action)
    {
        QTableView::verticalScrollbarAction(action);
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
    
    void dropEvent(QDropEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QTableWidget::dropEvent(event);
    }
    void super_dropEvent(QDropEvent * event)
    {
        QTableWidget::dropEvent(event);
    }
    
    void timerEvent(QTimerEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QTableView::timerEvent(event);
    }
    void super_timerEvent(QTimerEvent * event)
    {
        QTableView::timerEvent(event);
    }
    
    void commitData(QWidget * editor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("commitData"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, editor);
            return;
        }
        QAbstractItemView::commitData(editor);
    }
    void super_commitData(QWidget * editor)
    {
        QAbstractItemView::commitData(editor);
    }
    
    QModelIndex indexFromItem(QTableWidgetItem * item) const
    {
        return QTableWidget::indexFromItem(item);
    }
    
    void horizontalScrollbarValueChanged(int value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("horizontalScrollbarValueChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, value);
            return;
        }
        QAbstractItemView::horizontalScrollbarValueChanged(value);
    }
    void super_horizontalScrollbarValueChanged(int value)
    {
        QAbstractItemView::horizontalScrollbarValueChanged(value);
    }
    
    void mouseDoubleClickEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseDoubleClickEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::mouseDoubleClickEvent(event);
    }
    void super_mouseDoubleClickEvent(QMouseEvent * event)
    {
        QAbstractItemView::mouseDoubleClickEvent(event);
    }
    
    void create(WId __arg0 = 0, bool initializeWindow = true, bool destroyOldWindow = true)
    {
        QWidget::create(__arg0, initializeWindow, destroyOldWindow);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
        }
        return QAbstractScrollArea::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QAbstractScrollArea::eventFilter(__arg0, __arg1);
    }
    
    void updateEditorGeometries()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateEditorGeometries"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QAbstractItemView::updateEditorGeometries();
    }
    void super_updateEditorGeometries()
    {
        QAbstractItemView::updateEditorGeometries();
    }
    
    void setDirtyRegion(const QRegion & region)
    {
        QAbstractItemView::setDirtyRegion(region);
    }
    
    void entered(const QModelIndex & index)
    {
        QAbstractItemView::entered(index);
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
    
    void columnCountChanged(int oldCount, int newCount)
    {
        QTableView::columnCountChanged(oldCount, newCount);
    }
    
    QAbstractItemView::State state() const
    {
        return QAbstractItemView::state();
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
    
    void currentChanged(const QModelIndex & current, const QModelIndex & previous)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, current, previous);
            return;
        }
        QTableView::currentChanged(current, previous);
    }
    void super_currentChanged(const QModelIndex & current, const QModelIndex & previous)
    {
        QTableView::currentChanged(current, previous);
    }
    
    QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveCursor"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunction(func.get(), this, cursorAction, modifiers));
        }
        return QTableView::moveCursor(cursorAction, modifiers);
    }
    QModelIndex super_moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers)
    {
        return QTableView::moveCursor(cursorAction, modifiers);
    }
    
    void dragMoveEvent(QDragMoveEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::dragMoveEvent(event);
    }
    void super_dragMoveEvent(QDragMoveEvent * event)
    {
        QAbstractItemView::dragMoveEvent(event);
    }
    
    QPoint dirtyRegionOffset() const
    {
        return QAbstractItemView::dirtyRegionOffset();
    }
    
    QStyleOptionViewItem viewOptions() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewOptions"));
        if(func)
        {
            return cpgf::fromVariant<QStyleOptionViewItem >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QTableView::viewOptions();
    }
    QStyleOptionViewItem super_viewOptions() const
    {
        return QTableView::viewOptions();
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
    
    void editorDestroyed(QObject * editor)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("editorDestroyed"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, editor);
            return;
        }
        QAbstractItemView::editorDestroyed(editor);
    }
    void super_editorDestroyed(QObject * editor)
    {
        QAbstractItemView::editorDestroyed(editor);
    }
    
    bool focusPreviousChild()
    {
        return QWidget::focusPreviousChild();
    }
    
    void doItemsLayout()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("doItemsLayout"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QTableView::doItemsLayout();
    }
    void super_doItemsLayout()
    {
        QTableView::doItemsLayout();
    }
    
    void stopAutoScroll()
    {
        QAbstractItemView::stopAutoScroll();
    }
    
    QModelIndex indexAt(const QPoint & p) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("indexAt"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunction(func.get(), this, p));
        }
        return QTableView::indexAt(p);
    }
    QModelIndex super_indexAt(const QPoint & p) const
    {
        return QTableView::indexAt(p);
    }
    
    int sizeHintForColumn(int column) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHintForColumn"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, column));
        }
        return QTableView::sizeHintForColumn(column);
    }
    int super_sizeHintForColumn(int column) const
    {
        return QTableView::sizeHintForColumn(column);
    }
    
    void scheduleDelayedItemsLayout()
    {
        QAbstractItemView::scheduleDelayedItemsLayout();
    }
    
    void mouseMoveEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseMoveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::mouseMoveEvent(event);
    }
    void super_mouseMoveEvent(QMouseEvent * event)
    {
        QAbstractItemView::mouseMoveEvent(event);
    }
    
    void setRootIndex(const QModelIndex & index)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setRootIndex"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, index);
            return;
        }
        QTableView::setRootIndex(index);
    }
    void super_setRootIndex(const QModelIndex & index)
    {
        QTableView::setRootIndex(index);
    }
    
    QItemSelectionModel::SelectionFlags selectionCommand(const QModelIndex & index, const QEvent * event = 0) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionCommand"));
        if(func)
        {
            return cpgf::fromVariant<QItemSelectionModel::SelectionFlags >(cpgf::invokeScriptFunction(func.get(), this, index, event));
        }
        return QAbstractItemView::selectionCommand(index, event);
    }
    QItemSelectionModel::SelectionFlags super_selectionCommand(const QModelIndex & index, const QEvent * event = 0) const
    {
        return QAbstractItemView::selectionCommand(index, event);
    }
    
    void rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowsAboutToBeRemoved"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, parent, start, end);
            return;
        }
        QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
    }
    void super_rowsAboutToBeRemoved(const QModelIndex & parent, int start, int end)
    {
        QAbstractItemView::rowsAboutToBeRemoved(parent, start, end);
    }
    
    void selectAll()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectAll"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QAbstractItemView::selectAll();
    }
    void super_selectAll()
    {
        QAbstractItemView::selectAll();
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
    
    void clicked(const QModelIndex & index)
    {
        QAbstractItemView::clicked(index);
    }
    
    void rowsInserted(const QModelIndex & parent, int start, int end)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowsInserted"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, parent, start, end);
            return;
        }
        QAbstractItemView::rowsInserted(parent, start, end);
    }
    void super_rowsInserted(const QModelIndex & parent, int start, int end)
    {
        QAbstractItemView::rowsInserted(parent, start, end);
    }
    
    QTableWidgetItem * itemFromIndex(const QModelIndex & index) const
    {
        return QTableWidget::itemFromIndex(index);
    }
    
    void dragEnterEvent(QDragEnterEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragEnterEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::dragEnterEvent(event);
    }
    void super_dragEnterEvent(QDragEnterEvent * event)
    {
        QAbstractItemView::dragEnterEvent(event);
    }
    
    void doubleClicked(const QModelIndex & index)
    {
        QAbstractItemView::doubleClicked(index);
    }
    
    void mousePressEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mousePressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::mousePressEvent(event);
    }
    void super_mousePressEvent(QMouseEvent * event)
    {
        QAbstractItemView::mousePressEvent(event);
    }
    
    void setSelectionModel(QItemSelectionModel * selectionModel)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSelectionModel"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, selectionModel);
            return;
        }
        QTableView::setSelectionModel(selectionModel);
    }
    void super_setSelectionModel(QItemSelectionModel * selectionModel)
    {
        QTableView::setSelectionModel(selectionModel);
    }
    
    int sizeHintForRow(int row) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHintForRow"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, row));
        }
        return QTableView::sizeHintForRow(row);
    }
    int super_sizeHintForRow(int row) const
    {
        return QTableView::sizeHintForRow(row);
    }
    
    void setSelection(const QRect & rect, QItemSelectionModel::SelectionFlags command)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setSelection"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, rect, command);
            return;
        }
        QTableView::setSelection(rect, command);
    }
    void super_setSelection(const QRect & rect, QItemSelectionModel::SelectionFlags command)
    {
        QTableView::setSelection(rect, command);
    }
    
    void startAutoScroll()
    {
        QAbstractItemView::startAutoScroll();
    }
    
    void startDrag(Qt::DropActions supportedActions)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("startDrag"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, supportedActions);
            return;
        }
        QAbstractItemView::startDrag(supportedActions);
    }
    void super_startDrag(Qt::DropActions supportedActions)
    {
        QAbstractItemView::startDrag(supportedActions);
    }
    
    void doAutoScroll()
    {
        QAbstractItemView::doAutoScroll();
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int verticalOffset() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("verticalOffset"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QTableView::verticalOffset();
    }
    int super_verticalOffset() const
    {
        return QTableView::verticalOffset();
    }
    
    void viewportEntered()
    {
        QAbstractItemView::viewportEntered();
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
    
    QList< QTableWidgetItem * > items(const QMimeData * data) const
    {
        return QTableWidget::items(data);
    }
    
    void columnMoved(int column, int oldIndex, int newIndex)
    {
        QTableView::columnMoved(column, oldIndex, newIndex);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QTableWidget::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QTableWidget::metaObject();
    }
    
    void setState(QAbstractItemView::State state)
    {
        QAbstractItemView::setState(state);
    }
    
    void mouseReleaseEvent(QMouseEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mouseReleaseEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::mouseReleaseEvent(event);
    }
    void super_mouseReleaseEvent(QMouseEvent * event)
    {
        QAbstractItemView::mouseReleaseEvent(event);
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
    
    void dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector< int > & roles = QVector< int >())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dataChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, topLeft, bottomRight, roles);
            return;
        }
        QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
    }
    void super_dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight, const QVector< int > & roles = QVector< int >())
    {
        QAbstractItemView::dataChanged(topLeft, bottomRight, roles);
    }
    
    void setHorizontalStepsPerItem(int steps)
    {
        QAbstractItemView::setHorizontalStepsPerItem(steps);
    }
    
    QSize viewportSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewportSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QTableView::viewportSizeHint();
    }
    QSize super_viewportSizeHint() const
    {
        return QTableView::viewportSizeHint();
    }
    
    void scrollContentsBy(int dx, int dy)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollContentsBy"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, dx, dy);
            return;
        }
        QTableView::scrollContentsBy(dx, dy);
    }
    void super_scrollContentsBy(int dx, int dy)
    {
        QTableView::scrollContentsBy(dx, dy);
    }
    
    void setViewportMargins(int left, int top, int right, int bottom)
    {
        QAbstractScrollArea::setViewportMargins(left, top, right, bottom);
    }
    
    void setVerticalStepsPerItem(int steps)
    {
        QAbstractItemView::setVerticalStepsPerItem(steps);
    }
    
    bool viewportEvent(QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("viewportEvent"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, event));
        }
        return QAbstractItemView::viewportEvent(event);
    }
    bool super_viewportEvent(QEvent * event)
    {
        return QAbstractItemView::viewportEvent(event);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QTableWidget::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QTableWidget::qt_metacast(__arg0);
    }
    
    void showEvent(QShowEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("showEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QWidget::showEvent(__arg0);
    }
    void super_showEvent(QShowEvent * __arg0)
    {
        QWidget::showEvent(__arg0);
    }
    
    bool dropMimeData(int row, int column, const QMimeData * data, Qt::DropAction action)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropMimeData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, row, column, data, action));
        }
        return QTableWidget::dropMimeData(row, column, data, action);
    }
    bool super_dropMimeData(int row, int column, const QMimeData * data, Qt::DropAction action)
    {
        return QTableWidget::dropMimeData(row, column, data, action);
    }
    
    void rowResized(int row, int oldHeight, int newHeight)
    {
        QTableView::rowResized(row, oldHeight, newHeight);
    }
    
    int horizontalStepsPerItem() const
    {
        return QAbstractItemView::horizontalStepsPerItem();
    }
    
    void focusInEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusInEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::focusInEvent(event);
    }
    void super_focusInEvent(QFocusEvent * event)
    {
        QAbstractItemView::focusInEvent(event);
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
    
    bool event(QEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, e));
        }
        return QTableWidget::event(e);
    }
    bool super_event(QEvent * e)
    {
        return QTableWidget::event(e);
    }
    
    bool focusNextChild()
    {
        return QWidget::focusNextChild();
    }
    
    void paintEvent(QPaintEvent * e)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("paintEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, e);
            return;
        }
        QTableView::paintEvent(e);
    }
    void super_paintEvent(QPaintEvent * e)
    {
        QTableView::paintEvent(e);
    }
    
    void setViewportMargins(const QMargins & margins)
    {
        QAbstractScrollArea::setViewportMargins(margins);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    void destroy(bool destroyWindow = true, bool destroySubWindows = true)
    {
        QWidget::destroy(destroyWindow, destroySubWindows);
    }
    
    void selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectionChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, selected, deselected);
            return;
        }
        QTableView::selectionChanged(selected, deselected);
    }
    void super_selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)
    {
        QTableView::selectionChanged(selected, deselected);
    }
    
    void columnResized(int column, int oldWidth, int newWidth)
    {
        QTableView::columnResized(column, oldWidth, newWidth);
    }
    
    void focusOutEvent(QFocusEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusOutEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::focusOutEvent(event);
    }
    void super_focusOutEvent(QFocusEvent * event)
    {
        QAbstractItemView::focusOutEvent(event);
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
    
    void scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint = QAbstractItemView::EnsureVisible)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("scrollTo"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, index, hint);
            return;
        }
        QTableView::scrollTo(index, hint);
    }
    void super_scrollTo(const QModelIndex & index, QAbstractItemView::ScrollHint hint = QAbstractItemView::EnsureVisible)
    {
        QTableView::scrollTo(index, hint);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
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
    
    void updateMicroFocus()
    {
        QWidget::updateMicroFocus();
    }
    
    void horizontalScrollbarAction(int action)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("horizontalScrollbarAction"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, action);
            return;
        }
        QTableView::horizontalScrollbarAction(action);
    }
    void super_horizontalScrollbarAction(int action)
    {
        QTableView::horizontalScrollbarAction(action);
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
        QAbstractScrollArea::setupViewport(viewport);
    }
    void super_setupViewport(QWidget * viewport)
    {
        QAbstractScrollArea::setupViewport(viewport);
    }
    
    Qt::DropActions supportedDropActions() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportedDropActions"));
        if(func)
        {
            return cpgf::fromVariant<Qt::DropActions >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QTableWidget::supportedDropActions();
    }
    Qt::DropActions super_supportedDropActions() const
    {
        return QTableWidget::supportedDropActions();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QTableWidget::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QTableWidget::qt_metacall(__arg0, __arg1, __arg2);
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
    
    bool edit(const QModelIndex & index, QAbstractItemView::EditTrigger trigger, QEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("edit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, index, trigger, event));
        }
        return QAbstractItemView::edit(index, trigger, event);
    }
    bool super_edit(const QModelIndex & index, QAbstractItemView::EditTrigger trigger, QEvent * event)
    {
        return QAbstractItemView::edit(index, trigger, event);
    }
    
    int verticalStepsPerItem() const
    {
        return QAbstractItemView::verticalStepsPerItem();
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
    
    void updateGeometries()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateGeometries"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QTableView::updateGeometries();
    }
    void super_updateGeometries()
    {
        QTableView::updateGeometries();
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
    
    QSize sizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QAbstractScrollArea::sizeHint();
    }
    QSize super_sizeHint() const
    {
        return QAbstractScrollArea::sizeHint();
    }
    
    bool focusNextPrevChild(bool next)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("focusNextPrevChild"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, next));
        }
        return QAbstractItemView::focusNextPrevChild(next);
    }
    bool super_focusNextPrevChild(bool next)
    {
        return QAbstractItemView::focusNextPrevChild(next);
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
    
    QModelIndexList selectedIndexes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("selectedIndexes"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndexList >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QTableView::selectedIndexes();
    }
    QModelIndexList super_selectedIndexes() const
    {
        return QTableView::selectedIndexes();
    }
    
    void keyPressEvent(QKeyEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("keyPressEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::keyPressEvent(event);
    }
    void super_keyPressEvent(QKeyEvent * event)
    {
        QAbstractItemView::keyPressEvent(event);
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
    
    QMimeData * mimeData(const QList< QTableWidgetItem * > items) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mimeData"));
        if(func)
        {
            return cpgf::fromVariant<QMimeData * >(cpgf::invokeScriptFunction(func.get(), this, items));
        }
        return QTableWidget::mimeData(items);
    }
    QMimeData * super_mimeData(const QList< QTableWidgetItem * > items) const
    {
        return QTableWidget::mimeData(items);
    }
    
    void updateEditorData()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("updateEditorData"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QAbstractItemView::updateEditorData();
    }
    void super_updateEditorData()
    {
        QAbstractItemView::updateEditorData();
    }
    
    bool isIndexHidden(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isIndexHidden"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QTableView::isIndexHidden(index);
    }
    bool super_isIndexHidden(const QModelIndex & index) const
    {
        return QTableView::isIndexHidden(index);
    }
    
    void inputMethodEvent(QInputMethodEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::inputMethodEvent(event);
    }
    void super_inputMethodEvent(QInputMethodEvent * event)
    {
        QAbstractItemView::inputMethodEvent(event);
    }
    
    void rowCountChanged(int oldCount, int newCount)
    {
        QTableView::rowCountChanged(oldCount, newCount);
    }
    
    void drawFrame(QPainter * __arg0)
    {
        QFrame::drawFrame(__arg0);
    }
    
    QVariant inputMethodQuery(Qt::InputMethodQuery query) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("inputMethodQuery"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, query));
        }
        return QAbstractItemView::inputMethodQuery(query);
    }
    QVariant super_inputMethodQuery(Qt::InputMethodQuery query) const
    {
        return QAbstractItemView::inputMethodQuery(query);
    }
    
    void dragLeaveEvent(QDragLeaveEvent * event)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dragLeaveEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, event);
            return;
        }
        QAbstractItemView::dragLeaveEvent(event);
    }
    void super_dragLeaveEvent(QDragLeaveEvent * event)
    {
        QAbstractItemView::dragLeaveEvent(event);
    }
    
    QSize minimumSizeHint() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("minimumSizeHint"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QAbstractScrollArea::minimumSizeHint();
    }
    QSize super_minimumSizeHint() const
    {
        return QAbstractScrollArea::minimumSizeHint();
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
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
    
    void activated(const QModelIndex & index)
    {
        QAbstractItemView::activated(index);
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
    
    void reset()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("reset"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QAbstractItemView::reset();
    }
    void super_reset()
    {
        QAbstractItemView::reset();
    }
    
    void closeEditor(QWidget * editor, QAbstractItemDelegate::EndEditHint hint)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("closeEditor"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, editor, hint);
            return;
        }
        QAbstractItemView::closeEditor(editor, hint);
    }
    void super_closeEditor(QWidget * editor, QAbstractItemDelegate::EndEditHint hint)
    {
        QAbstractItemView::closeEditor(editor, hint);
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
    
    int horizontalOffset() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("horizontalOffset"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QTableView::horizontalOffset();
    }
    int super_horizontalOffset() const
    {
        return QTableView::horizontalOffset();
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
    
    QRect visualRect(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("visualRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QTableView::visualRect(index);
    }
    QRect super_visualRect(const QModelIndex & index) const
    {
        return QTableView::visualRect(index);
    }
    
    void verticalScrollbarValueChanged(int value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("verticalScrollbarValueChanged"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, value);
            return;
        }
        QAbstractItemView::verticalScrollbarValueChanged(value);
    }
    void super_verticalScrollbarValueChanged(int value)
    {
        QAbstractItemView::verticalScrollbarValueChanged(value);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("visualRegionForSelection", (QRegion (D::ClassType::*) (const QItemSelection &) const)&D::ClassType::visualRegionForSelection);
        _d.CPGF_MD_TEMPLATE _method("wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("dropIndicatorPosition", (QAbstractItemView::DropIndicatorPosition (D::ClassType::*) () const)&D::ClassType::dropIndicatorPosition);
        _d.CPGF_MD_TEMPLATE _method("mimeTypes", (QStringList (D::ClassType::*) () const)&D::ClassType::mimeTypes);
        _d.CPGF_MD_TEMPLATE _method("tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("executeDelayedItemsLayout", (void (D::ClassType::*) ())&D::ClassType::executeDelayedItemsLayout);
        _d.CPGF_MD_TEMPLATE _method("resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("scrollDirtyRegion", (void (D::ClassType::*) (int, int))&D::ClassType::scrollDirtyRegion);
        _d.CPGF_MD_TEMPLATE _method("hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::hideEvent);
        _d.CPGF_MD_TEMPLATE _method("pressed", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::pressed);
        _d.CPGF_MD_TEMPLATE _method("rowMoved", (void (D::ClassType::*) (int, int, int))&D::ClassType::rowMoved);
        _d.CPGF_MD_TEMPLATE _method("verticalScrollbarAction", (void (D::ClassType::*) (int))&D::ClassType::verticalScrollbarAction);
        _d.CPGF_MD_TEMPLATE _method("leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::dropEvent);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("commitData", (void (D::ClassType::*) (QWidget *))&D::ClassType::commitData);
        _d.CPGF_MD_TEMPLATE _method("indexFromItem", (QModelIndex (D::ClassType::*) (QTableWidgetItem *) const)&D::ClassType::indexFromItem);
        _d.CPGF_MD_TEMPLATE _method("horizontalScrollbarValueChanged", (void (D::ClassType::*) (int))&D::ClassType::horizontalScrollbarValueChanged);
        _d.CPGF_MD_TEMPLATE _method("mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("create", (void (D::ClassType::*) (WId, bool, bool))&D::ClassType::create)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::eventFilter);
        _d.CPGF_MD_TEMPLATE _method("updateEditorGeometries", (void (D::ClassType::*) ())&D::ClassType::updateEditorGeometries);
        _d.CPGF_MD_TEMPLATE _method("setDirtyRegion", (void (D::ClassType::*) (const QRegion &))&D::ClassType::setDirtyRegion, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("entered", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::entered);
        _d.CPGF_MD_TEMPLATE _method("redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::redirected);
        _d.CPGF_MD_TEMPLATE _method("columnCountChanged", (void (D::ClassType::*) (int, int))&D::ClassType::columnCountChanged);
        _d.CPGF_MD_TEMPLATE _method("state", (QAbstractItemView::State (D::ClassType::*) () const)&D::ClassType::state);
        _d.CPGF_MD_TEMPLATE _method("currentChanged", (void (D::ClassType::*) (const QModelIndex &, const QModelIndex &))&D::ClassType::currentChanged);
        _d.CPGF_MD_TEMPLATE _method("moveCursor", (QModelIndex (D::ClassType::*) (QAbstractItemView::CursorAction, Qt::KeyboardModifiers))&D::ClassType::moveCursor);
        _d.CPGF_MD_TEMPLATE _method("dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("dirtyRegionOffset", (QPoint (D::ClassType::*) () const)&D::ClassType::dirtyRegionOffset);
        _d.CPGF_MD_TEMPLATE _method("viewOptions", (QStyleOptionViewItem (D::ClassType::*) () const)&D::ClassType::viewOptions);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("editorDestroyed", (void (D::ClassType::*) (QObject *))&D::ClassType::editorDestroyed);
        _d.CPGF_MD_TEMPLATE _method("focusPreviousChild", (bool (D::ClassType::*) ())&D::ClassType::focusPreviousChild);
        _d.CPGF_MD_TEMPLATE _method("stopAutoScroll", (void (D::ClassType::*) ())&D::ClassType::stopAutoScroll);
        _d.CPGF_MD_TEMPLATE _method("sizeHintForColumn", (int (D::ClassType::*) (int) const)&D::ClassType::sizeHintForColumn);
        _d.CPGF_MD_TEMPLATE _method("scheduleDelayedItemsLayout", (void (D::ClassType::*) ())&D::ClassType::scheduleDelayedItemsLayout);
        _d.CPGF_MD_TEMPLATE _method("mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("selectionCommand", (QItemSelectionModel::SelectionFlags (D::ClassType::*) (const QModelIndex &, const QEvent *) const)&D::ClassType::selectionCommand)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("rowsAboutToBeRemoved", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::rowsAboutToBeRemoved);
        _d.CPGF_MD_TEMPLATE _method("clicked", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::clicked);
        _d.CPGF_MD_TEMPLATE _method("rowsInserted", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::rowsInserted);
        _d.CPGF_MD_TEMPLATE _method("itemFromIndex", (QTableWidgetItem * (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::itemFromIndex);
        _d.CPGF_MD_TEMPLATE _method("dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("doubleClicked", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::doubleClicked);
        _d.CPGF_MD_TEMPLATE _method("mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("sizeHintForRow", (int (D::ClassType::*) (int) const)&D::ClassType::sizeHintForRow);
        _d.CPGF_MD_TEMPLATE _method("setSelection", (void (D::ClassType::*) (const QRect &, QItemSelectionModel::SelectionFlags))&D::ClassType::setSelection);
        _d.CPGF_MD_TEMPLATE _method("startAutoScroll", (void (D::ClassType::*) ())&D::ClassType::startAutoScroll);
        _d.CPGF_MD_TEMPLATE _method("startDrag", (void (D::ClassType::*) (Qt::DropActions))&D::ClassType::startDrag);
        _d.CPGF_MD_TEMPLATE _method("doAutoScroll", (void (D::ClassType::*) ())&D::ClassType::doAutoScroll);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("verticalOffset", (int (D::ClassType::*) () const)&D::ClassType::verticalOffset);
        _d.CPGF_MD_TEMPLATE _method("viewportEntered", (void (D::ClassType::*) ())&D::ClassType::viewportEntered);
        _d.CPGF_MD_TEMPLATE _method("nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("items", (QList< QTableWidgetItem * > (D::ClassType::*) (const QMimeData *) const)&D::ClassType::items);
        _d.CPGF_MD_TEMPLATE _method("columnMoved", (void (D::ClassType::*) (int, int, int))&D::ClassType::columnMoved);
        _d.CPGF_MD_TEMPLATE _method("setState", (void (D::ClassType::*) (QAbstractItemView::State))&D::ClassType::setState);
        _d.CPGF_MD_TEMPLATE _method("mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::closeEvent);
        _d.CPGF_MD_TEMPLATE _method("dataChanged", (void (D::ClassType::*) (const QModelIndex &, const QModelIndex &, const QVector< int > &))&D::ClassType::dataChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
            ._default(copyVariantFromCopyable(QVector< int >()))
        ;
        _d.CPGF_MD_TEMPLATE _method("setHorizontalStepsPerItem", (void (D::ClassType::*) (int))&D::ClassType::setHorizontalStepsPerItem);
        _d.CPGF_MD_TEMPLATE _method("viewportSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::viewportSizeHint);
        _d.CPGF_MD_TEMPLATE _method("scrollContentsBy", (void (D::ClassType::*) (int, int))&D::ClassType::scrollContentsBy);
        _d.CPGF_MD_TEMPLATE _method("setViewportMargins", (void (D::ClassType::*) (int, int, int, int))&D::ClassType::setViewportMargins);
        _d.CPGF_MD_TEMPLATE _method("setVerticalStepsPerItem", (void (D::ClassType::*) (int))&D::ClassType::setVerticalStepsPerItem);
        _d.CPGF_MD_TEMPLATE _method("viewportEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::viewportEvent);
        _d.CPGF_MD_TEMPLATE _method("showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::showEvent);
        _d.CPGF_MD_TEMPLATE _method("dropMimeData", (bool (D::ClassType::*) (int, int, const QMimeData *, Qt::DropAction))&D::ClassType::dropMimeData);
        _d.CPGF_MD_TEMPLATE _method("rowResized", (void (D::ClassType::*) (int, int, int))&D::ClassType::rowResized);
        _d.CPGF_MD_TEMPLATE _method("horizontalStepsPerItem", (int (D::ClassType::*) () const)&D::ClassType::horizontalStepsPerItem);
        _d.CPGF_MD_TEMPLATE _method("focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::metric);
        _d.CPGF_MD_TEMPLATE _method("contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::event);
        _d.CPGF_MD_TEMPLATE _method("focusNextChild", (bool (D::ClassType::*) ())&D::ClassType::focusNextChild);
        _d.CPGF_MD_TEMPLATE _method("paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::paintEvent);
        _d.CPGF_MD_TEMPLATE _method("setViewportMargins", (void (D::ClassType::*) (const QMargins &))&D::ClassType::setViewportMargins);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("destroy", (void (D::ClassType::*) (bool, bool))&D::ClassType::destroy)
            ._default(copyVariantFromCopyable(true))
            ._default(copyVariantFromCopyable(true))
        ;
        _d.CPGF_MD_TEMPLATE _method("selectionChanged", (void (D::ClassType::*) (const QItemSelection &, const QItemSelection &))&D::ClassType::selectionChanged);
        _d.CPGF_MD_TEMPLATE _method("columnResized", (void (D::ClassType::*) (int, int, int))&D::ClassType::columnResized);
        _d.CPGF_MD_TEMPLATE _method("focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::moveEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::changeEvent);
        _d.CPGF_MD_TEMPLATE _method("updateMicroFocus", (void (D::ClassType::*) ())&D::ClassType::updateMicroFocus);
        _d.CPGF_MD_TEMPLATE _method("horizontalScrollbarAction", (void (D::ClassType::*) (int))&D::ClassType::horizontalScrollbarAction);
        _d.CPGF_MD_TEMPLATE _method("sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("supportedDropActions", (Qt::DropActions (D::ClassType::*) () const)&D::ClassType::supportedDropActions);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("edit", (bool (D::ClassType::*) (const QModelIndex &, QAbstractItemView::EditTrigger, QEvent *))&D::ClassType::edit);
        _d.CPGF_MD_TEMPLATE _method("verticalStepsPerItem", (int (D::ClassType::*) () const)&D::ClassType::verticalStepsPerItem);
        _d.CPGF_MD_TEMPLATE _method("enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::enterEvent);
        _d.CPGF_MD_TEMPLATE _method("updateGeometries", (void (D::ClassType::*) ())&D::ClassType::updateGeometries);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::initPainter);
        _d.CPGF_MD_TEMPLATE _method("selectedIndexes", (QModelIndexList (D::ClassType::*) () const)&D::ClassType::selectedIndexes);
        _d.CPGF_MD_TEMPLATE _method("keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::actionEvent);
        _d.CPGF_MD_TEMPLATE _method("mimeData", (QMimeData * (D::ClassType::*) (const QList< QTableWidgetItem * >) const)&D::ClassType::mimeData);
        _d.CPGF_MD_TEMPLATE _method("updateEditorData", (void (D::ClassType::*) ())&D::ClassType::updateEditorData);
        _d.CPGF_MD_TEMPLATE _method("isIndexHidden", (bool (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::isIndexHidden);
        _d.CPGF_MD_TEMPLATE _method("inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("rowCountChanged", (void (D::ClassType::*) (int, int))&D::ClassType::rowCountChanged);
        _d.CPGF_MD_TEMPLATE _method("drawFrame", (void (D::ClassType::*) (QPainter *))&D::ClassType::drawFrame);
        _d.CPGF_MD_TEMPLATE _method("dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("activated", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::activated);
        _d.CPGF_MD_TEMPLATE _method("closeEditor", (void (D::ClassType::*) (QWidget *, QAbstractItemDelegate::EndEditHint))&D::ClassType::closeEditor);
        _d.CPGF_MD_TEMPLATE _method("keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("horizontalOffset", (int (D::ClassType::*) () const)&D::ClassType::horizontalOffset);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("verticalScrollbarValueChanged", (void (D::ClassType::*) (int))&D::ClassType::verticalScrollbarValueChanged);
        _d.CPGF_MD_TEMPLATE _method("super_visualRegionForSelection", (QRegion (D::ClassType::*) (const QItemSelection &) const)&D::ClassType::super_visualRegionForSelection);
        _d.CPGF_MD_TEMPLATE _method("super_wheelEvent", (void (D::ClassType::*) (QWheelEvent *))&D::ClassType::super_wheelEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mimeTypes", (QStringList (D::ClassType::*) () const)&D::ClassType::super_mimeTypes);
        _d.CPGF_MD_TEMPLATE _method("super_tabletEvent", (void (D::ClassType::*) (QTabletEvent *))&D::ClassType::super_tabletEvent);
        _d.CPGF_MD_TEMPLATE _method("super_resizeEvent", (void (D::ClassType::*) (QResizeEvent *))&D::ClassType::super_resizeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hideEvent", (void (D::ClassType::*) (QHideEvent *))&D::ClassType::super_hideEvent);
        _d.CPGF_MD_TEMPLATE _method("super_keyboardSearch", (void (D::ClassType::*) (const QString &))&D::ClassType::super_keyboardSearch, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_verticalScrollbarAction", (void (D::ClassType::*) (int))&D::ClassType::super_verticalScrollbarAction);
        _d.CPGF_MD_TEMPLATE _method("super_leaveEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_leaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropEvent", (void (D::ClassType::*) (QDropEvent *))&D::ClassType::super_dropEvent);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_commitData", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_commitData);
        _d.CPGF_MD_TEMPLATE _method("super_horizontalScrollbarValueChanged", (void (D::ClassType::*) (int))&D::ClassType::super_horizontalScrollbarValueChanged);
        _d.CPGF_MD_TEMPLATE _method("super_mouseDoubleClickEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseDoubleClickEvent);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_updateEditorGeometries", (void (D::ClassType::*) ())&D::ClassType::super_updateEditorGeometries);
        _d.CPGF_MD_TEMPLATE _method("super_redirected", (QPaintDevice * (D::ClassType::*) (QPoint *) const)&D::ClassType::super_redirected);
        _d.CPGF_MD_TEMPLATE _method("super_heightForWidth", (int (D::ClassType::*) (int) const)&D::ClassType::super_heightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_currentChanged", (void (D::ClassType::*) (const QModelIndex &, const QModelIndex &))&D::ClassType::super_currentChanged);
        _d.CPGF_MD_TEMPLATE _method("super_moveCursor", (QModelIndex (D::ClassType::*) (QAbstractItemView::CursorAction, Qt::KeyboardModifiers))&D::ClassType::super_moveCursor);
        _d.CPGF_MD_TEMPLATE _method("super_dragMoveEvent", (void (D::ClassType::*) (QDragMoveEvent *))&D::ClassType::super_dragMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_viewOptions", (QStyleOptionViewItem (D::ClassType::*) () const)&D::ClassType::super_viewOptions);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_editorDestroyed", (void (D::ClassType::*) (QObject *))&D::ClassType::super_editorDestroyed);
        _d.CPGF_MD_TEMPLATE _method("super_doItemsLayout", (void (D::ClassType::*) ())&D::ClassType::super_doItemsLayout);
        _d.CPGF_MD_TEMPLATE _method("super_indexAt", (QModelIndex (D::ClassType::*) (const QPoint &) const)&D::ClassType::super_indexAt);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHintForColumn", (int (D::ClassType::*) (int) const)&D::ClassType::super_sizeHintForColumn);
        _d.CPGF_MD_TEMPLATE _method("super_mouseMoveEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseMoveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setRootIndex", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::super_setRootIndex);
        _d.CPGF_MD_TEMPLATE _method("super_selectionCommand", (QItemSelectionModel::SelectionFlags (D::ClassType::*) (const QModelIndex &, const QEvent *) const)&D::ClassType::super_selectionCommand)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_rowsAboutToBeRemoved", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::super_rowsAboutToBeRemoved);
        _d.CPGF_MD_TEMPLATE _method("super_selectAll", (void (D::ClassType::*) ())&D::ClassType::super_selectAll);
        _d.CPGF_MD_TEMPLATE _method("super_setVisible", (void (D::ClassType::*) (bool))&D::ClassType::super_setVisible);
        _d.CPGF_MD_TEMPLATE _method("super_rowsInserted", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::super_rowsInserted);
        _d.CPGF_MD_TEMPLATE _method("super_dragEnterEvent", (void (D::ClassType::*) (QDragEnterEvent *))&D::ClassType::super_dragEnterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mousePressEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mousePressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setSelectionModel", (void (D::ClassType::*) (QItemSelectionModel *))&D::ClassType::super_setSelectionModel);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHintForRow", (int (D::ClassType::*) (int) const)&D::ClassType::super_sizeHintForRow);
        _d.CPGF_MD_TEMPLATE _method("super_setSelection", (void (D::ClassType::*) (const QRect &, QItemSelectionModel::SelectionFlags))&D::ClassType::super_setSelection);
        _d.CPGF_MD_TEMPLATE _method("super_startDrag", (void (D::ClassType::*) (Qt::DropActions))&D::ClassType::super_startDrag);
        _d.CPGF_MD_TEMPLATE _method("super_verticalOffset", (int (D::ClassType::*) () const)&D::ClassType::super_verticalOffset);
        _d.CPGF_MD_TEMPLATE _method("super_nativeEvent", (bool (D::ClassType::*) (const QByteArray &, void *, long *))&D::ClassType::super_nativeEvent, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_mouseReleaseEvent", (void (D::ClassType::*) (QMouseEvent *))&D::ClassType::super_mouseReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_closeEvent", (void (D::ClassType::*) (QCloseEvent *))&D::ClassType::super_closeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dataChanged", (void (D::ClassType::*) (const QModelIndex &, const QModelIndex &, const QVector< int > &))&D::ClassType::super_dataChanged, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
            ._default(copyVariantFromCopyable(QVector< int >()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_viewportSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_viewportSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_scrollContentsBy", (void (D::ClassType::*) (int, int))&D::ClassType::super_scrollContentsBy);
        _d.CPGF_MD_TEMPLATE _method("super_viewportEvent", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_viewportEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_showEvent", (void (D::ClassType::*) (QShowEvent *))&D::ClassType::super_showEvent);
        _d.CPGF_MD_TEMPLATE _method("super_dropMimeData", (bool (D::ClassType::*) (int, int, const QMimeData *, Qt::DropAction))&D::ClassType::super_dropMimeData);
        _d.CPGF_MD_TEMPLATE _method("super_focusInEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusInEvent);
        _d.CPGF_MD_TEMPLATE _method("super_metric", (int (D::ClassType::*) (QPaintDevice::PaintDeviceMetric) const)&D::ClassType::super_metric);
        _d.CPGF_MD_TEMPLATE _method("super_contextMenuEvent", (void (D::ClassType::*) (QContextMenuEvent *))&D::ClassType::super_contextMenuEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_paintEvent", (void (D::ClassType::*) (QPaintEvent *))&D::ClassType::super_paintEvent);
        _d.CPGF_MD_TEMPLATE _method("super_selectionChanged", (void (D::ClassType::*) (const QItemSelection &, const QItemSelection &))&D::ClassType::super_selectionChanged);
        _d.CPGF_MD_TEMPLATE _method("super_focusOutEvent", (void (D::ClassType::*) (QFocusEvent *))&D::ClassType::super_focusOutEvent);
        _d.CPGF_MD_TEMPLATE _method("super_moveEvent", (void (D::ClassType::*) (QMoveEvent *))&D::ClassType::super_moveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_scrollTo", (void (D::ClassType::*) (const QModelIndex &, QAbstractItemView::ScrollHint))&D::ClassType::super_scrollTo)
            ._default(copyVariantFromCopyable(QAbstractItemView::EnsureVisible))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_hasHeightForWidth", (bool (D::ClassType::*) () const)&D::ClassType::super_hasHeightForWidth);
        _d.CPGF_MD_TEMPLATE _method("super_changeEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_changeEvent);
        _d.CPGF_MD_TEMPLATE _method("super_horizontalScrollbarAction", (void (D::ClassType::*) (int))&D::ClassType::super_horizontalScrollbarAction);
        _d.CPGF_MD_TEMPLATE _method("super_sharedPainter", (QPainter * (D::ClassType::*) () const)&D::ClassType::super_sharedPainter);
        _d.CPGF_MD_TEMPLATE _method("super_setupViewport", (void (D::ClassType::*) (QWidget *))&D::ClassType::super_setupViewport);
        _d.CPGF_MD_TEMPLATE _method("super_supportedDropActions", (Qt::DropActions (D::ClassType::*) () const)&D::ClassType::super_supportedDropActions);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_edit", (bool (D::ClassType::*) (const QModelIndex &, QAbstractItemView::EditTrigger, QEvent *))&D::ClassType::super_edit);
        _d.CPGF_MD_TEMPLATE _method("super_enterEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_enterEvent);
        _d.CPGF_MD_TEMPLATE _method("super_updateGeometries", (void (D::ClassType::*) ())&D::ClassType::super_updateGeometries);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_sizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_sizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_focusNextPrevChild", (bool (D::ClassType::*) (bool))&D::ClassType::super_focusNextPrevChild);
        _d.CPGF_MD_TEMPLATE _method("super_initPainter", (void (D::ClassType::*) (QPainter *) const)&D::ClassType::super_initPainter);
        _d.CPGF_MD_TEMPLATE _method("super_selectedIndexes", (QModelIndexList (D::ClassType::*) () const)&D::ClassType::super_selectedIndexes);
        _d.CPGF_MD_TEMPLATE _method("super_keyPressEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyPressEvent);
        _d.CPGF_MD_TEMPLATE _method("super_actionEvent", (void (D::ClassType::*) (QActionEvent *))&D::ClassType::super_actionEvent);
        _d.CPGF_MD_TEMPLATE _method("super_mimeData", (QMimeData * (D::ClassType::*) (const QList< QTableWidgetItem * >) const)&D::ClassType::super_mimeData);
        _d.CPGF_MD_TEMPLATE _method("super_updateEditorData", (void (D::ClassType::*) ())&D::ClassType::super_updateEditorData);
        _d.CPGF_MD_TEMPLATE _method("super_isIndexHidden", (bool (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_isIndexHidden);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodEvent", (void (D::ClassType::*) (QInputMethodEvent *))&D::ClassType::super_inputMethodEvent);
        _d.CPGF_MD_TEMPLATE _method("super_inputMethodQuery", (QVariant (D::ClassType::*) (Qt::InputMethodQuery) const)&D::ClassType::super_inputMethodQuery);
        _d.CPGF_MD_TEMPLATE _method("super_dragLeaveEvent", (void (D::ClassType::*) (QDragLeaveEvent *))&D::ClassType::super_dragLeaveEvent);
        _d.CPGF_MD_TEMPLATE _method("super_minimumSizeHint", (QSize (D::ClassType::*) () const)&D::ClassType::super_minimumSizeHint);
        _d.CPGF_MD_TEMPLATE _method("super_devType", (int (D::ClassType::*) () const)&D::ClassType::super_devType);
        _d.CPGF_MD_TEMPLATE _method("super_paintEngine", (QPaintEngine * (D::ClassType::*) () const)&D::ClassType::super_paintEngine);
        _d.CPGF_MD_TEMPLATE _method("super_reset", (void (D::ClassType::*) ())&D::ClassType::super_reset);
        _d.CPGF_MD_TEMPLATE _method("super_closeEditor", (void (D::ClassType::*) (QWidget *, QAbstractItemDelegate::EndEditHint))&D::ClassType::super_closeEditor);
        _d.CPGF_MD_TEMPLATE _method("super_keyReleaseEvent", (void (D::ClassType::*) (QKeyEvent *))&D::ClassType::super_keyReleaseEvent);
        _d.CPGF_MD_TEMPLATE _method("super_horizontalOffset", (int (D::ClassType::*) () const)&D::ClassType::super_horizontalOffset);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_visualRect", (QRect (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_visualRect);
        _d.CPGF_MD_TEMPLATE _method("super_verticalScrollbarValueChanged", (void (D::ClassType::*) (int))&D::ClassType::super_verticalScrollbarValueChanged);
    }
};


template <typename D>
void buildMetaClass_QTableWidgetWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QTableWidgetWrapper::cpgf__register(_d);
    
    buildMetaClass_QTableWidget<D>(_d);
}


inline bool opErAToRWrapper_QTableWidgetItem__opLess(const QTableWidgetItem * self, const QTableWidgetItem & other) {
    return (*self) < other;
}
inline QTableWidgetItem & opErAToRWrapper_QTableWidgetItem__opAssign(QTableWidgetItem * self, const QTableWidgetItem & other) {
    return (*self) = other;
}


template <typename D>
void buildMetaClass_QTableWidgetItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (int)>()
        ._default(copyVariantFromCopyable(QTableWidgetItem::Type))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &, int)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QTableWidgetItem::Type))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QIcon &, const QString &, int)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QTableWidgetItem::Type))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTableWidgetItem &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("clone", &D::ClassType::clone);
    _d.CPGF_MD_TEMPLATE _method("tableWidget", &D::ClassType::tableWidget);
    _d.CPGF_MD_TEMPLATE _method("row", &D::ClassType::row);
    _d.CPGF_MD_TEMPLATE _method("column", &D::ClassType::column);
    _d.CPGF_MD_TEMPLATE _method("setSelected", &D::ClassType::setSelected);
    _d.CPGF_MD_TEMPLATE _method("isSelected", &D::ClassType::isSelected);
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("setFlags", &D::ClassType::setFlags);
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _method("setIcon", &D::ClassType::setIcon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("statusTip", &D::ClassType::statusTip);
    _d.CPGF_MD_TEMPLATE _method("setStatusTip", &D::ClassType::setStatusTip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toolTip", &D::ClassType::toolTip);
    _d.CPGF_MD_TEMPLATE _method("setToolTip", &D::ClassType::setToolTip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("whatsThis", &D::ClassType::whatsThis);
    _d.CPGF_MD_TEMPLATE _method("setWhatsThis", &D::ClassType::setWhatsThis, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textAlignment", &D::ClassType::textAlignment);
    _d.CPGF_MD_TEMPLATE _method("setTextAlignment", &D::ClassType::setTextAlignment);
    _d.CPGF_MD_TEMPLATE _method("backgroundColor", &D::ClassType::backgroundColor);
    _d.CPGF_MD_TEMPLATE _method("setBackgroundColor", &D::ClassType::setBackgroundColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("background", &D::ClassType::background);
    _d.CPGF_MD_TEMPLATE _method("setBackground", &D::ClassType::setBackground, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textColor", &D::ClassType::textColor);
    _d.CPGF_MD_TEMPLATE _method("setTextColor", &D::ClassType::setTextColor, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("foreground", &D::ClassType::foreground);
    _d.CPGF_MD_TEMPLATE _method("setForeground", &D::ClassType::setForeground, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("checkState", &D::ClassType::checkState);
    _d.CPGF_MD_TEMPLATE _method("setCheckState", &D::ClassType::setCheckState);
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("setSizeHint", &D::ClassType::setSizeHint);
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data);
    _d.CPGF_MD_TEMPLATE _method("setData", &D::ClassType::setData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("read", &D::ClassType::read, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("write", &D::ClassType::write, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ItemType>("ItemType")
        ._element("Type", D::ClassType::Type)
        ._element("UserType", D::ClassType::UserType)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QTableWidgetItem &)>(mopHolder < mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QTableWidgetItem *, const QTableWidgetItem &))&opErAToRWrapper_QTableWidgetItem__opLess, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTableWidgetItem & (*)(cpgf::GMetaSelf, const QTableWidgetItem &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QTableWidgetItem & (*) (QTableWidgetItem *, const QTableWidgetItem &))&opErAToRWrapper_QTableWidgetItem__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QTableWidgetSelectionRange(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, int, int)>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTableWidgetSelectionRange &)>();
    _d.CPGF_MD_TEMPLATE _method("topRow", &D::ClassType::topRow);
    _d.CPGF_MD_TEMPLATE _method("bottomRow", &D::ClassType::bottomRow);
    _d.CPGF_MD_TEMPLATE _method("leftColumn", &D::ClassType::leftColumn);
    _d.CPGF_MD_TEMPLATE _method("rightColumn", &D::ClassType::rightColumn);
    _d.CPGF_MD_TEMPLATE _method("rowCount", &D::ClassType::rowCount);
    _d.CPGF_MD_TEMPLATE _method("columnCount", &D::ClassType::columnCount);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
