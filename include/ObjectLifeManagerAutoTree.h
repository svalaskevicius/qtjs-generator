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
        C *instance = static_cast<C *>(caster(address));
        memorySet().insert(instance);
    }

    virtual void G_API_CC releaseObject(void *) {
    }

    virtual void G_API_CC freeObject(void * address, cpgf::IMetaClass *) {
        C *instance = static_cast<C *>(caster(address));
        if (haveObject(instance)) {
            if (!AutoTreeHelper<C>::hasParent(instance)) {
                notifyTreeHelperDeletingInstance(instance);
                delete instance;
            }
        }
    }

    virtual void G_API_CC returnedFromMethod(void *address) {
        C *instance = static_cast<C *>(caster(address));
        memorySet().insert(instance);
    }

    inline void notifyTreeHelperDeletingInstance(C *object) {
        AutoTreeHelper<C>::deletingInstance(object);
    }

    inline bool haveObject(C *instance) {
        return memorySet().find(instance) != memorySet().end();
    }

private:
    GTypeConverterCallback caster;

};


}

}

}

