cpgf.import("cpgf", "builtin.core");

    setSelf = function(self) {
      obj = self;
      while (typeof obj === 'object') {
        if (typeof obj.self !== 'undefined') {
          throw "setSelf trying to override this!";
        }
        obj.self = self;
        obj = obj.prototype;
      }
    }
    getSelf = function(self) {
      if (typeof self.self === 'undefined') {
        throw "getSelf does not have 'this' assigned, use setSelf first";
      }
      return self.self;
    }
function createGraphicsView() {

    myQGraphicsRectItem = cpgf.cloneClass(qt.QGraphicsRectItemWrapper);
    myQGraphicsRectItem.mouseMoveEvent = function($this, event) {
      $this.setRotation(1+$this.rotation());
    };
    myQGraphicsRectItem.prototype.getDirection = function() {
      var r = this.rect();
      if (r.right() > (r.left() + 100)) {
        this.direction = -this.speed;
      } else if (r.right() <= r.left()) {
        this.direction = this.speed;
      } else if (typeof this.direction === 'undefined') {
        this.direction = this.speed;
      }
      return this.direction;
    };
    myQGraphicsRectItem.paint = function($this, painter, option, widget) {
      var r = $this.rect();
      r.setRight(r.right() + getSelf($this).getDirection());
      $this.setRect(r);
      $this.super_paint(painter, option, widget);
    };

    childGraphicsRectItem = function(rect) {
      this.prototype = this.__proto__ = new myQGraphicsRectItem(rect);
      setSelf(this);
      this.speed = 2;
    };

    myItem = new childGraphicsRectItem(new qt.QRectF(20, 30, 40, 50));

    myQGraphicsScene = cpgf.cloneClass(qt.QGraphicsSceneWrapper);
    myQGraphicsView = cpgf.cloneClass(qt.QGraphicsViewWrapper);
    // view.setViewport(new qt.QGLWidget(new qt.QGLFormat(qt.QGL.SampleBuffers)));

    scene = new myQGraphicsScene();
    var view = new myQGraphicsView(scene);
    scene.addItem(myItem);
    scene.addRect(new qt.QRectF(10, 20, 30, 40));

    myItem.grabMouse();

    view.setMouseTracking(true);
    return view;
}

function createMainWindow() {
    var self = new qt.QMainWindow();

    var centralView = new qt.QWidget();
    var layout = new qt.QVBoxLayout();

    var label = new qt.QLabel(new qt.QString("Label"));
    layout.addWidget(label);

    var tabbed = new qt.QTabWidget();
    layout.addWidget(tabbed);

    var label1 = new qt.QLabel(new qt.QString("Label 1"));
    var label2 = new qt.QLabel(new qt.QString("Label 2"));
    tabbed.addTab(label1, new qt.QString("Page 1"));
    tabbed.addTab(label2, new qt.QString("Page 2"));

    tabbed.addTab(createGraphicsView(), "GraphicsView");

    centralView.setLayout(layout);
    self.setCentralWidget(centralView);

    return self;
}

(function(){
  var pt = new qt.QPoint(1, 2);
  var log = new qt.QMessageLogger();

  log.debug()
    ._opLeftShift(qt.QString.fromLatin1(pt.toString()))
    ._opLeftShift(new qt.QString("asd"))
    ._opLeftShift(123)
    ._opLeftShift(true)
    ._opLeftShift(pt.y())
    ._opLeftShift(qt.qHash("test"))
  ;

  var obj = new qt.QObject();
  qt.connect(obj, 'objectNameChanged(const QString &)', function(name){
    log.debug()
    ._opLeftShift(new qt.QString("NAME CHANGED! "+name))
    ;
  });

  obj.setObjectName(new qt.QString("asd"));

})();

var w = null;
(function(){
  w = createMainWindow();
  w.show();
})();

qt.setExitCode(
  qt.QCoreApplication.instance().exec()
);

