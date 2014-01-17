// Auto generated file, don't modify.

#include <QtCore/qglobal.h>
#include <QtCore/QEvent>
#include <QtCore/QDebug>
#include <QtCore/QState>
#include <QtGui/QOpenGLPixelTransferOptions>

#include <QtGui/qpolygon.h>

#include "meta_qtgui_qpolygon.h"

using namespace cpgf;

namespace meta_qtgui { 


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_Global_qpolygon()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    buildMetaClass_Global_qpolygon(0, _d);
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QPolygon()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QPolygon, QVector< QPoint >> _nd = GDefineMetaClass<QPolygon, QVector< QPoint >>::declare("QPolygon");
        buildMetaClass_QPolygon(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


#ifdef DLL_PUBLIC
DLL_PUBLIC
#endif
GDefineMetaInfo createMetaClass_QPolygonF()
{
    GDefineMetaGlobalDangle _d = GDefineMetaGlobalDangle::dangle();
    {
        GDefineMetaClass<QPolygonF, QVector< QPointF >> _nd = GDefineMetaClass<QPolygonF, QVector< QPointF >>::declare("QPolygonF");
        buildMetaClass_QPolygonF(0, _nd);
        _d._class(_nd);
    }
    return _d.getMetaInfo();
}


} // namespace meta_qtgui


