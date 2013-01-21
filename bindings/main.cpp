

#include <vu8/Module.hpp>
#include <vu8/Class.hpp>

#include <QApplication>
#include <QMainWindow>
#include <QJSEngine>


#include <typeinfo> 
#include <iostream>
#include <stdexcept>

#include <private/v8.h>

QT_BEGIN_NAMESPACE
extern Q_QML_EXPORT v8::Local<v8::Context> qt_QJSEngineV8Context(QJSEngine *);
extern Q_QML_EXPORT v8::Local<v8::Value> qt_QJSValueV8Value(const QJSValue &);
QT_END_NAMESPACE


class MainWindow : public QMainWindow {
public:
    MainWindow(QWidget *p = 0) : QMainWindow() {}
    void show() {
        QMainWindow::show();
    }
};


static inline void bindApi(QJSEngine &engine)
{

    std::cout << typeid(typename vu8::detail::MemFunProto<MainWindow, void()>::method_type).name() << std::endl;
    std::cout << typeid(&QWidget::show).name() << std::endl;

    v8::HandleScope handleScope;
    v8::Local<v8::Context> context = qt_QJSEngineV8Context(&engine);
    v8::Context::Scope contextScope(context);

    QJSValue globalQJS = engine.globalObject();
    v8::Local<v8::Value> globalV8Value = qt_QJSValueV8Value(globalQJS);

    v8::Local<v8::Object> globalV8 = globalV8Value.As<v8::Object>();


    v8::HandleScope scope;
    vu8::Class<MainWindow, vu8::Factory<QWidget *> > _class_QMainWindow;
    _class_QMainWindow
            .Set<void (), &MainWindow::show>("show")
            ;

    // Create a module to add classes and functions to and return a
    // new instance of the module to be embedded into the v8 context
    vu8::Module mod;
     
    globalV8->Set(
        v8::String::New("api"),
        mod
            ("QMainWindow", _class_QMainWindow)
        .NewInstance()
    );
}


static inline void run(QJSEngine &engine)
{

    std::cout << typeid(typename vu8::detail::MemFunProto<MainWindow, void()>::method_type).name() << std::endl;
    std::cout << typeid(&MainWindow::show).name() << std::endl;

    v8::HandleScope handleScope;
    v8::Local<v8::Context> context = qt_QJSEngineV8Context(&engine);
    v8::Context::Scope contextScope(context);
    
    
    int startLineNumber = 0;
    v8::ScriptOrigin origin(v8::String::New("test.js"), v8::Integer::New(startLineNumber));

    v8::Local<v8::Script> script = v8::Script::Compile(
                v8::String::New(
                    "MyWindow = function(parent) {this.prototype = this.__proto__ = new api.QMainWindow(parent);} //.prototype.constructor.call(this, parent);};\n"
//                    "MyWindow.prototype = new api.QMainWindow(null);\n"
                    "var w = new MyWindow(null);\n"
//                    "var w = new api.QMainWindow(null);\n"
                    "w.show();"
                ),
	            &origin
    );


    v8::TryCatch tc;
    v8::Local<v8::Value> result = script->Run();

    if (tc.HasCaught()) {
        v8::Local<v8::Message> message = tc.Message();
    
        std::cout << *v8::String::AsciiValue(message->Get()) << std::endl;
        std::cout <<*v8::String::AsciiValue(message->GetScriptResourceName()) << std::endl;
        std::cout << message->GetLineNumber() << std::endl;
    }
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QJSEngine jsEngine;
    jsEngine.globalObject().setProperty("myNumber", 123);
    QJSValue myNumberPlusOne = jsEngine.evaluate("myNumber + 1");
    std::cout <<  myNumberPlusOne.toString().toStdString();

    bindApi(jsEngine);

    try {
        run(jsEngine);
    } catch (std::runtime_error const& e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << "some strange error happened. ... .. " << std::endl;
    }
    //MainWindow window;
    //window.show();

    return app.exec();
}

