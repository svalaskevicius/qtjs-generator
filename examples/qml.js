qt.include("core.js");

cpgf.import("cpgf", "builtin.core");

(function() {
    "use strict";

    {
        var b = new qt.DynamicMetaObjectBuilder();
        b.setClassName("KeyGenerator");
        b.setInit(function($this){
            $this.setProperty("type", new qt.QVariant(new qt.QString("rsa")));
            var aa = new qt.QStringList();
            aa._opLeftShift(new qt.QString("rsa"));
            aa._opLeftShift(new qt.QString("dsa"));
            $this.setProperty("types", new qt.QVariant(aa));
        });
        var aa = new qt.QStringList();
        aa._opLeftShift(new qt.QString("success"));

        b.addSignal("keyGenerated(bool)", aa);
        b.addProperty("type", "QString");
        b.addProperty("types", "QStringList");
        b.addProperty("passphrase", "QString");
        b.addProperty("filename", "QString");

        b.addSlot('generateKey()', function($this){
            var log = new qt.QMessageLogger();

            log.debug()
            ._opLeftShift(new qt.QString("invoking generate! "))
            ._opLeftShift($this.property("passphrase").toString());

            $this.emitSignal("keyGenerated(bool)", new qt.QVariant(true));
        });

        qt.finalizeAndRegisterMetaObjectBuilderToQml(b, "com.ics.demo", 1, 0, "KeyGenerator");
    }




    {
        var b = new qt.DynamicMetaObjectBuilder();
        b.setClassName("IntIncrementer");
        b.setInit(function($this){
            $this.setProperty("value", new qt.QVariant(0));
        });
        var aa = new qt.QStringList();
        aa._opLeftShift(new qt.QString("newValue"));
        b.addSignal("incremented(int)", aa);
        b.addProperty("value", "int");
        b.addSlot('increment()', function($this){
            $this.setProperty('value', new qt.QVariant($this.property("value").toInt()+1));
            $this.emitSignal("incremented(int)", new qt.QVariant($this.property("value").toInt()));
        });

        qt.finalizeAndRegisterMetaObjectBuilderToQml(b, "com.ics.demo", 1, 0, "IntIncrementer");
    }




    try {
        var engine = new qt.QQmlEngine();
        //    engine.rootContext().setContextProperty(new qt.QString('keygen'), qt.newKeyGenerator());
        var component = new qt.QQmlComponent(engine, new qt.QString(qt.makeIncludePathAbsolute("qml/main.qml")));
        if (!component.isReady() ) {
            throw component.errorString();
        }

        qt.QCoreApplication.instance().connect(engine, '2quit()', '1quit()');

        var topLevel = component.create();
        var window = cpgf.cast(topLevel, qt.QQuickWindow);
        var surfaceFormat = window.requestedFormat();
        window.setFormat(surfaceFormat);
        window.show();

    } catch(err) {
        if (err instanceof qt.QString) {
            var log = new qt.QMessageLogger();
            log.critical()._opLeftShift(err);
            qt.setExitCode(1);
            return;
        }
        throw err;
    }


    qt.setExitCode(
        qt.QCoreApplication.instance().exec()
    );
})();

