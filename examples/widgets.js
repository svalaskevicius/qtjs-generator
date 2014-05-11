cpgf.import("cpgf", "builtin.core");
require("./qt")

var App = (function(App) {
    App.MovingRectItem = qt.extend(qt.QGraphicsRectItem, {
        mouseMoveEvent: function(event) {
            this.setRotation(1 + this.rotation());
        },
        getDirection: function() {
            if (typeof this.direction === 'undefined') {
                this.direction = this.speed;
            }
            var r = this.rect();
            if (r.right() > (r.left() + 100)) {
                this.direction = -this.speed;
            } else if (r.right() <= r.left()) {
                this.direction = this.speed;
            }
            return this.direction;
        },
        paint: function(painter, option, widget) {
            var r = this.rect();
            r.setRight(r.right() + this.getDirection());
            this.setRect(r);
            this.super_paint(painter, option, widget);
        }
    });

    App.createMovingRectItem = function(rect) {
        var obj = new App.MovingRectItem(rect);
        obj.speed = 1;
        keepQtObjectUntilItsFreed(obj);
        return obj;
    };

    return App;

})(App || {});

function createGraphicsView() {

    var myItem = App.createMovingRectItem(new qt.QRectF(20, 30, 40, 50));

    var scene = new qt.QGraphicsScene();
    keepQtObjectUntilItsFreed(scene);
    var view = new qt.QGraphicsView(scene);
    // view.setViewport(new qt.QGLWidget(new qt.QGLFormat(qt.QGL.SampleBuffers)));

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
    console.error(e);
    process.exit(1);
}
