"use strict"

cpgf.import("cpgf", "builtin.core");

qt.extend = function(classToExtend, methods) {
    var newClass = cpgf.cloneClass(eval("qt." + classToExtend.name + "Wrapper"));
    for (var method in methods) {
        if (newClass[method]) {
            newClass[method] = methods[method];

        } else {
            newClass.prototype[method] = methods[method]
        }
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
