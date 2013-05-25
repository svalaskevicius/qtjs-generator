
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

  //  var machine = new qt.QStateMachine();
  //  var s1 = new qt.QState();
  //  var s2 = new qt.QState();

  var obj = new qt.QObject();
  qt.connect(obj, 'objectNameChanged(const QString &)', function(name){
    log.debug()
    ._opLeftShift(new qt.QString("NAME CHANGED! "+name))
    ._opLeftShift(name)
    ;
  });
  log.debug()
  ._opLeftShift(new qt.QString("connected"))
  ;
  obj.setObjectName(new qt.QString("asd"));

})();

MyWindow = function() {
    this.prototype = this.__proto__ = new qt.QMainWindow();

    var log = new qt.QMessageLogger();
    qt.connect(this, 'customContextMenuRequested(const QPoint &)', function(point) {
        log.debug()._opLeftShift("received signal\n"+point.x());
    });
    qt.connect(this, 'destroyed(QObject *)', function(object) {
        log.debug()._opLeftShift("received destroy signal\n");
    });
    this.customContextMenuRequested(new qt.QPoint(1, 1));
}


var w = new MyWindow();
w.show();

