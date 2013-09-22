cpgf.import("cpgf", "builtin.core");

(function() {
    "use strict";

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

