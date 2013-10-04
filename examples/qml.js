cpgf.import("cpgf", "builtin.core");

(function() {
    "use strict";

    var b = new qt.DynamicMetaObjectBuilder();
    b.setClassName(new qt.QString("KeyGenerator"));
    var aa = new qt.QStringList();
    aa._opLeftShift(new qt.QString("success"));
    b.addSignal(new qt.QString("keyGenerated(bool)"), aa);
    b.addProperty(new qt.QString("type"), new qt.QString("QString"));
    b.addProperty(new qt.QString("types"), new qt.QString("QStringList"));
    b.addProperty(new qt.QString("passphrase"), new qt.QString("QString"));
    b.addProperty(new qt.QString("filename"), new qt.QString("QString"));

    qt.finalizeAndRegisterMetaObjectBuilderToQml(b, "com.ics.demo", 1, 0, "KeyGenerator");

    try {
    var engine = new qt.QQmlEngine();
//    engine.rootContext().setContextProperty(new qt.QString('keygen'), qt.newKeyGenerator());
    var component = new qt.QQmlComponent(engine, new qt.QString("qml/main.qml"));
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


//    var window = new qt.QQuickView();
//    window.setSource(qt.QUrl.fromLocalFile(new qt.QString("qml/main.qml")));
//    window.show();

    qt.setExitCode(
       qt.QCoreApplication.instance().exec()
    );
})();

