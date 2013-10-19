#pragma once

#include "./qtCore_cpgf_compat.h"

#include <QQuickWindow>
#include <QQuickView>
#include <QQmlContext>
#include <QQuickItem>
#include <QDateTime>
#include <QQmlEngine>
#include <QQmlIncubator>
#include <QQmlNetworkAccessManagerFactory>
#include <QNetworkAccessManager>
#include <QQmlProperty>
#include <QSGTexture>
#include <QSGNode>
#include <QMatrix4x4>
#include <QSGTextureProvider>
#include <QPainter>
#include <QOpenGLFramebufferObject>
#include <QOpenGLContext>
#include <QSGMaterial>

namespace cpgf {

template <typename From>
struct IsConvertible < From, ::QJSValue, typename GEnableIfResult <
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, const ::QJSValue &> : public IsConvertible < From, ::QJSValue> {};

template <typename From>
struct IsConvertible < From, ::QQuickItem::ItemChangeData, typename GEnableIfResult <
        GOrResult <
            GOrResult <
                IsSameType<From, char>,
                IsSameType<From, wchar_t>,
                IsSameType<From, signed char>,
                IsSameType<From, unsigned char>,
                IsSameType<From, short int>,
                IsSameType<From, short unsigned int>,
                IsSameType<From, int>,
                IsSameType<From, unsigned int>
            >,
            GOrResult <
                IsSameType<From, long int>,
                IsSameType<From, long unsigned int>,
                IsSameType<From, long long int>,
                IsSameType<From, long long unsigned int>,
                IsSameType<From, long double>,
                IsPointer<From>
            >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, const ::QQuickItem::ItemChangeData &> : public IsConvertible < From, ::QQuickItem::ItemChangeData> {};


template <>
struct IsPolymorphic < ::QQuickItem::ItemChangeData >
{ 
    G_STATIC_CONSTANT(bool, Result = false); 
};


}
