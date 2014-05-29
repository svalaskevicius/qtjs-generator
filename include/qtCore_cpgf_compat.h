#pragma once

#include "./qt_cpgf_compat.h"

#include <QString>
#include <QEventLoop>
#include <QTextStream>
#include <QArrayData>
#include <QIODevice>
#include <QTextCodec>
#include <QDir>
#include <QTextBoundaryFinder>
#include <QFile>
#include <QFileDevice>
#include <QItemSelectionModel>
#include <QLibrary>
#include <QRegularExpression>
#include <QLocale>
#include <QUrlQuery>
#include <QUrl>
#include <QStandardPaths>
#include <QLoggingCategory>

class QGraphicsObject;
class QGraphicsScene;
class QPostEventList;

namespace cpgf {

template <typename From>
struct IsConvertible < From, ::QChar, typename GEnableIfResult <
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, ::QByteArray, typename GEnableIfResult <
        GOrResult <
        IsSameType<From, bool>,
        IsSameType<From, int>,
        IsSameType<From, unsigned int>,
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename To>
struct IsConvertible < const ::QByteArray, To, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<To, bool>,
        IsSameType<To, char>,
        IsSameType<To, signed char>,
        IsSameType<To, wchar_t>,
        IsSameType<To, unsigned char>,
        IsSameType<To, short int>,
        IsSameType<To, short unsigned int>,
        IsSameType<To, int>,
        IsSameType<To, unsigned int>
        > ,
        GOrResult <
        IsSameType<To, long int>,
        IsSameType<To, long unsigned int>,
        IsSameType<To, long long int>,
        IsSameType<To, long long unsigned int>,
        IsSameType<To, float>,
        IsSameType<To, double>,
        IsSameType<To, long double>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};


template <typename To>
struct IsConvertible < ::QByteArray, To, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<To, bool>,
        IsSameType<To, char>,
        IsSameType<To, signed char>,
        IsSameType<To, wchar_t>,
        IsSameType<To, unsigned char>,
        IsSameType<To, short int>,
        IsSameType<To, short unsigned int>,
        IsSameType<To, int>,
        IsSameType<To, unsigned int>
        > ,
        GOrResult <
        IsSameType<To, long int>,
        IsSameType<To, long unsigned int>,
        IsSameType<To, long long int>,
        IsSameType<To, long long unsigned int>,
        IsSameType<To, float>,
        IsSameType<To, double>,
        IsSameType<To, long double>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename To>
struct IsConvertible < ::QByteArray &, To, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<To, bool>,
        IsSameType<To, char>,
        IsSameType<To, signed char>,
        IsSameType<To, wchar_t>,
        IsSameType<To, unsigned char>,
        IsSameType<To, short int>,
        IsSameType<To, short unsigned int>,
        IsSameType<To, int>,
        IsSameType<To, unsigned int>
        > ,
        GOrResult <
        IsSameType<To, long int>,
        IsSameType<To, long unsigned int>,
        IsSameType<To, long long int>,
        IsSameType<To, long long unsigned int>,
        IsSameType<To, float>,
        IsSameType<To, double>,
        IsSameType<To, long double>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};


template <typename To>
struct IsConvertible < const ::QByteArray &, To, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<To, bool>,
        IsSameType<To, char>,
        IsSameType<To, signed char>,
        IsSameType<To, wchar_t>,
        IsSameType<To, unsigned char>,
        IsSameType<To, short int>,
        IsSameType<To, short unsigned int>,
        IsSameType<To, int>,
        IsSameType<To, unsigned int>
        > ,
        GOrResult <
        IsSameType<To, long int>,
        IsSameType<To, long unsigned int>,
        IsSameType<To, long long int>,
        IsSameType<To, long long unsigned int>,
        IsSameType<To, float>,
        IsSameType<To, double>,
        IsSameType<To, long double>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, ::QJsonValue, typename GEnableIfResult <
        GOrResult <
        IsSameType<From, unsigned int>,
        IsSameType<From, long signed int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long signed int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};


template <typename From>
struct IsConvertible < From, const ::QJsonValue &, typename GEnableIfResult <
        GOrResult <
        IsSameType<From, unsigned int>,
        IsSameType<From, long signed int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long signed int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, ::QVariant, typename GEnableIfResult <
        GOrResult <
        IsSameType<From, long signed int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, const ::QVariant &, typename GEnableIfResult <
        GOrResult <
        IsSameType<From, long signed int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <>
struct IsConvertible < char *, const ::QString &>
{
    G_STATIC_CONSTANT(bool, Result = false);
};
template <>
struct IsConvertible < const char *, const ::QString &>
{
    G_STATIC_CONSTANT(bool, Result = false);
};
template <>
struct IsConvertible < const ::QString &, char *>
{
    G_STATIC_CONSTANT(bool, Result = false);
};

template <>
struct IsConvertible <const QDynamicMetaObjectData &, const cpgf::IObject &> {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <>
struct IsConvertible <const QPostEventList &, const cpgf::IObject &> {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <>
struct IsConvertible <long, QFlag, void> {
    G_STATIC_CONSTANT(bool, Result = false);
};
template <>
struct IsConvertible <unsigned long, QFlag, void> {
    G_STATIC_CONSTANT(bool, Result = false);
};
template <>
struct IsConvertible <long long, QFlag, void> {
    G_STATIC_CONSTANT(bool, Result = false);
};
template <>
struct IsConvertible <unsigned long long, QFlag, void> {
    G_STATIC_CONSTANT(bool, Result = false);
};
template <>
struct IsConvertible <float, QFlag, void> {
    G_STATIC_CONSTANT(bool, Result = false);
};
template <>
struct IsConvertible <double, QFlag, void> {
    G_STATIC_CONSTANT(bool, Result = false);
};
template <>
struct IsConvertible <long double, QFlag, void> {
    G_STATIC_CONSTANT(bool, Result = false);
};









ENABLE_INT_TYPE_CONVERSION(QString::SectionFlags)
ENABLE_INT_TYPE_CONVERSION(QEventLoop::ProcessEventsFlags)
ENABLE_INT_TYPE_CONVERSION(QTextStream::NumberFlags)
ENABLE_INT_TYPE_CONVERSION(QArrayData::AllocationOptions)
ENABLE_INT_TYPE_CONVERSION(QIODevice::OpenMode)
ENABLE_INT_TYPE_CONVERSION(QTextCodec::ConversionFlags)
ENABLE_INT_TYPE_CONVERSION(QDir::Filters)
ENABLE_INT_TYPE_CONVERSION(QDir::SortFlags)
ENABLE_INT_TYPE_CONVERSION(QTextBoundaryFinder::BoundaryReasons)
ENABLE_INT_TYPE_CONVERSION(QFile::Permissions)
ENABLE_INT_TYPE_CONVERSION(QFileDevice::FileHandleFlags)
ENABLE_INT_TYPE_CONVERSION(QItemSelectionModel::SelectionFlags)
#ifndef QT_NO_LIBRARY
ENABLE_INT_TYPE_CONVERSION(QLibrary::LoadHints)
#endif
ENABLE_INT_TYPE_CONVERSION(Qt::KeyboardModifiers)
ENABLE_INT_TYPE_CONVERSION(Qt::MouseButtons)
ENABLE_INT_TYPE_CONVERSION(Qt::Orientations)
ENABLE_INT_TYPE_CONVERSION(Qt::Alignment)
ENABLE_INT_TYPE_CONVERSION(Qt::WindowFlags)
ENABLE_INT_TYPE_CONVERSION(Qt::WindowStates)
ENABLE_INT_TYPE_CONVERSION(Qt::ScreenOrientations)
ENABLE_INT_TYPE_CONVERSION(Qt::ImageConversionFlags)
ENABLE_INT_TYPE_CONVERSION(Qt::DockWidgetAreas)
ENABLE_INT_TYPE_CONVERSION(Qt::ToolBarAreas)
ENABLE_INT_TYPE_CONVERSION(Qt::InputMethodQueries)
ENABLE_INT_TYPE_CONVERSION(Qt::InputMethodHints)
ENABLE_INT_TYPE_CONVERSION(Qt::FindChildOptions)
ENABLE_INT_TYPE_CONVERSION(Qt::DropActions)
ENABLE_INT_TYPE_CONVERSION(Qt::ItemFlags)
ENABLE_INT_TYPE_CONVERSION(Qt::MatchFlags)
ENABLE_INT_TYPE_CONVERSION(Qt::TextInteractionFlags)
ENABLE_INT_TYPE_CONVERSION(Qt::TouchPointStates)
ENABLE_INT_TYPE_CONVERSION(Qt::GestureFlags)
ENABLE_INT_TYPE_CONVERSION(QRegularExpression::PatternOptions)
ENABLE_INT_TYPE_CONVERSION(QLocale::NumberOptions)
ENABLE_INT_TYPE_CONVERSION(QUrl::ComponentFormattingOptions)
ENABLE_INT_TYPE_CONVERSION(QUrl::FormattingOptions)
ENABLE_INT_TYPE_CONVERSION(QStandardPaths::LocateOptions)
ENABLE_INT_TYPE_CONVERSION(QByteArray::Base64Options)




struct IMetaObjectLifeManager;
struct GMetaTraitsParam;


namespace qtjs {

namespace MetaObjectLifeManager {

template <>
struct AutoTreeHelper<QObject> {
    inline static bool hasParent(QObject* object) {
        return object->parent();
    }

    static void deleteObjectTree(QObject *object) {
        deleteFromMemorySet(object);
        for (QObject * c : object->children()) {
            deleteObjectTree(c);
        }
    }

    inline static void deletingInstance(QObject *object) {
        deleteObjectTree(object);
    }
};

}

}

template <typename T>
struct GMetaTraitsCreateObjectLifeManager < T, typename GEnableIfResult <
        GAndResult <
            IsConvertible<T *, QObject *>,
            GNotResult< IsConvertible<T *, QGraphicsObject *> >,
            GNotResult< IsConvertible<T *, QGraphicsScene *> >
        >
    >::Result
> {
    static IMetaObjectLifeManager * createObjectLifeManager(const GMetaTraitsParam &) {
        return new qtjs::MetaObjectLifeManager::AutoTree<QObject>(GTypeConverter<T *, QObject *>());
    }
};

} // namespace cpgf


