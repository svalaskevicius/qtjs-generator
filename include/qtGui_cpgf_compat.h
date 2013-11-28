#pragma once

#include "./qtCore_cpgf_compat.h"

#include <QPainter>
#include <QPaintEngine>
#include <QTextBlock>
#include <QTextFrame>
#include <QTextCursor>
#include <QWindow>
#include <qmetaobject.h>
#include <QBitmap>
#include <QtWidgets/QAction>
#include <QMimeData>
#include <QScreen>
#include <QPalette>
#include <QSessionManager>
#include <QClipboard>
#include <QStyleHints>
#include <QIconEngine>
#include <QOpenGLContext>
#include <QStaticText>
#include <QPicture>
#include <QPicture>
#include <QImageReader>
#include <QTextDocument>
#include <QTextDocumentFragment>
#include <QTextTable>
#include <QTextList>
#include <QAbstractTextDocumentLayout>
#include <QVector2D>
#include <QVector3D>
#include <QVector4D>
#include <QAccessibleInterface>
#include <QtGui/5.2.0/QtGui/qpa/qplatformpixmap.h>


namespace cpgf {

NOT_CONVERTIBLE(::QTransform)
NOT_CONVERTIBLE(::QMatrix)
NOT_CONVERTIBLE(::QMatrix4x4)

template <>
struct IsConvertible <const QOpenGLContext &, const cpgf::IObject &> {
    G_STATIC_CONSTANT(bool, Result = false);
};


}
