
cpgf.import("cpgf", "builtin.core");

pt = new qt.QPoint(1, 2);

(function(){
  var pt = new qt.QPoint(1, 2);
  var log = new qt.QMessageLogger();

  //  log.debug()._opLeftShift(pt.toString())._opLeftShift("asd")._opLeftShift(123);
  log.debug()
  ._opLeftShift(qt.QString.fromLatin1(pt.toString()))
  ._opLeftShift("asd")
  ._opLeftShift(123)
  ._opLeftShift(pt.y())
  ._opLeftShift(qt.qHash("test"))
  ;

  //var machine = new qt.QStateMachine();
  //var s1 = new qt.QState();
  //var s2 = new qt.QState();

  var obj = new qt.QObject();
  qt.connect(obj, 'objectNameChanged(const QString &)', function(name){
    log.debug()
    ._opLeftShift(new qt.QString("NAME CHANGED! "+name))
    ;
  });

  obj.setObjectName(new qt.QString("asd"));

})();

function createWindow() {
    var MyWindow = cpgf.cloneClass(qt.QMainWindow);

    var self = new MyWindow();

    var log = new qt.QMessageLogger();

    var asQO = cpgf.cast(self, qt.QObject);
    log.debug()._opLeftShift(qt.QString.fromLatin1(self.toString()));
    log.debug()._opLeftShift(qt.QString.fromLatin1(asQO.toString()));

    qt.connect(self, 'customContextMenuRequested(const QPoint &)', function(point) {
      log.debug()._opLeftShift(qt.QString.fromLatin1("received signal: "+point.x()));
    });
    self.customContextMenuRequested(new qt.QPoint(12, 10));
    self.setContextMenuPolicy(qt.CustomContextMenu);

    return self;
}


var w = createWindow();
w.show();

