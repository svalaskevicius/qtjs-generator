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


