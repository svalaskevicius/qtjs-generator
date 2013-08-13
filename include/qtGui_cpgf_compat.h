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


namespace cpgf {

NOT_CONVERTIBLE(::QTransform)
NOT_CONVERTIBLE(::QMatrix)
NOT_CONVERTIBLE(::QMatrix4x4)

template <>
struct IsConvertible <const QOpenGLContext &, const cpgf::IObject &> {
    G_STATIC_CONSTANT(bool, Result = false);
};


}
