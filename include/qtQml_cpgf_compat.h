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

namespace cpgf {

template <typename From>
struct IsConvertible < From, ::QJSValue, typename GEnableIfResult <
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
//        IsSameType<From, float>,
//        IsSameType<From, double>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, const ::QJSValue &> : public IsConvertible < From, ::QJSValue> {};

}
