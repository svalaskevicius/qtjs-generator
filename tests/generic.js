
var time = new api.QTime();
time.start();

MyWindow = function() {
    this.prototype = this.__proto__ = new api.QMainWindow();
}

var w = new MyWindow();
w.show();
w.childAt(1, 2);
w.childAt(new api.QPoint(2, 4));

for (var i=1;i<1000000;i++) {
    j=i*i*i;
}

time.elapsed();


