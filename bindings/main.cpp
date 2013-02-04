

#include <vu8/Module.hpp>
#include <vu8/Class.hpp>

#include <QApplication>
#include <QMainWindow>
#include <QJSEngine>
#include <QFile>


#include <typeinfo> 
#include <iostream>
#include <stdexcept>

#include <private/v8.h>

QT_BEGIN_NAMESPACE
extern Q_QML_EXPORT v8::Local<v8::Context> qt_QJSEngineV8Context(QJSEngine *);
extern Q_QML_EXPORT v8::Local<v8::Value> qt_QJSValueV8Value(const QJSValue &);
QT_END_NAMESPACE

namespace qtjs_binder {
void bind_QtCore(vu8::Module &module);
void bind_QtWidgets(vu8::Module &module);
}

static inline void bindApi(QJSEngine &engine)
{
    v8::HandleScope handleScope;
    v8::Local<v8::Context> context = qt_QJSEngineV8Context(&engine);
    v8::Context::Scope contextScope(context);

    QJSValue globalQJS = engine.globalObject();
    v8::Local<v8::Value> globalV8Value = qt_QJSValueV8Value(globalQJS);

    v8::Local<v8::Object> globalV8 = globalV8Value.As<v8::Object>();


    v8::HandleScope scope;

    // Create a module to add classes and functions to and return a
    // new instance of the module to be embedded into the v8 context
    vu8::Module mod;
     
    qtjs_binder::bind_QtCore(mod);
    qtjs_binder::bind_QtWidgets(mod);

    globalV8->Set(
        v8::String::New("api"),
        mod
        .NewInstance()
    );
}


static inline void run(QJSEngine &engine, const char * code)
{
    v8::HandleScope handleScope;
    v8::Local<v8::Context> context = qt_QJSEngineV8Context(&engine);
    v8::Context::Scope contextScope(context);
    
    
    int startLineNumber = 0;
    v8::ScriptOrigin origin(v8::String::New("test.js"), v8::Integer::New(startLineNumber));

    v8::Local<v8::Script> script = v8::Script::Compile(
                v8::String::New(code),
	            &origin
    );


    v8::TryCatch tc;
    v8::Local<v8::Value> result = script->Run();

    if (tc.HasCaught()) {
        v8::Local<v8::Message> message = tc.Message();
    
        std::cout << *v8::String::AsciiValue(message->Get()) << std::endl;
        std::cout <<*v8::String::AsciiValue(message->GetScriptResourceName()) << ":" << message->GetLineNumber() << std::endl;
    } else {
        std::cout << "success!"<<std::endl;
        std::cout << vu8::FromV8<int>(result) << std::endl;
    }
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    if (argc != 2) {
        std::cerr << "usage: program <js file>" << std::endl;
        return 1;
    }

    QFile file(argv[1]);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        std::cerr << "failed to open the given js file" << std::endl;
        return 1;
    }

    QJSEngine jsEngine;

    bindApi(jsEngine);

    try {
        run(jsEngine, file.readAll());
    } catch (std::runtime_error const& e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << "some strange error happened. ... .. " << std::endl;
    }
    //MainWindow window;
    //window.show();

    return app.exec();
}

