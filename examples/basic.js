
cpgf.import("cpgf", "builtin.core");

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

    centralView.setLayout(layout);
    self.setCentralWidget(centralView);

    return self;
}

(function(){
  var w = createMainWindow();
  w.show();
})();

