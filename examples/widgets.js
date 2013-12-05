cpgf.import("cpgf", "builtin.core");


function error(text)
{
    var log = new qt.QMessageLogger();
    log.critical()._opLeftShift(new qt.QString(text));
    //log.critical()._opLeftShift(text);
}

var App = (function(App) {
    App.MovingRectItem = cpgf.cloneClass(qt.QGraphicsRectItemWrapper);
    App.MovingRectItem.mouseMoveEvent = function($this /*, event */ ) {
        $this.setRotation(1 + $this.rotation());
    };
    App.MovingRectItem.prototype.getDirection = function() {
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
    App.MovingRectItem.paint = function($this, painter, option, widget) {
        var r = $this.rect();
        r.setRight(r.right() + $this.getDirection());
        $this.setRect(r);
        $this.super_paint(painter, option, widget);
    };

    App.createMovingRectItem = function(rect) {
        var item = new App.MovingRectItem(rect);
        item.speed = 2;
        return item;
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
    scene.deps = [myItem];
    view.deps = [scene];

    return view;
}

function createMainWindow() {
    var self = new qt.QMainWindow();
    var centralView = new qt.QWidget();
    var layout = new qt.QVBoxLayout();

    layout.addWidget(new qt.QLabel(new qt.QString("Label")));
    layout.addWidget((function() {
        var tabbed = new qt.QTabWidget();

        tabbed.addTab(new qt.QLabel(new qt.QString("Label 1")), new qt.QString("Page 1"));
        tabbed.addTab(new qt.QLabel(new qt.QString("Label 2")), new qt.QString("Page 2"));
        tabbed.addTab(createGraphicsView(), new qt.QString("GraphicsView"));

        return tabbed;
    })());

    centralView.setLayout(layout);
    self.setCentralWidget(centralView);

    return self;
}

(function() {
    try {
        var window = createMainWindow();
        window.show();
        qt.setExitCode(
           qt.QCoreApplication.instance().exec()
        );
    } catch (e) {
        error(e);
        qt.setExitCode(1);
    }
})();
