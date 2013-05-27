
cpgf.import("cpgf", "builtin.core");

function createGraphicsView() {
    var scene = new qt.QGraphicsScene();
    var view = new qt.QGraphicsView(scene);
    //view.setViewport(new qt.QGLWidget(new qt.QGLFormat(qt.QGL.SampleBuffers)));

    //scene.addRect(new qt.QRectF(10, 20, 30, 40), new qt.QPen(new qt.QColor(70, 130, 50)), new qt.QBrush(new qt.QColor(100, 240, 90)));
    var myQGraphicsRectItem = cpgf.cloneClass(qt.QGraphicsRectItem);
    /*
    myQGraphicsRectItem.mouseMoveEvent = function($this, event) {
      // not tested yet
      scene.rotate(10);
    };
    myQGraphicsRectItem.paint = function($this, painter, option, widget) {
      // not tested yet
      scene.rotate(10);
    };
    */
    var myItem = new myQGraphicsRectItem(new qt.QRectF(20, 30, 40, 50));
    scene.addItem(myItem);
    scene.addRect(new qt.QRectF(10, 20, 30, 40));

    // myItem.grabMouse(); <- still needs more classes enabled
    //myItem.paint(1, 2, 3);

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
  var w = createMainWindow();
  w.show();
})();

