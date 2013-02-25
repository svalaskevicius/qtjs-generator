
var stdout = new qt.QFile();
stdout.open(1, new qt.QFlags_QIODevice_OpenModeFlag_(new qt.QFlag(2)));
var stderr = new qt.QFile();
stderr.open(2, new qt.QFlags_QIODevice_OpenModeFlag_(new qt.QFlag(2)));


var time = new qt.QTime();
time.start();

MyWindow = function() {
    this.prototype = this.__proto__ = new qt.QMainWindow();

    qt.connect(this, 'customContextMenuRequested(QPoint)', function(point) {
        stdout.write("received signal\n"+point.x());
    });
    qt.connect(this, 'destroyed(QObject *)', function(object) {
        stdout.write("received destroy signal\n");
    });
    this.customContextMenuRequested(new qt.QPoint(1, 1));
}


var w = new MyWindow();
w.show();


w.childAt(1, 2);
w.childAt(new qt.QPoint(2, 4));

stderr.write("text in stderr\n");

for (var i=1;i<1000000;i++) {
    j=i*i*i;
}

var message = new qt.QString("stdout: time elapsed: %1");
var xx = message.arg(11);
stdout.write(xx.toLatin1());
stdout.close();
stderr.close();
time.elapsed();


