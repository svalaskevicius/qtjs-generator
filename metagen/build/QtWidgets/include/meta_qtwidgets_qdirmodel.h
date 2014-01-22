// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QDIRMODEL_H
#define __META_QTWIDGETS_QDIRMODEL_H


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
void buildMetaClass_QDirModel(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QStringList &, QDir::Filters, QDir::SortFlags, QObject *)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("index", (QModelIndex (D::ClassType::*) (int, int, const QModelIndex &) const)&D::ClassType::index)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("parent", (QModelIndex (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("rowCount", &D::ClassType::rowCount)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("columnCount", &D::ClassType::columnCount)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("data", &D::ClassType::data)
        ._default(copyVariantFromCopyable(Qt::DisplayRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("setData", &D::ClassType::setData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(Qt::EditRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("headerData", &D::ClassType::headerData)
        ._default(copyVariantFromCopyable(Qt::DisplayRole))
    ;
    _d.CPGF_MD_TEMPLATE _method("hasChildren", &D::ClassType::hasChildren)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("flags", &D::ClassType::flags);
    _d.CPGF_MD_TEMPLATE _method("sort", &D::ClassType::sort)
        ._default(copyVariantFromCopyable(Qt::AscendingOrder))
    ;
    _d.CPGF_MD_TEMPLATE _method("mimeTypes", &D::ClassType::mimeTypes);
    _d.CPGF_MD_TEMPLATE _method("mimeData", &D::ClassType::mimeData);
    _d.CPGF_MD_TEMPLATE _method("dropMimeData", &D::ClassType::dropMimeData);
    _d.CPGF_MD_TEMPLATE _method("supportedDropActions", &D::ClassType::supportedDropActions);
    _d.CPGF_MD_TEMPLATE _method("setIconProvider", &D::ClassType::setIconProvider);
    _d.CPGF_MD_TEMPLATE _method("iconProvider", &D::ClassType::iconProvider);
    _d.CPGF_MD_TEMPLATE _method("setNameFilters", &D::ClassType::setNameFilters, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("nameFilters", &D::ClassType::nameFilters);
    _d.CPGF_MD_TEMPLATE _method("setFilter", &D::ClassType::setFilter);
    _d.CPGF_MD_TEMPLATE _method("filter", &D::ClassType::filter);
    _d.CPGF_MD_TEMPLATE _method("setSorting", &D::ClassType::setSorting);
    _d.CPGF_MD_TEMPLATE _method("sorting", &D::ClassType::sorting);
    _d.CPGF_MD_TEMPLATE _method("setResolveSymlinks", &D::ClassType::setResolveSymlinks);
    _d.CPGF_MD_TEMPLATE _method("resolveSymlinks", &D::ClassType::resolveSymlinks);
    _d.CPGF_MD_TEMPLATE _method("setReadOnly", &D::ClassType::setReadOnly);
    _d.CPGF_MD_TEMPLATE _method("isReadOnly", &D::ClassType::isReadOnly);
    _d.CPGF_MD_TEMPLATE _method("setLazyChildCount", &D::ClassType::setLazyChildCount);
    _d.CPGF_MD_TEMPLATE _method("lazyChildCount", &D::ClassType::lazyChildCount);
    _d.CPGF_MD_TEMPLATE _method("index", (QModelIndex (D::ClassType::*) (const QString &, int) const)&D::ClassType::index, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("isDir", &D::ClassType::isDir);
    _d.CPGF_MD_TEMPLATE _method("mkdir", &D::ClassType::mkdir, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("rmdir", &D::ClassType::rmdir);
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove);
    _d.CPGF_MD_TEMPLATE _method("filePath", &D::ClassType::filePath);
    _d.CPGF_MD_TEMPLATE _method("fileName", &D::ClassType::fileName);
    _d.CPGF_MD_TEMPLATE _method("fileIcon", &D::ClassType::fileIcon);
    _d.CPGF_MD_TEMPLATE _method("fileInfo", &D::ClassType::fileInfo);
    _d.CPGF_MD_TEMPLATE _method("parent", (QObject * (D::ClassType::*) () const)&D::ClassType::parent);
    _d.CPGF_MD_TEMPLATE _method("refresh", &D::ClassType::refresh)
        ._default(copyVariantFromCopyable(QModelIndex()))
    ;
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Roles>("Roles")
        ._element("FileIconRole", D::ClassType::FileIconRole)
        ._element("FilePathRole", D::ClassType::FilePathRole)
        ._element("FileNameRole", D::ClassType::FileNameRole)
    ;
}


class QDirModelWrapper : public QDirModel, public cpgf::GScriptWrapper {
public:
    
    QDirModelWrapper(const QStringList & nameFilters, QDir::Filters filters, QDir::SortFlags sort, QObject * parent = 0)
        : QDirModel(nameFilters, filters, sort, parent) {}
    
    QDirModelWrapper(QObject * parent = 0)
        : QDirModel(parent) {}
    
    bool setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role = Qt::EditRole)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setHeaderData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, section, orientation, value, role));
        }
        return QAbstractItemModel::setHeaderData(section, orientation, value, role);
    }
    bool super_setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role = Qt::EditRole)
    {
        return QAbstractItemModel::setHeaderData(section, orientation, value, role);
    }
    
    void beginResetModel()
    {
        QAbstractItemModel::beginResetModel();
    }
    
    Qt::DropActions supportedDragActions() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportedDragActions"));
        if(func)
        {
            return cpgf::fromVariant<Qt::DropActions >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QAbstractItemModel::supportedDragActions();
    }
    Qt::DropActions super_supportedDragActions() const
    {
        return QAbstractItemModel::supportedDragActions();
    }
    
    void beginInsertRows(const QModelIndex & parent, int first, int last)
    {
        QAbstractItemModel::beginInsertRows(parent, first, last);
    }
    
    bool setItemData(const QModelIndex & index, const QMap< int, QVariant > & roles)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setItemData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, index, roles));
        }
        return QAbstractItemModel::setItemData(index, roles);
    }
    bool super_setItemData(const QModelIndex & index, const QMap< int, QVariant > & roles)
    {
        return QAbstractItemModel::setItemData(index, roles);
    }
    
    void fetchMore(const QModelIndex & parent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("fetchMore"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, parent);
            return;
        }
        QAbstractItemModel::fetchMore(parent);
    }
    void super_fetchMore(const QModelIndex & parent)
    {
        QAbstractItemModel::fetchMore(parent);
    }
    
    void endMoveRows()
    {
        QAbstractItemModel::endMoveRows();
    }
    
    QStringList mimeTypes() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mimeTypes"));
        if(func)
        {
            return cpgf::fromVariant<QStringList >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QDirModel::mimeTypes();
    }
    QStringList super_mimeTypes() const
    {
        return QDirModel::mimeTypes();
    }
    
    void encodeData(const QModelIndexList & indexes, QDataStream & stream) const
    {
        QAbstractItemModel::encodeData(indexes, stream);
    }
    
    QMap< int, QVariant > itemData(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("itemData"));
        if(func)
        {
            return cpgf::fromVariant<QMap< int, QVariant > >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QAbstractItemModel::itemData(index);
    }
    QMap< int, QVariant > super_itemData(const QModelIndex & index) const
    {
        return QAbstractItemModel::itemData(index);
    }
    
    bool removeRows(int row, int count, const QModelIndex & parent = QModelIndex())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeRows"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, row, count, parent));
        }
        return QAbstractItemModel::removeRows(row, count, parent);
    }
    bool super_removeRows(int row, int count, const QModelIndex & parent = QModelIndex())
    {
        return QAbstractItemModel::removeRows(row, count, parent);
    }
    
    void changePersistentIndex(const QModelIndex & from, const QModelIndex & to)
    {
        QAbstractItemModel::changePersistentIndex(from, to);
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QDirModel::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QDirModel::qt_metacast(__arg0);
    }
    
    QModelIndexList match(const QModelIndex & start, int role, const QVariant & value, int hits = 1, Qt::MatchFlags flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("match"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndexList >(cpgf::invokeScriptFunction(func.get(), this, start, role, value, hits, flags));
        }
        return QAbstractItemModel::match(start, role, value, hits, flags);
    }
    QModelIndexList super_match(const QModelIndex & start, int role, const QVariant & value, int hits = 1, Qt::MatchFlags flags = Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)) const
    {
        return QAbstractItemModel::match(start, role, value, hits, flags);
    }
    
    void endRemoveRows()
    {
        QAbstractItemModel::endRemoveRows();
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
    
    void sort(int column, Qt::SortOrder order = Qt::AscendingOrder)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sort"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, column, order);
            return;
        }
        QDirModel::sort(column, order);
    }
    void super_sort(int column, Qt::SortOrder order = Qt::AscendingOrder)
    {
        QDirModel::sort(column, order);
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
    
    QModelIndex sibling(int row, int column, const QModelIndex & idx) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("sibling"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunction(func.get(), this, row, column, idx));
        }
        return QAbstractItemModel::sibling(row, column, idx);
    }
    QModelIndex super_sibling(int row, int column, const QModelIndex & idx) const
    {
        return QAbstractItemModel::sibling(row, column, idx);
    }
    
    QHash< int, QByteArray > roleNames() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("roleNames"));
        if(func)
        {
            return cpgf::fromVariant<QHash< int, QByteArray > >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QAbstractItemModel::roleNames();
    }
    QHash< int, QByteArray > super_roleNames() const
    {
        return QAbstractItemModel::roleNames();
    }
    
    void endResetModel()
    {
        QAbstractItemModel::endResetModel();
    }
    
    void endMoveColumns()
    {
        QAbstractItemModel::endMoveColumns();
    }
    
    int columnCount(const QModelIndex & parent = QModelIndex()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("columnCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, parent));
        }
        return QDirModel::columnCount(parent);
    }
    int super_columnCount(const QModelIndex & parent = QModelIndex()) const
    {
        return QDirModel::columnCount(parent);
    }
    
    QModelIndex index(int row, int column, const QModelIndex & parent = QModelIndex()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("index"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunction(func.get(), this, row, column, parent));
        }
        return QDirModel::index(row, column, parent);
    }
    QModelIndex super_index(int row, int column, const QModelIndex & parent = QModelIndex()) const
    {
        return QDirModel::index(row, column, parent);
    }
    
    void beginRemoveRows(const QModelIndex & parent, int first, int last)
    {
        QAbstractItemModel::beginRemoveRows(parent, first, last);
    }
    
    void resetInternalData()
    {
        QAbstractItemModel::resetInternalData();
    }
    
    bool setData(const QModelIndex & index, const QVariant & value, int role = Qt::EditRole)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, index, value, role));
        }
        return QDirModel::setData(index, value, role);
    }
    bool super_setData(const QModelIndex & index, const QVariant & value, int role = Qt::EditRole)
    {
        return QDirModel::setData(index, value, role);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    bool beginMoveColumns(const QModelIndex & sourceParent, int sourceFirst, int sourceLast, const QModelIndex & destinationParent, int destinationColumn)
    {
        return QAbstractItemModel::beginMoveColumns(sourceParent, sourceFirst, sourceLast, destinationParent, destinationColumn);
    }
    
    int rowCount(const QModelIndex & parent = QModelIndex()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("rowCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, parent));
        }
        return QDirModel::rowCount(parent);
    }
    int super_rowCount(const QModelIndex & parent = QModelIndex()) const
    {
        return QDirModel::rowCount(parent);
    }
    
    QSize span(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("span"));
        if(func)
        {
            return cpgf::fromVariant<QSize >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QAbstractItemModel::span(index);
    }
    QSize super_span(const QModelIndex & index) const
    {
        return QAbstractItemModel::span(index);
    }
    
    bool submit()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("submit"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QAbstractItemModel::submit();
    }
    bool super_submit()
    {
        return QAbstractItemModel::submit();
    }
    
    bool beginMoveRows(const QModelIndex & sourceParent, int sourceFirst, int sourceLast, const QModelIndex & destinationParent, int destinationRow)
    {
        return QAbstractItemModel::beginMoveRows(sourceParent, sourceFirst, sourceLast, destinationParent, destinationRow);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
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
    
    Qt::ItemFlags flags(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("flags"));
        if(func)
        {
            return cpgf::fromVariant<Qt::ItemFlags >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QDirModel::flags(index);
    }
    Qt::ItemFlags super_flags(const QModelIndex & index) const
    {
        return QDirModel::flags(index);
    }
    
    Qt::DropActions supportedDropActions() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportedDropActions"));
        if(func)
        {
            return cpgf::fromVariant<Qt::DropActions >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QDirModel::supportedDropActions();
    }
    Qt::DropActions super_supportedDropActions() const
    {
        return QDirModel::supportedDropActions();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QDirModel::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QDirModel::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    QModelIndex createIndex(int row, int column, void * data = 0) const
    {
        return QAbstractItemModel::createIndex(row, column, data);
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
    
    bool insertColumns(int column, int count, const QModelIndex & parent = QModelIndex())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertColumns"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, column, count, parent));
        }
        return QAbstractItemModel::insertColumns(column, count, parent);
    }
    bool super_insertColumns(int column, int count, const QModelIndex & parent = QModelIndex())
    {
        return QAbstractItemModel::insertColumns(column, count, parent);
    }
    
    bool canDropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("canDropMimeData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, data, action, row, column, parent));
        }
        return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
    }
    bool super_canDropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent) const
    {
        return QAbstractItemModel::canDropMimeData(data, action, row, column, parent);
    }
    
    void endInsertRows()
    {
        QAbstractItemModel::endInsertRows();
    }
    
    bool decodeData(int row, int column, const QModelIndex & parent, QDataStream & stream)
    {
        return QAbstractItemModel::decodeData(row, column, parent, stream);
    }
    
    void beginRemoveColumns(const QModelIndex & parent, int first, int last)
    {
        QAbstractItemModel::beginRemoveColumns(parent, first, last);
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
    
    bool hasChildren(const QModelIndex & index = QModelIndex()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("hasChildren"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QDirModel::hasChildren(index);
    }
    bool super_hasChildren(const QModelIndex & index = QModelIndex()) const
    {
        return QDirModel::hasChildren(index);
    }
    
    QModelIndex parent(const QModelIndex & child) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("parent"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunction(func.get(), this, child));
        }
        return QDirModel::parent(child);
    }
    QModelIndex super_parent(const QModelIndex & child) const
    {
        return QDirModel::parent(child);
    }
    
    void changePersistentIndexList(const QModelIndexList & from, const QModelIndexList & to)
    {
        QAbstractItemModel::changePersistentIndexList(from, to);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void endInsertColumns()
    {
        QAbstractItemModel::endInsertColumns();
    }
    
    bool canFetchMore(const QModelIndex & parent) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("canFetchMore"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, parent));
        }
        return QAbstractItemModel::canFetchMore(parent);
    }
    bool super_canFetchMore(const QModelIndex & parent) const
    {
        return QAbstractItemModel::canFetchMore(parent);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void revert()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("revert"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QAbstractItemModel::revert();
    }
    void super_revert()
    {
        QAbstractItemModel::revert();
    }
    
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("data"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, index, role));
        }
        return QDirModel::data(index, role);
    }
    QVariant super_data(const QModelIndex & index, int role = Qt::DisplayRole) const
    {
        return QDirModel::data(index, role);
    }
    
    void endRemoveColumns()
    {
        QAbstractItemModel::endRemoveColumns();
    }
    
    void beginInsertColumns(const QModelIndex & parent, int first, int last)
    {
        QAbstractItemModel::beginInsertColumns(parent, first, last);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QDirModel::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QDirModel::metaObject();
    }
    
    bool dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("dropMimeData"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, data, action, row, column, parent));
        }
        return QDirModel::dropMimeData(data, action, row, column, parent);
    }
    bool super_dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent)
    {
        return QDirModel::dropMimeData(data, action, row, column, parent);
    }
    
    QModelIndexList persistentIndexList() const
    {
        return QAbstractItemModel::persistentIndexList();
    }
    
    QMimeData * mimeData(const QModelIndexList & indexes) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("mimeData"));
        if(func)
        {
            return cpgf::fromVariant<QMimeData * >(cpgf::invokeScriptFunction(func.get(), this, indexes));
        }
        return QDirModel::mimeData(indexes);
    }
    QMimeData * super_mimeData(const QModelIndexList & indexes) const
    {
        return QDirModel::mimeData(indexes);
    }
    
    bool moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveColumns"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, sourceParent, sourceColumn, count, destinationParent, destinationChild));
        }
        return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }
    bool super_moveColumns(const QModelIndex & sourceParent, int sourceColumn, int count, const QModelIndex & destinationParent, int destinationChild)
    {
        return QAbstractItemModel::moveColumns(sourceParent, sourceColumn, count, destinationParent, destinationChild);
    }
    
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("headerData"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, section, orientation, role));
        }
        return QDirModel::headerData(section, orientation, role);
    }
    QVariant super_headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const
    {
        return QDirModel::headerData(section, orientation, role);
    }
    
    QModelIndex createIndex(int row, int column, quintptr id) const
    {
        return QAbstractItemModel::createIndex(row, column, id);
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
    
    bool moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("moveRows"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, sourceParent, sourceRow, count, destinationParent, destinationChild));
        }
        return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }
    bool super_moveRows(const QModelIndex & sourceParent, int sourceRow, int count, const QModelIndex & destinationParent, int destinationChild)
    {
        return QAbstractItemModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild);
    }
    
    bool removeColumns(int column, int count, const QModelIndex & parent = QModelIndex())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("removeColumns"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, column, count, parent));
        }
        return QAbstractItemModel::removeColumns(column, count, parent);
    }
    bool super_removeColumns(int column, int count, const QModelIndex & parent = QModelIndex())
    {
        return QAbstractItemModel::removeColumns(column, count, parent);
    }
    
    QModelIndex buddy(const QModelIndex & index) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("buddy"));
        if(func)
        {
            return cpgf::fromVariant<QModelIndex >(cpgf::invokeScriptFunction(func.get(), this, index));
        }
        return QAbstractItemModel::buddy(index);
    }
    QModelIndex super_buddy(const QModelIndex & index) const
    {
        return QAbstractItemModel::buddy(index);
    }
    
    bool insertRows(int row, int count, const QModelIndex & parent = QModelIndex())
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("insertRows"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, row, count, parent));
        }
        return QAbstractItemModel::insertRows(row, count, parent);
    }
    bool super_insertRows(int row, int count, const QModelIndex & parent = QModelIndex())
    {
        return QAbstractItemModel::insertRows(row, count, parent);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("beginResetModel", (void (D::ClassType::*) ())&D::ClassType::beginResetModel);
        _d.CPGF_MD_TEMPLATE _method("beginInsertRows", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::beginInsertRows);
        _d.CPGF_MD_TEMPLATE _method("endMoveRows", (void (D::ClassType::*) ())&D::ClassType::endMoveRows);
        _d.CPGF_MD_TEMPLATE _method("encodeData", (void (D::ClassType::*) (const QModelIndexList &, QDataStream &) const)&D::ClassType::encodeData, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<1> >());
        _d.CPGF_MD_TEMPLATE _method("changePersistentIndex", (void (D::ClassType::*) (const QModelIndex &, const QModelIndex &))&D::ClassType::changePersistentIndex);
        _d.CPGF_MD_TEMPLATE _method("endRemoveRows", (void (D::ClassType::*) ())&D::ClassType::endRemoveRows);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("endResetModel", (void (D::ClassType::*) ())&D::ClassType::endResetModel);
        _d.CPGF_MD_TEMPLATE _method("endMoveColumns", (void (D::ClassType::*) ())&D::ClassType::endMoveColumns);
        _d.CPGF_MD_TEMPLATE _method("beginRemoveRows", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::beginRemoveRows);
        _d.CPGF_MD_TEMPLATE _method("resetInternalData", (void (D::ClassType::*) ())&D::ClassType::resetInternalData);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("beginMoveColumns", (bool (D::ClassType::*) (const QModelIndex &, int, int, const QModelIndex &, int))&D::ClassType::beginMoveColumns);
        _d.CPGF_MD_TEMPLATE _method("beginMoveRows", (bool (D::ClassType::*) (const QModelIndex &, int, int, const QModelIndex &, int))&D::ClassType::beginMoveRows);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("createIndex", (QModelIndex (D::ClassType::*) (int, int, void *) const)&D::ClassType::createIndex)
            ._default(copyVariantFromCopyable(0))
        ;
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("endInsertRows", (void (D::ClassType::*) ())&D::ClassType::endInsertRows);
        _d.CPGF_MD_TEMPLATE _method("decodeData", (bool (D::ClassType::*) (int, int, const QModelIndex &, QDataStream &))&D::ClassType::decodeData, cpgf::MakePolicy<cpgf::GMetaRuleParamNoncopyable<3> >());
        _d.CPGF_MD_TEMPLATE _method("beginRemoveColumns", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::beginRemoveColumns);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("changePersistentIndexList", (void (D::ClassType::*) (const QModelIndexList &, const QModelIndexList &))&D::ClassType::changePersistentIndexList);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("endInsertColumns", (void (D::ClassType::*) ())&D::ClassType::endInsertColumns);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("endRemoveColumns", (void (D::ClassType::*) ())&D::ClassType::endRemoveColumns);
        _d.CPGF_MD_TEMPLATE _method("beginInsertColumns", (void (D::ClassType::*) (const QModelIndex &, int, int))&D::ClassType::beginInsertColumns);
        _d.CPGF_MD_TEMPLATE _method("persistentIndexList", (QModelIndexList (D::ClassType::*) () const)&D::ClassType::persistentIndexList);
        _d.CPGF_MD_TEMPLATE _method("createIndex", (QModelIndex (D::ClassType::*) (int, int, quintptr) const)&D::ClassType::createIndex);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_setHeaderData", (bool (D::ClassType::*) (int, Qt::Orientation, const QVariant &, int))&D::ClassType::super_setHeaderData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
            ._default(copyVariantFromCopyable(Qt::EditRole))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_supportedDragActions", (Qt::DropActions (D::ClassType::*) () const)&D::ClassType::super_supportedDragActions);
        _d.CPGF_MD_TEMPLATE _method("super_setItemData", (bool (D::ClassType::*) (const QModelIndex &, const QMap< int, QVariant > &))&D::ClassType::super_setItemData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_fetchMore", (void (D::ClassType::*) (const QModelIndex &))&D::ClassType::super_fetchMore);
        _d.CPGF_MD_TEMPLATE _method("super_mimeTypes", (QStringList (D::ClassType::*) () const)&D::ClassType::super_mimeTypes);
        _d.CPGF_MD_TEMPLATE _method("super_itemData", (QMap< int, QVariant > (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_itemData);
        _d.CPGF_MD_TEMPLATE _method("super_removeRows", (bool (D::ClassType::*) (int, int, const QModelIndex &))&D::ClassType::super_removeRows)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_match", (QModelIndexList (D::ClassType::*) (const QModelIndex &, int, const QVariant &, int, Qt::MatchFlags) const)&D::ClassType::super_match, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<2> >())
            ._default(copyVariantFromCopyable(Qt::MatchFlags(Qt::MatchStartsWith|Qt::MatchWrap)))
            ._default(copyVariantFromCopyable(1))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_sort", (void (D::ClassType::*) (int, Qt::SortOrder))&D::ClassType::super_sort)
            ._default(copyVariantFromCopyable(Qt::AscendingOrder))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_sibling", (QModelIndex (D::ClassType::*) (int, int, const QModelIndex &) const)&D::ClassType::super_sibling);
        _d.CPGF_MD_TEMPLATE _method("super_roleNames", (QHash< int, QByteArray > (D::ClassType::*) () const)&D::ClassType::super_roleNames);
        _d.CPGF_MD_TEMPLATE _method("super_columnCount", (int (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_columnCount)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_index", (QModelIndex (D::ClassType::*) (int, int, const QModelIndex &) const)&D::ClassType::super_index)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_setData", (bool (D::ClassType::*) (const QModelIndex &, const QVariant &, int))&D::ClassType::super_setData, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
            ._default(copyVariantFromCopyable(Qt::EditRole))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_rowCount", (int (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_rowCount)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_span", (QSize (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_span);
        _d.CPGF_MD_TEMPLATE _method("super_submit", (bool (D::ClassType::*) ())&D::ClassType::super_submit);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_flags", (Qt::ItemFlags (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_flags);
        _d.CPGF_MD_TEMPLATE _method("super_supportedDropActions", (Qt::DropActions (D::ClassType::*) () const)&D::ClassType::super_supportedDropActions);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_insertColumns", (bool (D::ClassType::*) (int, int, const QModelIndex &))&D::ClassType::super_insertColumns)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_canDropMimeData", (bool (D::ClassType::*) (const QMimeData *, Qt::DropAction, int, int, const QModelIndex &) const)&D::ClassType::super_canDropMimeData);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_hasChildren", (bool (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_hasChildren)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_parent", (QModelIndex (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_parent);
        _d.CPGF_MD_TEMPLATE _method("super_canFetchMore", (bool (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_canFetchMore);
        _d.CPGF_MD_TEMPLATE _method("super_revert", (void (D::ClassType::*) ())&D::ClassType::super_revert);
        _d.CPGF_MD_TEMPLATE _method("super_data", (QVariant (D::ClassType::*) (const QModelIndex &, int) const)&D::ClassType::super_data)
            ._default(copyVariantFromCopyable(Qt::DisplayRole))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_dropMimeData", (bool (D::ClassType::*) (const QMimeData *, Qt::DropAction, int, int, const QModelIndex &))&D::ClassType::super_dropMimeData);
        _d.CPGF_MD_TEMPLATE _method("super_mimeData", (QMimeData * (D::ClassType::*) (const QModelIndexList &) const)&D::ClassType::super_mimeData);
        _d.CPGF_MD_TEMPLATE _method("super_moveColumns", (bool (D::ClassType::*) (const QModelIndex &, int, int, const QModelIndex &, int))&D::ClassType::super_moveColumns);
        _d.CPGF_MD_TEMPLATE _method("super_headerData", (QVariant (D::ClassType::*) (int, Qt::Orientation, int) const)&D::ClassType::super_headerData)
            ._default(copyVariantFromCopyable(Qt::DisplayRole))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_moveRows", (bool (D::ClassType::*) (const QModelIndex &, int, int, const QModelIndex &, int))&D::ClassType::super_moveRows);
        _d.CPGF_MD_TEMPLATE _method("super_removeColumns", (bool (D::ClassType::*) (int, int, const QModelIndex &))&D::ClassType::super_removeColumns)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_buddy", (QModelIndex (D::ClassType::*) (const QModelIndex &) const)&D::ClassType::super_buddy);
        _d.CPGF_MD_TEMPLATE _method("super_insertRows", (bool (D::ClassType::*) (int, int, const QModelIndex &))&D::ClassType::super_insertRows)
            ._default(copyVariantFromCopyable(QModelIndex()))
        ;
    }
};


template <typename D>
void buildMetaClass_QDirModelWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QDirModelWrapper::cpgf__register(_d);
    
    buildMetaClass_QDirModel<D>(_d);
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
