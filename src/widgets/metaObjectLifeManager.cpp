
#include <qtWidgets_cpgf_compat.h>


namespace cpgf {

namespace qtjs {

namespace MetaObjectLifeManager {


void AutoTreeHelper<QGraphicsObject>::deleteObjectTree(QGraphicsObject *object) {
    deleteFromMemorySet(object);
    for (QObject * c : object->children()) {
        AutoTreeHelper<QObject>::deleteObjectTree(c);
    }
    for (QGraphicsItem * c : object->childItems()) {
        AutoTreeHelper<QGraphicsItem>::deleteObjectTree(c);
    }
}

}

}
}
