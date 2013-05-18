
//a = 23;

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

  var machine = new qt.QStateMachine();
  var s1 = new qt.QState();
  var s2 = new qt.QState();

  qt.connect(s1, 'objectNameChanged(const QString &)', function(name){
    log.debug()
      ._opLeftShift(new qt.QString("NAME CHANGED! "+name))
    ;
  });
})();

/*
delete pt;
delete log;
pt = null;
log = null;
*/
