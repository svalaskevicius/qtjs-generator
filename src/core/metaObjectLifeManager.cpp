
#include <_base.h>
#include <unordered_set>

namespace cpgf {

namespace qtjs {

namespace MetaObjectLifeManager {

static std::unordered_set<void *>_allocatedAddresses;

DLL_PUBLIC std::unordered_set<void *> &memorySet() {
    return _allocatedAddresses;
}

}
}
}
