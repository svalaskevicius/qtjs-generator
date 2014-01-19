#pragma once

#include "./qtCore_cpgf_compat.h"

#include <QWidget>
#include <QDateTimeEdit>
#include <QAbstractItemView>
#include <QGraphicsView>
#include <QFontDialog>
#include <QGraphicsItem>
#include <QDockWidget>
#include <QColorDialog>
#include <QPinchGesture>
#include <QMainWindow>
#include <QStyle>
#include <QInputDialog>
#include <QDialogButtonBox>
#include <QMdiArea>
#include <QGestureRecognizer>
#include <QTextEdit>
#include <QFileDialog>
#include <QSizePolicy>
#include <QGraphicsScene>
#include <QGraphicsEffect>
#include <QGraphicsBlurEffect>
#include <QWizard>
#include <QAbstractSpinBox>
#include <QMessageBox>
#include <QTreeWidgetItemIterator>
#include <QFontComboBox>
#include <QMdiSubWindow>
#include <QStyleOptionFrame>
#include <QStyleOptionButton>
#include <QStyleOptionTab>
#include <QStyleOptionToolBar>
#include <QStyleOptionViewItem>
#include <QStyleOptionToolButton>

namespace cpgf {

template <typename From>
struct IsConvertible < From, ::QMatrix, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<From, bool>,
        IsSameType<From, char>,
        IsSameType<From, signed char>,
        IsSameType<From, unsigned char>,
        IsSameType<From, wchar_t>,
        IsSameType<From, int>,
        IsSameType<From, short int>,
        IsSameType<From, short unsigned int>,
        IsSameType<From, unsigned int>
        > ,
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, const ::QMatrix &, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<From, bool>,
        IsSameType<From, char>,
        IsSameType<From, signed char>,
        IsSameType<From, unsigned char>,
        IsSameType<From, wchar_t>,
        IsSameType<From, int>,
        IsSameType<From, short int>,
        IsSameType<From, short unsigned int>,
        IsSameType<From, unsigned int>
        > ,
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, ::QTransform, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<From, bool>,
        IsSameType<From, char>,
        IsSameType<From, signed char>,
        IsSameType<From, unsigned char>,
        IsSameType<From, wchar_t>,
        IsSameType<From, int>,
        IsSameType<From, short int>,
        IsSameType<From, short unsigned int>,
        IsSameType<From, unsigned int>
        > ,
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, const ::QTransform &, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<From, bool>,
        IsSameType<From, char>,
        IsSameType<From, signed char>,
        IsSameType<From, unsigned char>,
        IsSameType<From, wchar_t>,
        IsSameType<From, int>,
        IsSameType<From, short int>,
        IsSameType<From, short unsigned int>,
        IsSameType<From, unsigned int>
        > ,
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, ::QStyleOptionViewItem, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<From, bool>,
        IsSameType<From, char>,
        IsSameType<From, signed char>,
        IsSameType<From, unsigned char>,
        IsSameType<From, wchar_t>,
        IsSameType<From, int>,
        IsSameType<From, short int>,
        IsSameType<From, short unsigned int>,
        IsSameType<From, unsigned int>
        > ,
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, const ::QStyleOptionViewItem &, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<From, bool>,
        IsSameType<From, char>,
        IsSameType<From, signed char>,
        IsSameType<From, unsigned char>,
        IsSameType<From, wchar_t>,
        IsSameType<From, int>,
        IsSameType<From, short int>,
        IsSameType<From, short unsigned int>,
        IsSameType<From, unsigned int>
        > ,
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, ::QSizePolicy, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<From, bool>,
        IsSameType<From, char>,
        IsSameType<From, signed char>,
        IsSameType<From, unsigned char>,
        IsSameType<From, wchar_t>,
        IsSameType<From, int>,
        IsSameType<From, short int>,
        IsSameType<From, short unsigned int>,
        IsSameType<From, unsigned int>
        > ,
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

template <typename From>
struct IsConvertible < From, const ::QSizePolicy &, typename GEnableIfResult <
        GOrResult <
        GOrResult <
        IsSameType<From, bool>,
        IsSameType<From, char>,
        IsSameType<From, signed char>,
        IsSameType<From, unsigned char>,
        IsSameType<From, wchar_t>,
        IsSameType<From, int>,
        IsSameType<From, short int>,
        IsSameType<From, short unsigned int>,
        IsSameType<From, unsigned int>
        > ,
        GOrResult <
        IsSameType<From, long int>,
        IsSameType<From, long unsigned int>,
        IsSameType<From, long long int>,
        IsSameType<From, long long unsigned int>,
        IsSameType<From, float>,
        IsSameType<From, double>,
        IsSameType<From, long double>,
        IsPointer<From>
        >
        >
        >::Result
        > {
    G_STATIC_CONSTANT(bool, Result = false);
};

ENABLE_INT_TYPE_CONVERSION(QWidget::RenderFlags)
ENABLE_INT_TYPE_CONVERSION(QDateTimeEdit::Sections)
ENABLE_INT_TYPE_CONVERSION(QAbstractItemView::EditTriggers)
ENABLE_INT_TYPE_CONVERSION(QGraphicsView::CacheMode)
ENABLE_INT_TYPE_CONVERSION(QGraphicsView::OptimizationFlags)
ENABLE_INT_TYPE_CONVERSION(QFontDialog::FontDialogOptions)
ENABLE_INT_TYPE_CONVERSION(QGraphicsItem::GraphicsItemFlags)
ENABLE_INT_TYPE_CONVERSION(QDockWidget::DockWidgetFeatures)
ENABLE_INT_TYPE_CONVERSION(QColorDialog::ColorDialogOptions)
ENABLE_INT_TYPE_CONVERSION(QPinchGesture::ChangeFlags)
ENABLE_INT_TYPE_CONVERSION(QMainWindow::DockOptions)
ENABLE_INT_TYPE_CONVERSION(QStyle::State)
ENABLE_INT_TYPE_CONVERSION(QStyle::SubControls)
ENABLE_INT_TYPE_CONVERSION(QInputDialog::InputDialogOptions)
ENABLE_INT_TYPE_CONVERSION(QDialogButtonBox::StandardButtons)
ENABLE_INT_TYPE_CONVERSION(QMdiArea::AreaOptions)
ENABLE_INT_TYPE_CONVERSION(QGestureRecognizer::Result)
ENABLE_INT_TYPE_CONVERSION(QTextEdit::AutoFormatting)
ENABLE_INT_TYPE_CONVERSION(QFileDialog::Options)
ENABLE_INT_TYPE_CONVERSION(QSizePolicy::ControlTypes)
ENABLE_INT_TYPE_CONVERSION(QGraphicsScene::SceneLayers)
ENABLE_INT_TYPE_CONVERSION(QGraphicsEffect::ChangeFlags)
ENABLE_INT_TYPE_CONVERSION(QGraphicsBlurEffect::BlurHints)
ENABLE_INT_TYPE_CONVERSION(QWizard::WizardOptions)
ENABLE_INT_TYPE_CONVERSION(QAbstractSpinBox::StepEnabled)
ENABLE_INT_TYPE_CONVERSION(QMessageBox::StandardButtons)
ENABLE_INT_TYPE_CONVERSION(QTreeWidgetItemIterator::IteratorFlags)
ENABLE_INT_TYPE_CONVERSION(QFontComboBox::FontFilters)
ENABLE_INT_TYPE_CONVERSION(QMdiSubWindow::SubWindowOptions)
ENABLE_INT_TYPE_CONVERSION(QStyleOptionFrame::FrameFeatures)
ENABLE_INT_TYPE_CONVERSION(QStyleOptionButton::ButtonFeatures)
ENABLE_INT_TYPE_CONVERSION(QStyleOptionTab::CornerWidgets)
ENABLE_INT_TYPE_CONVERSION(QStyleOptionToolBar::ToolBarFeatures)
ENABLE_INT_TYPE_CONVERSION(QStyleOptionViewItem::ViewItemFeatures)
ENABLE_INT_TYPE_CONVERSION(QStyleOptionToolButton::ToolButtonFeatures)




struct IMetaObjectLifeManager;
struct GMetaTraitsParam;

namespace qtjs {

namespace MetaObjectLifeManager {

template <>
struct AutoTreeHelper<QGraphicsObject> {
    static bool hasParent(QGraphicsObject* object) {
        return object->parentItem() || object->parent();
    }

    static void deleteObjectTree(QGraphicsObject *object);

    inline static void deletingInstance(QGraphicsObject *object) {
        deleteObjectTree(object);
    }
};

template <>
struct AutoTreeHelper<QGraphicsItem> {
    static bool hasParent(QGraphicsItem* object) {
        return object->parentItem();
    }

    static void deleteObjectTree(QGraphicsItem *object) {
        QGraphicsObject *asGrObject = dynamic_cast<QGraphicsObject *>(object);
        if (asGrObject) {
            AutoTreeHelper<QGraphicsObject>::deleteObjectTree(asGrObject);
        } else {
            deleteFromMemorySet(object);
            for (QGraphicsItem * c : object->childItems()) {
                deleteObjectTree(c);
            }
        }
    }

    inline static void deletingInstance(QGraphicsItem *object) {
        deleteObjectTree(object);
    }
};



template <>
struct AutoTreeHelper<QGraphicsScene> {
    static bool hasParent(QGraphicsScene* object) {
        return AutoTreeHelper<QObject>::hasParent(object);
    }

    static void deleteObjectTree(QGraphicsScene *object) {
        for (QGraphicsItem * c : object->items()) {
            AutoTreeHelper<QGraphicsItem>::deleteObjectTree(c);
        }
        AutoTreeHelper<QObject>::deleteObjectTree(object);
    }

    inline static void deletingInstance(QGraphicsScene *object) {
        deleteObjectTree(object);
    }
};

}

}


template <typename T>
struct GMetaTraitsCreateObjectLifeManager < T, typename GEnableIfResult <
        GAndResult <
        IsConvertible<T *, QGraphicsItem *>,
        GNotResult< IsConvertible<T *, QGraphicsObject *> >
        >
        >::Result
        > {
    static IMetaObjectLifeManager * createObjectLifeManager(const GMetaTraitsParam &) {
        return new qtjs::MetaObjectLifeManager::AutoTree<QGraphicsItem>(GTypeConverter<T *, QGraphicsItem *>());
    }
};

template <typename T>
struct GMetaTraitsCreateObjectLifeManager < T, typename GEnableIfResult <
        IsConvertible<T *, QGraphicsObject *>
        >::Result
        > {
    static IMetaObjectLifeManager * createObjectLifeManager(const GMetaTraitsParam &) {
        return new qtjs::MetaObjectLifeManager::AutoTree<QGraphicsObject>(GTypeConverter<T *, QGraphicsObject *>());
    }
};

template <typename T>
struct GMetaTraitsCreateObjectLifeManager < T, typename GEnableIfResult <
        IsConvertible<T *, QGraphicsScene *>
        >::Result
        > {
    static IMetaObjectLifeManager * createObjectLifeManager(const GMetaTraitsParam &) {
        return new qtjs::MetaObjectLifeManager::AutoTree<QGraphicsScene>(GTypeConverter<T *, QGraphicsScene *>());
    }
};

} // namespace cpgf


