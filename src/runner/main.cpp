
#include <QApplication>
#include <QMainWindow>

#include "cpgf/gmetadefine.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/gscopedinterface.h"
#include "cpgf/scriptbind/gv8runner.h"
#include "cpgf/glifecycle.h"

#include <iostream>
#include "../../lib/node/src/v8_typed_array.h"

#include "v8.h"

#include "eventdispatcherlibuv.h"
#include "uv.h"

#include "../../lib/node/src/node.h"
#include "../../lib/node/src/node_internals.h"

#include "cpgfApi.h"

using namespace std;

namespace node {
char** Init(int argc, char *argv[]);
v8::Handle<v8::Object> SetupProcessObject(int argc, char *argv[]);
void Load(v8::Handle<v8::Object> process_l);
void EmitExit(v8::Handle<v8::Object> process_l);
void RunAtExit();
}

namespace {

int __exitCode = -1;


using namespace cpgf;

struct CpgfBinder {
    GDefineMetaNamespace define;
    GScopedInterface<IMetaService> service;
    GScopedPointer<GScriptRunner> runner;
    GScopedInterface<IScriptObject> scriptObject;
    GScopedInterface<IMetaClass> metaClass;

    CpgfBinder(v8::Persistent<v8::Context> ctx)
        : define(GDefineMetaNamespace::declare("qt")),
          service(createDefaultMetaService()),
          runner(createV8ScriptRunner(service.get(), ctx)),
          scriptObject(runner->getScripeObject()),
          metaClass(static_cast<IMetaClass *>(metaItemToInterface(define.getMetaClass())))
    {
        qtjs_binder::registerQt(define);
        scriptObject->bindCoreService("cpgf", NULL);
        scriptSetValue(scriptObject.get(), "qt", GScriptValue::fromClass(metaClass.get()));
    }

    ~CpgfBinder()
    {
        qtjs_binder::unregisterQt();
    }
};

static char **copy_argv(int argc, char **argv) {
    size_t strlen_sum;
    char **argv_copy;
    char *argv_data;
    size_t len;
    int i;

    strlen_sum = 0;
    for(i = 0; i < argc; i++) {
        strlen_sum += strlen(argv[i]) + 1;
    }

    argv_copy = (char **) malloc(sizeof(char *) * (argc + 1) + strlen_sum);
    if (!argv_copy) {
        return NULL;
    }

    argv_data = (char *) argv_copy + sizeof(char *) * (argc + 1);

    for(i = 0; i < argc; i++) {
        argv_copy[i] = argv_data;
        len = strlen(argv[i]) + 1;
        memcpy(argv_data, argv[i], len);
        argv_data += len;
    }

    argv_copy[argc] = NULL;

    return argv_copy;
}

v8::Handle<v8::Value> Exit(const v8::Arguments& args) {
    v8::HandleScope scope;
    __exitCode = args[0]->IntegerValue();
    qApp->exit(__exitCode);
    return v8::Undefined();
}



} // namespace



int main(int argc, char * argv[])
{
    // Hack aroung with the argv pointer. Used for process.title = "blah".
    argv = uv_setup_args(argc, argv);

    // Logic to duplicate argv as Init() modifies arguments
    // that are passed into it.
    char **argv_copy = copy_argv(argc, argv);

    auto ev_dispatcher = new ::qtjs::EventDispatcherLibUv();
    QCoreApplication::setEventDispatcher(ev_dispatcher);
    QApplication *app = new QApplication(argc, argv);
    ev_dispatcher->setFinalise();

    // This needs to run *before* V8::Initialize()
    // Use copy here as to not modify the original argv:
    node::Init(argc, argv_copy);

    v8::V8::Initialize();
    {
        v8::Locker locker;
        v8::HandleScope handle_scope;

        // Create the one and only Context.
        v8::Persistent<v8::Context> context = v8::Context::New();
        v8::Context::Scope context_scope(context);

        {
            // Use original argv, as we're just copying values out of it.
            v8::Handle<v8::Object> process_l = node::SetupProcessObject(argc, argv);
            NODE_SET_METHOD(process_l, "reallyExit", Exit);
            v8_typed_array::AttachBindings(context->Global());

            CpgfBinder cpgfBinder(context);

            node::Load(process_l);

            if (__exitCode < 0) {
                try {
                    QCoreApplication::exec();
                } catch (const char * &e) {
                    std::cerr << "failed execution: "<<e<<std::endl;
                }
            }

            node::EmitExit(process_l);
            node::RunAtExit();

            context->Global().Clear();
        }

        delete app;
        context.Dispose();
    }
    v8::V8::Dispose();
    cpgf::shutDownLibrary();

    // Clean up the copy:
    free(argv_copy);

    return __exitCode;
}

