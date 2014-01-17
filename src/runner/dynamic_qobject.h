
#pragma once

#include "_base.h"

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptbindapi.h"

#include <QObject>
#include <QVector>

#include <QMetaObject>
#include <QMetaMethod>

#include "dynamicMetaObjectBuilder.h"
#include "dynamicQObjectManager.h"

namespace qtjs_binder {

cpgf::GDefineMetaInfo createDynamicObjectsMetaClasses();

}

#include "./dynamicQObject.h"
