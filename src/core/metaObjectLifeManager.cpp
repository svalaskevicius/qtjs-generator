
#include <_base.h>
#include <unordered_set>
#include <memory>
#include <map>

#include "cpgf/scriptbind/gv8bind.h"

namespace cpgf {

namespace qtjs {

namespace MetaObjectLifeManager {

static std::unordered_set<void *> allocatedAddresses;

DLL_PUBLIC std::unordered_set<void *> &memorySet() {
    return allocatedAddresses;
}

static std::map<void *, std::unique_ptr<v8::Persistent<v8::Object>>> storedV8Handles;

DLL_PUBLIC void deleteFromMemorySet(void * c) {
    allocatedAddresses.erase(c);
    storedV8Handles.erase(c);
}


void *getV8ObjectAddress(v8::Local<v8::Object> v8obj) {
    GScriptValue scriptValue = cpgf::convertV8ObjectToScriptValue(v8obj);
    if (!scriptValue.isObject()) {
        return nullptr;
    }
    void *addr = objectAddressFromVariant(scriptValue.getValue());
    if (memorySet().find(addr) == memorySet().end()) {
        return nullptr;
    }
    return addr;
}

DLL_PUBLIC void keepV8HandleUntilObjectIsFreed(const v8::FunctionCallbackInfo<v8::Value>& args) {
    v8::Isolate *isolate = v8::Isolate::GetCurrent();
    v8::HandleScope handle_scope(isolate);
    (void)handle_scope;
    v8::Local<v8::Object> v8obj = args[0].As<v8::Object>();

    void *addr = getV8ObjectAddress(v8obj);
    if (!addr) {
        args.GetReturnValue().Set(false);
        return;
    }
    storedV8Handles[addr] = std::unique_ptr<v8::Persistent<v8::Object>>(
        new v8::Persistent<v8::Object>(isolate, v8obj)
    );
    args.GetReturnValue().Set(true);
}


}
}
}
