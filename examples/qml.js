(function() {
    "use strict";

//    var engine = new qt.QQmlEngine();
//    var component = new qt.QQmlComponent(engine, new qt.QString("qml/main.qml"));
//    component.create();
    var window = new qt.QQuickView();
    window.setSource(qt.QUrl.fromLocalFile(new qt.QString("qml/main.qml")));
    window.show();

    qt.setExitCode(
       qt.QCoreApplication.instance().exec()
    );
})();

