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

inline std::unordered_set<void *> &memorySet()
{
    static std::unordered_set<void *> in_memory;
    return in_memory;
}

template <typename C>
class AutoTree : public cpgf::IMetaObjectLifeManager {
    G_INTERFACE_IMPL_OBJECT

public:
    explicit AutoTree(const GTypeConverterCallback & caster) : caster(caster) {}
    virtual ~AutoTree() {}

protected:
    virtual void G_API_CC retainObject(void * object) {
        memorySet().insert(object);
    }

    virtual void G_API_CC releaseObject(void *) {
    }

    virtual void G_API_CC freeObject(void * object, cpgf::IMetaClass *) {
        if (haveObject(object)) {
            C *instance = static_cast<C *>(caster(object));
            if (!AutoTreeHelper<C>::hasParent(instance)) {
                AutoTreeHelper<C>::traverseChildren(
                    instance,
                    [this](void * c) {
                        memorySet().erase(c);
                    }
                );
                delete instance;
            }
        }
    }

    virtual void G_API_CC returnedFromMethod(void *object) {
        memorySet().insert(object);
    }

    bool haveObject(void *object) {
        return memorySet().find(object) != memorySet().end();
    }

private:
    GTypeConverterCallback caster;

};


}

}

}

