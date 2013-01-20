/****************************************************************************
**
** Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
** Copyright (C) 2012 Intel Corporation
** Contact: http://www.qt-project.org/legal
**
** This file is part of the QtCore module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QCOMPILERDETECTION_H
#define QCOMPILERDETECTION_H

#ifndef Q_NORETURN
# define Q_NORETURN
#endif
#ifndef Q_PACKED
#  define Q_PACKED
#  undef Q_NO_PACKED_REFERENCE
#endif
#ifndef Q_LIKELY
#  define Q_LIKELY(x) (x)
#endif
#ifndef Q_UNLIKELY
#  define Q_UNLIKELY(x) (x)
#endif
#ifndef Q_ASSUME
#  define Q_ASSUME(expr) qt_noop()
#endif
#ifndef Q_UNREACHABLE
#  define Q_UNREACHABLE() qt_noop()
#endif
#ifndef Q_ALLOC_SIZE
#  define Q_ALLOC_SIZE(x)
#endif
#ifndef Q_REQUIRED_RESULT
#  define Q_REQUIRED_RESULT
#endif
#ifndef Q_DECL_DEPRECATED
#  define Q_DECL_DEPRECATED
#endif
#ifndef Q_DECL_VARIABLE_DEPRECATED
#  define Q_DECL_VARIABLE_DEPRECATED Q_DECL_DEPRECATED
#endif


#define Q_DECL_EXPORT
//___EXPORTED_API___


#ifndef Q_DECL_IMPORT
#  define Q_DECL_IMPORT
#endif
#ifndef Q_DECL_HIDDEN
#  define Q_DECL_HIDDEN
#endif
#    define Q_FUNC_INFO __FILE__ ":" QT_STRINGIFY(__LINE__)

#define qMove(x) (x)

#endif // QCOMPILERDETECTION_H
