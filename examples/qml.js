"use strict"

require('./core.js')
var path = require('path')

cpgf.import("cpgf", "builtin.core");

var MySyntaxHighlighter = cpgf.cloneClass(qt.QSyntaxHighlighterWrapper);
MySyntaxHighlighter.highlightBlock = function($this , text ) {
    var myClassFormat = new qt.QTextCharFormat();
    myClassFormat.setFontWeight(qt.QFont.Bold);
    myClassFormat.setForeground(new qt.QBrush(new qt.QColor(qt.darkMagenta)));
    var pattern = new qt.QString("\\bMy[A-Za-z]+\\b");

    var expression = new qt.QRegExp(pattern);
    var index = expression.indexIn(text);
    while (index >= 0) {
        var length = expression.matchedLength();
        $this.setFormat(index, length, myClassFormat);
        index = expression.indexIn(text, index + length);
    }
};


(function() {

    var highlighter;
    (function(){
        var b = new qt.DynamicMetaObjectBuilder()
        b.setClassName("KeyGenerator")
        b.setInit(function ($this) {
            $this.setProperty("type",
                              new qt.QVariant(new qt.QString("rsa")))
            var aa = new qt.QStringList()
            aa._opLeftShift(new qt.QString("rsa"))
            aa._opLeftShift(new qt.QString("dsa"))
            $this.setProperty("types", new qt.QVariant(aa))
        })
        var aa = new qt.QStringList()
        aa._opLeftShift(new qt.QString("success"))

        b.addSignal("keyGenerated(bool)", aa)
        b.addProperty("type", "QString")
        b.addProperty("types", "QStringList")
        b.addProperty("passphrase", "QString")
        b.addProperty("filename", "QString")

        b.addSlot('generateKey()', function ($this) {
            var log = new qt.QMessageLogger()

            log.debug()._opLeftShift(
                        new qt.QString("invoking generate! "))._opLeftShift(
                        $this.property("passphrase").toString())

            qt.emitSignal($this, "keyGenerated(bool)",
                             new qt.QVariant(true))
        })

        qt.finalizeAndRegisterMetaObjectBuilderToQml(b,
                                                     "com.ics.demo", 1,
                                                     0, "KeyGenerator")
    })();

    (function(){
        var b = new qt.DynamicMetaObjectBuilder()
        b.setClassName("IntIncrementer")
        b.setInit(function ($this) {
            $this.setProperty("value", new qt.QVariant(0))
        })
        var aa = new qt.QStringList()
        aa._opLeftShift(new qt.QString("newValue"))
        b.addSignal("incremented(int)", aa)
        b.addProperty("value", "int")
        b.addSlot('increment()', function ($this) {
            $this.setProperty('value',
                              new qt.QVariant($this.property(
                                                  "value").toInt() + 1))
            qt.emitSignal($this, "incremented(int)",
                             new qt.QVariant($this.property(
                                                 "value").toInt()))
        })

        qt.finalizeAndRegisterMetaObjectBuilderToQml(b, "com.ics.demo",
                                                     1, 0,
                                                     "IntIncrementer")
    })();

    (function(){

        var WaveAngleClass = cpgf.cloneClass(qt.QQuickItemWrapper);
        WaveAngleClass.updatePaintNode = function($this, node, data) {
          if (!node) {
             node = new qt.QSGGeometryNode();
             var geometry = new qt.QSGGeometry(qt.QSGGeometry.defaultAttributes_Point2D(), 2);

             geometry.setLineWidth(2);
             geometry.setDrawingMode( /* GL_LINE_STRIP */ 3);
             node.setGeometry(geometry);
             cpgf.setAllowGC(geometry, false);
             node.setFlag(qt.QSGNode.OwnsGeometry);
             var material = new qt.QSGFlatColorMaterial();
             material.setColor(new qt.QColor(155, 120, 100));
             node.setMaterial(material);
             cpgf.setAllowGC(material, false);
             node.setFlag(qt.QSGNode.OwnsMaterial);
          }
          var rect = $this.boundingRect();
          var vertices = geometry.vertexDataAsPoint2D();
          qt.arrayValueForOffset_Point2D(vertices, 0).set(0, 0);
          qt.arrayValueForOffset_Point2D(vertices, 1).set(
              $this.property("width").toInt(),
              $this.property("height").toInt()
          );
          return node;
        }

        var b = new qt.DynamicMetaObjectBuilder()
        b.setClassName("Wavangle")
        b.setParentClass(WaveAngleClass)
        b.setInit(function ($this) {
          $this.setFlag(qt.QQuickItem.Flag.ItemHasContents)
        })
        qt.finalizeAndRegisterMetaObjectBuilderToQml(b, "com.ics.demo",
                                                     1, 0,
                                                     "Waveangle")
    })();

    try {
        var engine = new qt.QQmlEngine()
        var component = new qt.QQmlComponent(engine,
                                                 new qt.QString(path.resolve("qml/main.qml")))
        if (!component.isReady()) {
            throw component.errorString()
        }

        qt.QCoreApplication.instance().connect(engine, '2quit()',
                                               '1quit()')

        var topLevel = component.create();
        var window = cpgf.cast(topLevel, qt.QQuickWindow);
        var surfaceFormat = window.requestedFormat();
        window.setFormat(surfaceFormat);

        var findChild = function (obj, name) {
            var begin = obj.children().cbegin();
            var end = obj.children().cend();
            for (var o = begin; o._opNotEqual(end); o._opIncSuffix()) {
                if (o._opDerefer().objectName()._opEqual(name)) {
                    return o._opDerefer();
                }
                var ret = findChild(o._opDerefer(), name);
                if (ret) {
                    return ret;
                }
            }
            return null;
        }
        var edit = findChild(topLevel, "editor");
        if (edit) {
            edit = qt.objectFromVariant(edit.property("textDocument"));
            if (edit) {
              edit = cpgf.cast(edit, qt.QQuickTextDocument);
              highlighter = new MySyntaxHighlighter(edit.textDocument());
            }
        }
        window.show()
    } catch (err) {
        if (err instanceof qt.QString) {
            var log = new qt.QMessageLogger()
            log.critical()._opLeftShift(err)
            process.exit(1)
            return
        }
        throw err
    }

})()
