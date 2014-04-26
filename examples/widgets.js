cpgf.import("cpgf", "builtin.core");

var globalData = [];

function error(text)
{
    var log = new qt.QMessageLogger();
    log.critical()._opLeftShift(text);
}

var App = (function(App) {
    App.MovingRectItem = cpgf.cloneClass(qt.QGraphicsRectItemWrapper);
    App.MovingRectItem.mouseMoveEvent = function( event  ) {
        this.setRotation(1 + this.rotation());
    };

    App.MovingRectItem.prototype.getDirection = function() {
        return Math.round(Math.random()*20-10);
    };

    App.MovingRectItem.paint = function(painter, option, widget) {
        var r = this.rect();
        r.setRight(r.right() + this.getDirection());
        this.setRect(r);
        this.super_paint(painter, option, widget);
    };

    App.createMovingRectItem = function(rect) {
        return new App.MovingRectItem(rect);
    };

    return App;

})(App || {});

function createGraphicsView() {

    var myItem = App.createMovingRectItem(new qt.QRectF(20, 30, 40, 50));

    var scene = new qt.QGraphicsScene();
    var view = new qt.QGraphicsView(scene);
    // view.setViewport(new qt.QGLWidget(new qt.QGLFormat(qt.QGL.SampleBuffers)));

    scene.addItem(myItem);
    scene.addRect(new qt.QRectF(10, 20, 30, 40));

    myItem.grabMouse();

    view.setMouseTracking(true);

    // needed for GC not to free the variables while they're still required
    globalData.push(myItem);
    globalData.push(scene);

    return view;
}

function createMainWindow() {
    var self = new qt.QMainWindow();
    var centralView = new qt.QWidget();
    var layout = new qt.QVBoxLayout();

    layout.addWidget(new qt.QLabel("Label"));
    layout.addWidget((function() {
        var tabbed = new qt.QTabWidget();

        tabbed.addTab(new qt.QLabel("Label 1"), "Page 1");
        tabbed.addTab(new qt.QLabel("Label 2"), "Page 2");
        tabbed.addTab(createGraphicsView(), "GraphicsView");

        return tabbed;
    })());

    centralView.setLayout(layout);
    self.setCentralWidget(centralView);

    return self;
}

try {
    var window = createMainWindow();
    window.show();
    process.exit(
       qt.QCoreApplication.instance().exec()
    );
} catch (e) {
    error(e);
    process.exit(1);
}
