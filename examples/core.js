(function() {
    "use strict";

    var pt = new qt.QPoint(1, 2);
    var log = new qt.QMessageLogger();

    log.debug()
        ._opLeftShift(qt.programArguments().size())
        ._opLeftShift(qt.QString.fromLatin1(pt.toString()))
        ._opLeftShift(new qt.QString("a string"))
        ._opLeftShift(123)
        ._opLeftShift(true)
        ._opLeftShift(pt.y())
        ._opLeftShift(qt.qHash("test"));

    var obj = new qt.QObject();
    qt.connect(obj, 'objectNameChanged(const QString &)', function(name) {
        log.debug()
            ._opLeftShift(new qt.QString("NAME CHANGED! " + name));
    });

    obj.setObjectName(new qt.QString("new name"));
})();

qt.setExitCode(0);
