"use strict"

require('./core.js')
var path = require('path')

cpgf.import("cpgf", "builtin.core");

qt.extend = function(classToExtend, methods) {
    var newClass = cpgf.cloneClass(eval("qt."+classToExtend.name+"Wrapper"));
    for (var method in methods) {
        newClass[method] = methods[method];
    }
    return newClass
}


qt.newQmlComponent = function(name, def) {
    var builder = new qt.DynamicMetaObjectBuilder()
    builder.setClassName(name)
    if (def.parent) {
        builder.setParentClass(def.parent)
    }
    if (def.init) {
        builder.setInit(def.init)
    }
    if (def.properties) {
        for (var property in def.properties) {
            builder.addProperty(property, def.properties[property])
        }
    }
    if (def.signals) {
        for (var signalDesc in def.signals) {
            var paramNames = new qt.QStringList()
            var paramLen = def.signals[signalDesc].length
            for (var paramIdx = 0; paramIdx < paramLen; paramIdx++) {
                paramNames.append(def.signals[signalDesc][paramIdx])
            }
            builder.addSignal(signalDesc, paramNames)
        }
    }
    if (def.slots) {
        for (var slot in def.slots) {
            builder.addSlot(slot, def.slots[slot])
        }
    }
    qt.finalizeAndRegisterMetaObjectBuilderToQml(builder, "org.qtjs", 1, 0, name)
};




var MySyntaxHighlighter = qt.extend( qt.QSyntaxHighlighter,
{
    highlightBlock : function(text) {
        var myClassFormat = new qt.QTextCharFormat();
        myClassFormat.setFontWeight(qt.QFont.Bold);
        myClassFormat.setForeground(new qt.QBrush(new qt.QColor(qt.darkMagenta)));

        var expression = new qt.QRegExp("\\bMy[A-Za-z]+\\b");
        var index = expression.indexIn(text);
        while (index >= 0) {
            var length = expression.matchedLength();
            this.setFormat(index, length, myClassFormat);
            index = expression.indexIn(text, index + length);
        }
    }
});

(function() {
    var highlighter;


    qt.newQmlComponent("KeyGenerator", {
        init: function() {
            var generatorTypes = new qt.QStringList()
            generatorTypes.append("rsa")
            generatorTypes.append("dsa")
            this.setProperty("types", new qt.QVariant(generatorTypes))
            this.setProperty("type", new qt.QVariant("rsa"))
        },
        properties: {
            "type": "QString",
            "types": "QStringList",
            "passphrase": "QString",
            "filename": "QString"
        },
        signals: {"keyGenerated(bool)": ["success"]},
        slots: {
            'generateKey()': function() {
                var log = new qt.QMessageLogger()

                log.debug()
                  ._opLeftShift("invoking generate! ")
                  ._opLeftShift(this.property("passphrase").toString())

                qt.emitSignal(this, "keyGenerated(bool)", new qt.QVariant(true))
            }
        }
    });

    qt.newQmlComponent("IntIncrementer", {
        init: function() {
            this.setProperty("value", new qt.QVariant(0))
        },
        properties: {"value": "int"},
        signals: {"incremented(int)": ["newValue"]},
        slots: {
            'increment()': function() {
                this.setProperty('value', new qt.QVariant(this.property("value").toInt() + 1))
                qt.emitSignal(this, "incremented(int)", new qt.QVariant(this.property("value").toInt()))
            }
        }
    });

    (function() {

        var WaveAngleClass = qt.extend( qt.QQuickItem,
        {
            updatePaintNode : function(node, data) {
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
                var rect = this.boundingRect();
                var vertices = geometry.vertexDataAsPoint2D();
                qt.arrayValueForOffset_Point2D(vertices, 0).set(0, 0);
                qt.arrayValueForOffset_Point2D(vertices, 1).set(
                    this.property("width").toInt(),
                    this.property("height").toInt()
                );

                var textLayout = new qt.QTextLayout("test text!");
                textLayout.beginLayout();
                while (1) {
                  var line = textLayout.createLine();
                  if (!line.isValid())
                            break;

                }
                textLayout.endLayout();
                var glyphList = textLayout.glyphRuns();
                if (!glyphList.empty()) {
                  var privateApi = qt.QQuickItemPrivate.get(this);
                  //var glyphNode = privateApi.sceneGraphContext().createGlyphNode(privateApi.sceneGraphRenderContext());
                  var glyphNode = privateApi.sceneGraphContext().createNativeGlyphNode(privateApi.sceneGraphRenderContext());

                  glyphNode.setGlyphs(new qt.QPointF(0, 0), glyphList.front());
                  glyphNode.update();
                  node.appendChildNode(glyphNode);
                }



                return node;
            }
        });

        qt.newQmlComponent("Waveangle", {
            parent : WaveAngleClass,
            init : function() {
                this.setFlag(qt.QQuickItem.Flag.ItemHasContents)
                var label = new qt.QQuickText(this);
                label.setText("a text label");
            }
        });
    })();

    try {
        var engine = new qt.QQmlEngine()
        var component = new qt.QQmlComponent(engine, path.resolve("qml/main.qml"))
        if (!component.isReady()) {
            throw component.errorString()
        }

        qt.QCoreApplication.instance().connect(engine, '2quit()', '1quit()')

        var topLevel = component.create();
        var window = cpgf.cast(topLevel, qt.QQuickWindow);
        var surfaceFormat = window.requestedFormat();
        window.setFormat(surfaceFormat);

        var findChild = function(obj, name) {
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
