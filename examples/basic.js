
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
})();

/*
delete pt;
delete log;
pt = null;
log = null;
*/
