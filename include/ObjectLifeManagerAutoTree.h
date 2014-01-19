#include "cpgf/gapiutil.h"
#include "cpgf/gmetaapi.h"

#include "cpgf/metatraits/gmetaobjectlifemanager.h"
#include "cpgf/gtypeutil.h"

#include <unordered_set>

namespace cpgf {

namespace qtjs {

namespace MetaObjectLifeManager {

template <typename C>
struct AutoTreeHelper {
};

extern std::unordered_set<void *> &memorySet();

inline void deleteFromMemorySet(void * c) {
    memorySet().erase(c);
}


template <typename C>
class AutoTree : public cpgf::IMetaObjectLifeManager {
    G_INTERFACE_IMPL_OBJECT

public:
    explicit AutoTree(const GTypeConverterCallback & caster) : caster(caster) {}
    virtual ~AutoTree() {}

protected:
    virtual void G_API_CC retainObject(void * address) {
        memorySet().insert(address);
        notifyTreeHelperNewAddress(address);
    }

    virtual void G_API_CC releaseObject(void *) {
    }

    virtual void G_API_CC freeObject(void * address, cpgf::IMetaClass *) {
        if (haveObject(address)) {
            C *instance = static_cast<C *>(caster(address));
            if (!AutoTreeHelper<C>::hasParent(instance)) {
                notifyTreeHelperDeletingInstance(instance);
                delete instance;
            }
        }
    }

    virtual void G_API_CC returnedFromMethod(void *address) {
        if (!haveObject(address)) {
            memorySet().insert(address);
            notifyTreeHelperNewAddress(address);
        }
    }

    inline void notifyTreeHelperDeletingInstance(C *object) {
        AutoTreeHelper<C>::deletingInstance(object);
    }

    inline void notifyTreeHelperNewAddress(void *address) {
        C *instance = static_cast<C *>(caster(address));
        AutoTreeHelper<C>::newAddress(instance);
    }

    inline bool haveObject(void *address) {
        return memorySet().find(address) != memorySet().end();
    }

private:
    GTypeConverterCallback caster;

};


}

}

}

