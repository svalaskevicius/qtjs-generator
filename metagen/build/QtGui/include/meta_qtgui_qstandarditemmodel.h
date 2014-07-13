// Auto generated file, don't modify.

#ifndef CPGF_META_QTGUI_QSTANDARDITEMMODEL_H
#define CPGF_META_QTGUI_QSTANDARDITEMMODEL_H


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
void buildMetaClass_Global_qstandarditemmodel(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, QStandardItem &)>(mopHolder >> mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0>, cpgf::GMetaRuleParamNoncopyable<1> >());
    _d.CPGF_MD_TEMPLATE _operator<QDataStream & (*)(QDataStream &, const QStandardItem &)>(mopHolder << mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<-1>, cpgf::GMetaRuleParamNoncopyable<0> >());
}


inline bool opErAToRWrapper_QStandardItem__opLess(const QStandardItem * self, const QStandardItem & other) {
    return (*self) < other;
}


template <typename D>
void buildMetaClass_QStandardItem(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QIcon &, const QString &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int)>()
        ._default(copyVariantFromCopyable(1))
    ;
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data)
        ._default(copyVariantFromCopyable(Qt::UserRole+1))
    ;
    _d.CPGF_MD_TEMPLATE _method("setData", &D::ClassType::setData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(Qt::UserRole+1))
    ;
    _d.CPGF_MD_TEMPLATE _method("text", &D::ClassType::text);
    _d.CPGF_MD_TEMPLATE _method("setText", &D::ClassType::setText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("icon", &D::ClassType::icon);
    _d.CPGF_MD_TEMPLATE _method("setIcon", &D::ClassType::setIcon, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("toolTip", &D::ClassType::toolTip);
    _d.CPGF_MD_TEMPLATE _method("setToolTip", &D::ClassType::setToolTip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("statusTip", &D::ClassType::statusTip);
    _d.CPGF_MD_TEMPLATE _method("setStatusTip", &D::ClassType::setStatusTip, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("whatsThis", &D::ClassType::whatsThis);
    _d.CPGF_MD_TEMPLATE _method("setWhatsThis", &D::ClassType::setWhatsThis, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("sizeHint", &D::ClassType::sizeHint);
    _d.CPGF_MD_TEMPLATE _method("setSizeHint", &D::ClassType::setSizeHint);
    _d.CPGF_MD_TEMPLATE _method("font", &D::ClassType::font);
    _d.CPGF_MD_TEMPLATE _method("setFont", &D::ClassType::setFont, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("textAlignment", &D::ClassType::textAlignment);
    _d.CPGF_MD_TEMPLATE _method("setTextAlignment", &D::ClassType::setTextAlignment);
    _d.CPGF_MD_TEMPLATE _method("background", &D::ClassType::background);
    _d.CPGF_MD_TEMPLATE _method("setBackground", &D::ClassType::setBackground, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("foreground", &D::ClassType::foreground);
    _d.CPGF_MD_TEMPLATE _method("setForeground", &D::ClassType::setForeground, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("checkState", &D::ClassType::checkState);
    _d.CPGF_MD_TEMPLATE _method("setCheckState", &D::ClassType::setCheckState);
    _d.CPGF_MD_TEMPLATE _method("accessibleText", &D::ClassType::accessibleText);
    _d.CPGF_MD_TEMPLATE _method("setAccessibleText", &D::ClassType::setAccessibleText, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("accessibleDescription", &D::ClassType::accessibleDescription);
    _d.CPGF_MD_TEMPLATE _method("setAccessibleDescription", &D::ClassType::setAccessibleDescription, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("setFlags", &D::ClassType::setFlags);
    _d.CPGF_MD_TEMPLATE _method("isEnabled", &D::ClassType::isEnabled);
    _d.CPGF_MD_TEMPLATE _method("setEnabled", &D::ClassType::setEnabled);
    _d.CPGF_MD_TEMPLATE _method("isEditable", &D::ClassType::isEditable);
    _d.CPGF_MD_TEMPLATE _method("setEditable", &D::ClassType::setEditable);
    _d.CPGF_MD_TEMPLATE _method("isSelectable", &D::ClassType::isSelectable);
    _d.CPGF_MD_TEMPLATE _method("setSelectable", &D::ClassType::setSelectable);
    _d.CPGF_MD_TEMPLATE _method("isCheckable", &D::ClassType::isCheckable);
    _d.CPGF_MD_TEMPLATE _method("setCheckable", &D::ClassType::setCheckable);
    _d.CPGF_MD_TEMPLATE _method("isTristate", &D::ClassType::isTristate);
    _d.CPGF_MD_TEMPLATE _method("setTristate", &D::ClassType::setTristate);
    _d.CPGF_MD_TEMPLATE _method("isDragEnabled", &D::ClassType::isDragEnabled);
    _d.CPGF_MD_TEMPLATE _method("setDragEnabled", &D::ClassType::setDragEnabled);
    _d.CPGF_MD_TEMPLATE _method("isDropEnabled", &D::ClassType::isDropEnabled);
    _d.CPGF_MD_TEMPLATE _method("setDropEnabled", &D::ClassType::setDropEnabled);
    _d.CPGF_MD_TEMPLATE _method("parent", &D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("row", &D::ClassType::row);
    _d.CPGF_MD_TEMPLATE _method("column", &D::ClassType::column);
    _d.CPGF_MD_TEMPLATE _method("index", &D::ClassType::index);
    _d.CPGF_MD_TEMPLATE _method("model", &D::ClassType::model);
    _d.CPGF_MD_TEMPLATE _method("rowCount", &D::ClassType::rowCount);
    _d.CPGF_MD_TEMPLATE _method("setRowCount", &D::ClassType::setRowCount);
    _d.CPGF_MD_TEMPLATE _method("columnCount", &D::ClassType::columnCount);
    _d.CPGF_MD_TEMPLATE _method("setColumnCount", &D::ClassType::setColumnCount);
    _d.CPGF_MD_TEMPLATE _method("hasChildren", &D::ClassType::hasChildren);
    _d.CPGF_MD_TEMPLATE _method("child", &D::ClassType::child)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setChild", (void (D::ClassType::*) (int, int, QStandardItem *))&D::ClassType::setChild);
    _d.CPGF_MD_TEMPLATE _method("setChild", (void (D::ClassType::*) (int, QStandardItem *))&D::ClassType::setChild);
    _d.CPGF_MD_TEMPLATE _method("insertRow", (void (D::ClassType::*) (int, const QList< QStandardItem * > &))&D::ClassType::insertRow);
    _d.CPGF_MD_TEMPLATE _method("insertColumn", &D::ClassType::insertColumn);
    _d.CPGF_MD_TEMPLATE _method("insertRows", (void (D::ClassType::*) (int, const QList< QStandardItem * > &))&D::ClassType::insertRows);
    _d.CPGF_MD_TEMPLATE _method("insertRows", (void (D::ClassType::*) (int, int))&D::ClassType::insertRows);
    _d.CPGF_MD_TEMPLATE _method("insertColumns", &D::ClassType::insertColumns);
    _d.CPGF_MD_TEMPLATE _method("removeRow", &D::ClassType::removeRow);
    _d.CPGF_MD_TEMPLATE _method("removeColumn", &D::ClassType::removeColumn);
    _d.CPGF_MD_TEMPLATE _method("removeRows", &D::ClassType::removeRows);
    _d.CPGF_MD_TEMPLATE _method("removeColumns", &D::ClassType::removeColumns);
    _d.CPGF_MD_TEMPLATE _method("appendRow", (void (D::ClassType::*) (const QList< QStandardItem * > &))&D::ClassType::appendRow);
    _d.CPGF_MD_TEMPLATE _method("appendRows", &D::ClassType::appendRows);
    _d.CPGF_MD_TEMPLATE _method("appendColumn", &D::ClassType::appendColumn);
    _d.CPGF_MD_TEMPLATE _method("insertRow", (void (D::ClassType::*) (int, QStandardItem *))&D::ClassType::insertRow);
    _d.CPGF_MD_TEMPLATE _method("appendRow", (void (D::ClassType::*) (QStandardItem *))&D::ClassType::appendRow);
    _d.CPGF_MD_TEMPLATE _method("takeChild", &D::ClassType::takeChild)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("takeRow", &D::ClassType::takeRow);
    _d.CPGF_MD_TEMPLATE _method("takeColumn", &D::ClassType::takeColumn);
    _d.CPGF_MD_TEMPLATE _method("sortChildren", &D::ClassType::sortChildren)
        ._default(copyVariantFromCopyable(Qt::AscendingOrder))
    ;
    _d.CPGF_MD_TEMPLATE _method("clone", &D::ClassType::clone);
    _d.CPGF_MD_TEMPLATE _method("type", &D::ClassType::type);
    _d.CPGF_MD_TEMPLATE _method("read", &D::ClassType::read, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _method("write", &D::ClassType::write, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<0> >());
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ItemType>("ItemType")
        ._element("Type", D::ClassType::Type)
        ._element("UserType", D::ClassType::UserType)
    ;
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QStandardItem &)>(mopHolder < mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opLess", (bool (*) (const QStandardItem *, const QStandardItem &))&opErAToRWrapper_QStandardItem__opLess, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


template <typename D>
void buildMetaClass_QStandardItemModel(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (int, int, QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("setItemRoleNames", &D::ClassType::setItemRoleNames);
    _d.CPGF_MD_TEMPLATE _method("index", &D::ClassType::index)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("rowCount", &D::ClassType::rowCount)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("columnCount", &D::ClassType::columnCount)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasChildren", &D::ClassType::hasChildren)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("sibling", &D::ClassType::sibling);
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data)
        ._default(copyVariantFromCopyable(Qt::DisplayRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("setData", &D::ClassType::setData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::EditRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("headerData", &D::ClassType::headerData)
        ._default(copyVariantFromCopyable(Qt::DisplayRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("setHeaderData", &D::ClassType::setHeaderData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(Qt::EditRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertRows", &D::ClassType::insertRows)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertColumns", &D::ClassType::insertColumns)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeRows", &D::ClassType::removeRows)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("removeColumns", &D::ClassType::removeColumns)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("supportedDropActions", &D::ClassType::supportedDropActions);
    _d.CPGF_MD_TEMPLATE _method("itemData", &D::ClassType::itemData);
    _d.CPGF_MD_TEMPLATE _method("setItemData", &D::ClassType::setItemData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("sort", &D::ClassType::sort)
        ._default(copyVariantFromCopyable(Qt::AscendingOrder))
    ;
    _d.CPGF_MD_TEMPLATE _method("itemFromIndex", &D::ClassType::itemFromIndex);
    _d.CPGF_MD_TEMPLATE _method("indexFromItem", &D::ClassType::indexFromItem);
    _d.CPGF_MD_TEMPLATE _method("item", &D::ClassType::item)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("setItem", (void (D::ClassType::*) (int, int, QStandardItem *))&D::ClassType::setItem);
    _d.CPGF_MD_TEMPLATE _method("setItem", (void (D::ClassType::*) (int, QStandardItem *))&D::ClassType::setItem);
    _d.CPGF_MD_TEMPLATE _method("invisibleRootItem", &D::ClassType::invisibleRootItem);
    _d.CPGF_MD_TEMPLATE _method("horizontalHeaderItem", &D::ClassType::horizontalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalHeaderItem", &D::ClassType::setHorizontalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("verticalHeaderItem", &D::ClassType::verticalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("setVerticalHeaderItem", &D::ClassType::setVerticalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("setHorizontalHeaderLabels", &D::ClassType::setHorizontalHeaderLabels, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setVerticalHeaderLabels", &D::ClassType::setVerticalHeaderLabels, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setRowCount", &D::ClassType::setRowCount);
    _d.CPGF_MD_TEMPLATE _method("setColumnCount", &D::ClassType::setColumnCount);
    _d.CPGF_MD_TEMPLATE _method("appendRow", (void (D::ClassType::*) (const QList< QStandardItem * > &))&D::ClassType::appendRow);
    _d.CPGF_MD_TEMPLATE _method("appendColumn", &D::ClassType::appendColumn);
    _d.CPGF_MD_TEMPLATE _method("appendRow", (void (D::ClassType::*) (QStandardItem *))&D::ClassType::appendRow);
    _d.CPGF_MD_TEMPLATE _method("insertRow", (void (D::ClassType::*) (int, const QList< QStandardItem * > &))&D::ClassType::insertRow);
    _d.CPGF_MD_TEMPLATE _method("insertColumn", (void (D::ClassType::*) (int, const QList< QStandardItem * > &))&D::ClassType::insertColumn);
    _d.CPGF_MD_TEMPLATE _method("insertRow", (void (D::ClassType::*) (int, QStandardItem *))&D::ClassType::insertRow);
    _d.CPGF_MD_TEMPLATE _method("insertRow", (bool (D::ClassType::*) (int, const QModelIndex &))&D::ClassType::insertRow)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("insertColumn", (bool (D::ClassType::*) (int, const QModelIndex &))&D::ClassType::insertColumn)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("takeItem", &D::ClassType::takeItem)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("takeRow", &D::ClassType::takeRow);
    _d.CPGF_MD_TEMPLATE _method("takeColumn", &D::ClassType::takeColumn);
    _d.CPGF_MD_TEMPLATE _method("takeHorizontalHeaderItem", &D::ClassType::takeHorizontalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("takeVerticalHeaderItem", &D::ClassType::takeVerticalHeaderItem);
    _d.CPGF_MD_TEMPLATE _method("itemPrototype", &D::ClassType::itemPrototype);
    _d.CPGF_MD_TEMPLATE _method("setItemPrototype", &D::ClassType::setItemPrototype);
    _d.CPGF_MD_TEMPLATE _method("findItems", &D::ClassType::findItems, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(Qt::MatchExactly))
    ;
    _d.CPGF_MD_TEMPLATE _method("sortRole", &D::ClassType::sortRole);
    _d.CPGF_MD_TEMPLATE _method("setSortRole", &D::ClassType::setSortRole);
    _d.CPGF_MD_TEMPLATE _method("mimeTypes", &D::ClassType::mimeTypes);
    _d.CPGF_MD_TEMPLATE _method("mimeData", &D::ClassType::mimeData);
    _d.CPGF_MD_TEMPLATE _method("dropMimeData", &D::ClassType::dropMimeData);
    _d.CPGF_MD_TEMPLATE _method("itemChanged", &D::ClassType::itemChanged);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
}


class QStandardItemModelWrapper : public QStandardItemModel, public cpgf::GScriptWrapper {
public:
    
    QStandardItemModelWrapper(QObject * parent = 0)
        : QStandardItemModel(parent) {}
    
    QStandardItemModelWrapper(int rows, int columns, QObject * parent = 0)
        : QStandardItemModel(rows, columns, parent) {}
    
    bool moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveColumns"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, sourceParent, sourceColumn, count, destinationParent, destinationChild).getValue());
        }
        return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }
    bool super_moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild)
    {
        return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }
    
    bool removeColumns(int column, int count, const QModelIndex & parent = QModelIndex())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeColumns"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column, count, parent).getValue());
        }
        return QStandardItemModel::removeColumns(column, count, parent);
    }
    bool super_removeColumns(int column, int count, const QModelIndex & parent = QModelIndex())
    {
        return QStandardItemModel::removeColumns(column, count, parent);
    }
    
    QModelIndex createIndex(int row, int column, void * data = 0) const
    {
        return QAbstractItemModel::createIndex(row, column, data);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    bool setData(const QModelIndex & index, const QVariant & value, int role = Qt::EditRole)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index, value, role).getValue());
        }
        return QStandardItemModel::setData(index, value, role);
    }
    bool super_setData(const QModelIndex & index, const QVariant & value, int role = Qt::EditRole)
    {
        return QStandardItemModel::setData(index, value, role);
    }
    
    QHash< int, QByteArray > roleNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("roleNames"));
        if(func)
        {
            return cpgf::fromVariant<QHash< int, QByteArray > >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAbstractItemModel::roleNames();
    }
    QHash< int, QByteArray > super_roleNames() const
    {
        return QAbstractItemModel::roleNames();
    }
    
    void resetInternalData()
    {
        QAbstractItemModel::resetInternalData();
    }
    
    void fetchMore(const QModelIndex & parent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("fetchMore"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, parent);
            return;
        }
        QAbstractItemModel::fetchMore(parent);
    }
    void super_fetchMore(const QModelIndex & parent)
    {
        QAbstractItemModel::fetchMore(parent);
    }
    
    bool insertRows(int row, int count, const QModelIndex & parent = QModelIndex())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertRows"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row, count, parent).getValue());
        }
        return QStandardItemModel::insertRows(row, count, parent);
    }
    bool super_insertRows(int row, int count, const QModelIndex & parent = QModelIndex())
    {
        return QStandardItemModel::insertRows(row, count, parent);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    bool beginMoveColumns(const QModelIndex & sourceParent, int sourceFirst, int sourceLast, const QModelIndex & destinationParent, int destinationColumn)
    {
        return QAbstractItemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }
    
    QModelIndex index(int row, int column, const QModelIndex & parent = QModelIndex()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("index"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row, column, parent).getValue());
        }
        return QStandardItemModel::index(row, column, parent);
    }
    QModelIndex super_index(int row, int column, const QModelIndex & parent = QModelIndex()) const
    {
        return QStandardItemModel::index(row, column, parent);
    }
    
    int columnCount(const QModelIndex & parent = QModelIndex()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, parent).getValue());
        }
        return QStandardItemModel::columnCount(parent);
    }
    int super_columnCount(const QModelIndex & parent = QModelIndex()) const
    {
        return QStandardItemModel::columnCount(parent);
    }
    
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("data"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index, role).getValue());
        }
        return QStandardItemModel::data(index, role);
    }
    QVariant super_data(const QModelIndex & index, int role = Qt::DisplayRole) const
    {
        return QStandardItemModel::data(index, role);
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
    
    bool insertColumns(int column, int count, const QModelIndex & parent = QModelIndex())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertColumns"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, column, count, parent).getValue());
        }
        return QStandardItemModel::insertColumns(column, count, parent);
    }
    bool super_insertColumns(int column, int count, const QModelIndex & parent = QModelIndex())
    {
        return QStandardItemModel::insertColumns(column, count, parent);
    }
    
    QModelIndexList match(const QModelIndex & start, int role, const QVariant & value, int hits = 1, Qt::MatchFlags flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("match"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndexList >(cpgf::invokeScriptFunctionOnObject(func.get(), this, start, role, value, hits, flags).getValue());
        }
        return QAbstractItemModel::match(start, role, value, hits, flags);
    }
    QModelIndexList super_match(const QModelIndex & start, int role, const QVariant & value, int hits = 1, Qt::MatchFlags flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const
    {
        return QAbstractItemModel::match(start, role, value, hits, flags);
    }
    
    Qt::DropActions supportedDragActions() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportedDragActions"));
        if(func)
        {
            return cpgf::fromVariant<Qt::DropActions >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAbstractItemModel::supportedDragActions();
    }
    Qt::DropActions super_supportedDragActions() const
    {
        return QAbstractItemModel::supportedDragActions();
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
    
    QModelIndex parent(const QModelIndex & child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunctionOnObject(func.get(), this, child).getValue());
        }
        return QStandardItemModel::parent(child);
    }
    QModelIndex super_parent(const QModelIndex & child) const
    {
        return QStandardItemModel::parent(child);
    }
    
    bool moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveRows"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, sourceParent, sourceRow, count, destinationParent, destinationChild).getValue());
        }
        return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }
    bool super_moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild)
    {
        return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }
    
    bool setItemData(const QModelIndex & index, const QMap< int, QVariant > & roles)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setItemData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index, roles).getValue());
        }
        return QStandardItemModel::setItemData(index, roles);
    }
    bool super_setItemData(const QModelIndex & index, const QMap< int, QVariant > & roles)
    {
        return QStandardItemModel::setItemData(index, roles);
    }
    
    void changePersistentIndex(const QModelIndex & from, const QModelIndex & to)
    {
        QAbstractItemModel::changePersistentIndex(from, to);
    }
    
    Qt::ItemFlags flags(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("flags"));
        if(func)
        {
            return cpgf::fromVariant<Qt::ItemFlags >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QStandardItemModel::flags(index);
    }
    Qt::ItemFlags super_flags(const QModelIndex & index) const
    {
        return QStandardItemModel::flags(index);
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
    
    bool submit()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("submit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QAbstractItemModel::submit();
    }
    bool super_submit()
    {
        return QAbstractItemModel::submit();
    }
    
    bool setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role = Qt::EditRole)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setHeaderData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, section, orientation, value, role).getValue());
        }
        return QStandardItemModel::setHeaderData(section, orientation, value, role);
    }
    bool super_setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role = Qt::EditRole)
    {
        return QStandardItemModel::setHeaderData(section, orientation, value, role);
    }
    
    void encodeData(const QModelIndexList & indexes, QDataStream & stream) const
    {
        QAbstractItemModel::encodeData(indexes, stream);
    }
    
    void endMoveColumns()
    {
        QAbstractItemModel::endMoveColumns();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QStandardItemModel::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QStandardItemModel::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QStandardItemModel::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QStandardItemModel::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void beginRemoveRows(const QModelIndex & parent, int first, int last)
    {
        QAbstractItemModel::beginRemoveRows(parent, first, last);
    }
    
    QSize span(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("span"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAbstractItemModel::span(index);
    }
    QSize super_span(const QModelIndex & index) const
    {
        return QAbstractItemModel::span(index);
    }
    
    void endRemoveColumns()
    {
        QAbstractItemModel::endRemoveColumns();
    }
    
    bool canFetchMore(const QModelIndex & parent) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("canFetchMore"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, parent).getValue());
        }
        return QAbstractItemModel::canFetchMore(parent);
    }
    bool super_canFetchMore(const QModelIndex & parent) const
    {
        return QAbstractItemModel::canFetchMore(parent);
    }
    
    QStringList mimeTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mimeTypes"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QStandardItemModel::mimeTypes();
    }
    QStringList super_mimeTypes() const
    {
        return QStandardItemModel::mimeTypes();
    }
    
    QModelIndexList persistentIndexList() const
    {
        return QAbstractItemModel::persistentIndexList();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    bool dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropMimeData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, data, action, row, column, parent).getValue());
        }
        return QStandardItemModel::dropMimeData(data, action, row, column, parent);
    }
    bool super_dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent)
    {
        return QStandardItemModel::dropMimeData(data, action, row, column, parent);
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
    
    QModelIndex createIndex(int row, int column, quintptr id) const
    {
        return QAbstractItemModel::createIndex(row, column, id);
    }
    
    bool decodeData(int row, int column, const QModelIndex & parent, QDataStream & stream)
    {
        return QAbstractItemModel::decodeData(row, column, parent, stream);
    }
    
    QModelIndex sibling(int row, int column, const QModelIndex & idx) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sibling"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row, column, idx).getValue());
        }
        return QStandardItemModel::sibling(row, column, idx);
    }
    QModelIndex super_sibling(int row, int column, const QModelIndex & idx) const
    {
        return QStandardItemModel::sibling(row, column, idx);
    }
    
    void endRemoveRows()
    {
        QAbstractItemModel::endRemoveRows();
    }
    
    bool beginMoveRows(const QModelIndex & sourceParent, int sourceFirst, int sourceLast, const QModelIndex & destinationParent, int destinationRow)
    {
        return QAbstractItemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
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
    
    void revert()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("revert"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QAbstractItemModel::revert();
    }
    void super_revert()
    {
        QAbstractItemModel::revert();
    }
    
    void endInsertRows()
    {
        QAbstractItemModel::endInsertRows();
    }
    
    void beginInsertColumns(const QModelIndex & parent, int first, int last)
    {
        QAbstractItemModel::beginInsertColumns(parent, first, last);
    }
    
    void beginRemoveColumns(const QModelIndex & parent, int first, int last)
    {
        QAbstractItemModel::beginRemoveColumns(parent, first, last);
    }
    
    void endMoveRows()
    {
        QAbstractItemModel::endMoveRows();
    }
    
    QMap< int, QVariant > itemData(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemData"));
        if(func)
        {
            return cpgf::fromVariant<QMap< int, QVariant > >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QStandardItemModel::itemData(index);
    }
    QMap< int, QVariant > super_itemData(const QModelIndex & index) const
    {
        return QStandardItemModel::itemData(index);
    }
    
    bool hasChildren(const QModelIndex & parent = QModelIndex()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasChildren"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, parent).getValue());
        }
        return QStandardItemModel::hasChildren(parent);
    }
    bool super_hasChildren(const QModelIndex & parent = QModelIndex()) const
    {
        return QStandardItemModel::hasChildren(parent);
    }
    
    bool removeRows(int row, int count, const QModelIndex & parent = QModelIndex())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeRows"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, row, count, parent).getValue());
        }
        return QStandardItemModel::removeRows(row, count, parent);
    }
    bool super_removeRows(int row, int count, const QModelIndex & parent = QModelIndex())
    {
        return QStandardItemModel::removeRows(row, count, parent);
    }
    
    void beginInsertRows(const QModelIndex & parent, int first, int last)
    {
        QAbstractItemModel::beginInsertRows(parent, first, last);
    }
    
    QMimeData * mimeData(const QModelIndexList & indexes) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mimeData"));
        if(func)
        {
            return cpgf::fromVariant<QMimeData * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, indexes).getValue());
        }
        return QStandardItemModel::mimeData(indexes);
    }
    QMimeData * super_mimeData(const QModelIndexList & indexes) const
    {
        return QStandardItemModel::mimeData(indexes);
    }
    
    QModelIndex buddy(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("buddy"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunctionOnObject(func.get(), this, index).getValue());
        }
        return QAbstractItemModel::buddy(index);
    }
    QModelIndex super_buddy(const QModelIndex & index) const
    {
        return QAbstractItemModel::buddy(index);
    }
    
    bool canDropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("canDropMimeData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, data, action, row, column, parent).getValue());
        }
        return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
    }
    bool super_canDropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) const
    {
        return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
    }
    
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("headerData"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunctionOnObject(func.get(), this, section, orientation, role).getValue());
        }
        return QStandardItemModel::headerData(section, orientation, role);
    }
    QVariant super_headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const
    {
        return QStandardItemModel::headerData(section, orientation, role);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QStandardItemModel::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QStandardItemModel::qt_metacast(__arg0);
    }
    
    int rowCount(const QModelIndex & parent = QModelIndex()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, parent).getValue());
        }
        return QStandardItemModel::rowCount(parent);
    }
    int super_rowCount(const QModelIndex & parent = QModelIndex()) const
    {
        return QStandardItemModel::rowCount(parent);
    }
    
    void changePersistentIndexList(const QModelIndexList & from, const QModelIndexList & to)
    {
        QAbstractItemModel::changePersistentIndexList(from, to);
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
    
    Qt::DropActions supportedDropActions() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportedDropActions"));
        if(func)
        {
            return cpgf::fromVariant<Qt::DropActions >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QStandardItemModel::supportedDropActions();
    }
    Qt::DropActions super_supportedDropActions() const
    {
        return QStandardItemModel::supportedDropActions();
    }
    
    void endInsertColumns()
    {
        QAbstractItemModel::endInsertColumns();
    }
    
    void endResetModel()
    {
        QAbstractItemModel::endResetModel();
    }
    
    void beginResetModel()
    {
        QAbstractItemModel::beginResetModel();
    }
    
    void sort(int column, Qt::SortOrder order = Qt::AscendingOrder)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sort"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, column, order);
            return;
        }
        QStandardItemModel::sort(column, order);
    }
    void super_sort(int column, Qt::SortOrder order = Qt::AscendingOrder)
    {
        QStandardItemModel::sort(column, order);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("createIndex", (QModelIndex (D::ClassType::*) (int, int, void *) const)&D::ClassType::createIndex)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("resetInternalData", (void (D::ClassType::*) ())&D::ClassType::resetInternalData);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("beginMoveColumns", (bool (D::ClassType::*) (const QModelIndex &, int, int, const QModelIndex &, int))&D::ClassType::beginMoveColumns);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("changePersistentIndex", (void (D::ClassType::*) (const QModelIndex &, const QModelIndex &))&D::ClassType::changePersistentIndex);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("encodeData", (void (D::ClassType::*) (const QModelIndexList &, QDataStream &) const)&D::ClassType::encodeData, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<1> >());
        _d.CPGF_MD_TEMPLATE _method("endMoveColumns", (void (D::ClassType::*) ())&D::ClassType::endMoveColumns);
        _d.CPGF_MD_TEMPLATE _method("beginRemoveRows", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::beginRemoveRows);
        _d.CPGF_MD_TEMPLATE _method("endRemoveColumns", (void (D::ClassType::*) ())&D::ClassType::endRemoveColumns);
        _d.CPGF_MD_TEMPLATE _method("persistentIndexList", (QModelIndexList (D::ClassType::*) () const)&D::ClassType::persistentIndexList);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("createIndex", (QModelIndex (D::ClassType::*) (int, int, quintptr) const)&D::ClassType::createIndex);
        _d.CPGF_MD_TEMPLATE _method("decodeData", (bool (D::ClassType::*) (int, int, const QModelIndex &, QDataStream &))&D::ClassType::decodeData, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<3> >());
        _d.CPGF_MD_TEMPLATE _method("endRemoveRows", (void (D::ClassType::*) ())&D::ClassType::endRemoveRows);
        _d.CPGF_MD_TEMPLATE _method("beginMoveRows", (bool (D::ClassType::*) (const QModelIndex &, int, int, const QModelIndex &, int))&D::ClassType::beginMoveRows);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("endInsertRows", (void (D::ClassType::*) ())&D::ClassType::endInsertRows);
        _d.CPGF_MD_TEMPLATE _method("beginInsertColumns", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::beginInsertColumns);
        _d.CPGF_MD_TEMPLATE _method("beginRemoveColumns", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::beginRemoveColumns);
        _d.CPGF_MD_TEMPLATE _method("endMoveRows", (void (D::ClassType::*) ())&D::ClassType::endMoveRows);
        _d.CPGF_MD_TEMPLATE _method("beginInsertRows", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::beginInsertRows);
        _d.CPGF_MD_TEMPLATE _method("changePersistentIndexList", (void (D::ClassType::*) (const QModelIndexList &, const QModelIndexList &))&D::ClassType::changePersistentIndexList);
        _d.CPGF_MD_TEMPLATE _method("endInsertColumns", (void (D::ClassType::*) ())&D::ClassType::endInsertColumns);
        _d.CPGF_MD_TEMPLATE _method("endResetModel", (void (D::ClassType::*) ())&D::ClassType::endResetModel);
        _d.CPGF_MD_TEMPLATE _method("beginResetModel", (void (D::ClassType::*) ())&D::ClassType::beginResetModel);
        _d.CPGF_MD_TEMPLATE _method("super_moveColumns", (bool (D::ClassType::*) (const QModelIndex &, int, int, const QModelIndex &, int))&D::ClassType::super_moveColumns);
        _d.CPGF_MD_TEMPLATE _method("super_removeColumns", (bool (D::ClassType::*) (int, int, const QModelIndex &))&D::ClassType::super_removeColumns)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_setData", (bool (D::ClassType::*) (const QModelIndex &, const QVariant &, int))&D::ClassType::super_setData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
            ._default(copyVariantFromCopyable(Qt::EditRole))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_roleNames", (QHash< int, QByteArray > (D::ClassType::*) () const)&D::ClassType::super_roleNames);
        _d.CPGF_MD_TEMPLATE _method("super_fetchMore", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::super_fetchMore);
        _d.CPGF_MD_TEMPLATE _method("super_insertRows", (bool (D::ClassType::*) (int, int, const QModelIndex &))&D::ClassType::super_insertRows)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_index", (QModelIndex (D::ClassType::*) (int, int, const QModelIndex &) const)&D::ClassType::super_index)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_columnCount", (int (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_columnCount)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_data", (QVariant (D::ClassType::*) (const QModelIndex &, int) const)&D::ClassType::super_data)
            ._default(copyVariantFromCopyable(Qt::DisplayRole))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_insertColumns", (bool (D::ClassType::*) (int, int, const QModelIndex &))&D::ClassType::super_insertColumns)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_match", (QModelIndexList (D::ClassType::*) (const QModelIndex &, int, const QVariant &, int, Qt::MatchFlags) const)&D::ClassType::super_match, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
            ._default(copyVariantFromCopyable(Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)))
            ._default(copyVariantFromCopyable(1))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_supportedDragActions", (Qt::DropActions (D::ClassType::*) () const)&D::ClassType::super_supportedDragActions);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QModelIndex (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_moveRows", (bool (D::ClassType::*) (const QModelIndex &, int, int, const QModelIndex &, int))&D::ClassType::super_moveRows);
        _d.CPGF_MD_TEMPLATE _method("super_setItemData", (bool (D::ClassType::*) (const QModelIndex &, const QMap< int, QVariant > &))&D::ClassType::super_setItemData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_flags", (Qt::ItemFlags (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_flags);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_submit", (bool (D::ClassType::*) ())&D::ClassType::super_submit);
        _d.CPGF_MD_TEMPLATE _method("super_setHeaderData", (bool (D::ClassType::*) (int, Qt::Orientation, const QVariant &, int))&D::ClassType::super_setHeaderData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
            ._default(copyVariantFromCopyable(Qt::EditRole))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_span", (QSize (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_span);
        _d.CPGF_MD_TEMPLATE _method("super_canFetchMore", (bool (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_canFetchMore);
        _d.CPGF_MD_TEMPLATE _method("super_mimeTypes", (QStringList (D::ClassType::*) () const)&D::ClassType::super_mimeTypes);
        _d.CPGF_MD_TEMPLATE _method("super_dropMimeData", (bool (D::ClassType::*) (const QMimeData *, Qt::DropAction, int, int, const QModelIndex &))&D::ClassType::super_dropMimeData);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_sibling", (QModelIndex (D::ClassType::*) (int, int, const QModelIndex &) const)&D::ClassType::super_sibling);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_revert", (void (D::ClassType::*) ())&D::ClassType::super_revert);
        _d.CPGF_MD_TEMPLATE _method("super_itemData", (QMap< int, QVariant > (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_itemData);
        _d.CPGF_MD_TEMPLATE _method("super_hasChildren", (bool (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_hasChildren)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_removeRows", (bool (D::ClassType::*) (int, int, const QModelIndex &))&D::ClassType::super_removeRows)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_mimeData", (QMimeData * (D::ClassType::*) (const QModelIndexList &) const)&D::ClassType::super_mimeData);
        _d.CPGF_MD_TEMPLATE _method("super_buddy", (QModelIndex (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_buddy);
        _d.CPGF_MD_TEMPLATE _method("super_canDropMimeData", (bool (D::ClassType::*) (const QMimeData *, Qt::DropAction, int, int, const QModelIndex &) const)&D::ClassType::super_canDropMimeData);
        _d.CPGF_MD_TEMPLATE _method("super_headerData", (QVariant (D::ClassType::*) (int, Qt::Orientation, int) const)&D::ClassType::super_headerData)
            ._default(copyVariantFromCopyable(Qt::DisplayRole))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_rowCount", (int (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_rowCount)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_supportedDropActions", (Qt::DropActions (D::ClassType::*) () const)&D::ClassType::super_supportedDropActions);
        _d.CPGF_MD_TEMPLATE _method("super_sort", (void (D::ClassType::*) (int, Qt::SortOrder))&D::ClassType::super_sort)
            ._default(copyVariantFromCopyable(Qt::AscendingOrder))
        ;
    }
};


template <typename D>
void buildMetaClass_QStandardItemModelWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QStandardItemModelWrapper::cpgf__register(_d);
    
    buildMetaClass_QStandardItemModel<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
