(function() {
    "use strict";

    var pt = new qt.QPoint(1, 2);
    var log = new qt.QMessageLogger();

    log.debug()
        ._opLeftShift(qt.QString.fromLatin1(pt.toString()))
        ._opLeftShift(new qt.QString("a string"))
        ._opLeftShift("a string. seconds string")
        ._opLeftShift(123)
        ._opLeftShift(true)
        ._opLeftShift(pt.y())
        ._opLeftShift(qt.qHash("test"));

    var obj = new qt.QObject();
    qt.connect(obj, 'objectNameChanged(const QString &)', function(name) {
        log.debug()
            ._opLeftShift("NAME CHANGED! " + name.toLatin1().constData());
    });

    obj.setObjectName("new name");
})();

