
#include "cpgfApi.h"

#include "dynamicMetaObjectBuilder.h"
#include "dynamicQObjectManager.h"
#include "dynamicQObject.h"

namespace qtjs_binder {

cpgf::GDefineMetaInfo createDynamicObjectsMetaClasses()
{
    using namespace cpgf;

    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<DynamicMetaObjectBuilder> _nd = GDefineMetaClass<DynamicMetaObjectBuilder>::declare("DynamicMetaObjectBuilder");
        _nd._method("setClassName", &DynamicMetaObjectBuilder::setClassName);
        _nd._method("setInit", &DynamicMetaObjectBuilder::setInit);
        _nd._method("addSignal", &DynamicMetaObjectBuilder::addSignal);
        _nd._method("addSlot", &DynamicMetaObjectBuilder::addSlot);
        _nd._method("addProperty", &DynamicMetaObjectBuilder::addProperty);

        _d._class(_nd);
    }
    {
        GDefineMetaClass<DynamicQObjectManager> _nd = GDefineMetaClass<DynamicQObjectManager>::declare("DynamicQObjectManager");
        _nd._method("finalizeBuild", &DynamicQObjectManager::finalizeBuild);
        _nd._method("getMetaObject", &DynamicQObjectManager::getMetaObject);
        _nd._method("construct", &DynamicQObjectManager::construct, cpgf::MakePolicy<cpgf::GMetaRuleTransferOwnership<-1> >())
            ._default(copyVariantFromCopyable(0));

        _d._class(_nd);
    }
    {
        GDefineMetaClass<DynamicQObject, QObject> _nd = GDefineMetaClass<DynamicQObject, QObject>::declare("DynamicQObject");
        _d._class(_nd);
    }

    return _d.getMetaInfo();
}

}

