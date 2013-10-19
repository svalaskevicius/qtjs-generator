#pragma once

#include "_base.h"

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/metatraits/gmetaobjectlifemanager.h"
#include "cpgf/gtypetraits.h"
#include "cpgf/gtypeutil.h"

#include "ObjectLifeManagerAutoTree.h"


#define ENABLE_INT_TYPE_CONVERSION(TYPE) \
    template <typename From> \
    struct IsConvertible <From, TYPE, typename GEnableIfResult<IsConvertible<From, int> >::Result> { \
        G_STATIC_CONSTANT(bool, Result = true); \
    };


#define NOT_CONVERTIBLE(TO) \
template <typename From> \
struct IsConvertible < From, TO, typename GEnableIfResult < \
        GOrResult < \
        GOrResult < \
        IsSameType<From, bool>, \
        IsSameType<From, short int>, \
        IsSameType<From, short unsigned int>, \
        IsSameType<From, int>, \
        IsSameType<From, unsigned int>, \
        IsSameType<From, long int>, \
        IsSameType<From, long unsigned int>, \
        IsSameType<From, long long int>, \
        IsSameType<From, long long unsigned int> \
        >, \
        GOrResult < \
        IsSameType<From, char>, \
        IsSameType<From, signed char>, \
        IsSameType<From, unsigned char>, \
        IsSameType<From, wchar_t>, \
        IsSameType<From, float>, \
        IsSameType<From, double>, \
        IsSameType<From, long double>, \
        IsPointer<From> \
        > \
        > \
        >::Result \
        > { \
    G_STATIC_CONSTANT(bool, Result = false); \
}; \
template <typename From> \
struct IsConvertible < From, const TO &> : public IsConvertible < From, TO> {};

