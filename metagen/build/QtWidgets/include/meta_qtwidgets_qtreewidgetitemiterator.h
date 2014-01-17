// Auto generated file, don't modify.

#ifndef __META_QTWIDGETS_QTREEWIDGETITEMITERATOR_H
#define __META_QTWIDGETS_QTREEWIDGETITEMITERATOR_H


#include <qtWidgets_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace meta_qtwidgets { 


inline QTreeWidgetItemIterator & opErAToRWrapper_QTreeWidgetItemIterator__opAssign(QTreeWidgetItemIterator * self, const QTreeWidgetItemIterator & it) {
    return (*self) = it;
}
inline QTreeWidgetItemIterator & opErAToRWrapper_QTreeWidgetItemIterator__opInc(QTreeWidgetItemIterator * self) {
    return ++(*self);
}
inline const QTreeWidgetItemIterator opErAToRWrapper_QTreeWidgetItemIterator__opIncSuffix(QTreeWidgetItemIterator * self) {
    return (*self)++;
}
inline QTreeWidgetItemIterator & opErAToRWrapper_QTreeWidgetItemIterator__opAddAssign(QTreeWidgetItemIterator * self, int n) {
    return (*self) += n;
}
inline QTreeWidgetItemIterator & opErAToRWrapper_QTreeWidgetItemIterator__opDec(QTreeWidgetItemIterator * self) {
    return --(*self);
}
inline const QTreeWidgetItemIterator opErAToRWrapper_QTreeWidgetItemIterator__opDecSuffix(QTreeWidgetItemIterator * self) {
    return (*self)--;
}
inline QTreeWidgetItemIterator & opErAToRWrapper_QTreeWidgetItemIterator__opSubAssign(QTreeWidgetItemIterator * self, int n) {
    return (*self) -= n;
}
inline QTreeWidgetItem * opErAToRWrapper_QTreeWidgetItemIterator__opDerefer(const QTreeWidgetItemIterator * self) {
    return *(*self);
}


template <typename D>
void buildMetaClass_QTreeWidgetItemIterator(const cpgf::GMetaDataConfigFlags & config, D _d)
{
    (void)config; (void)_d; (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QTreeWidgetItemIterator &)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTreeWidget *, QTreeWidgetItemIterator::IteratorFlags)>()
        ._default(copyVariantFromCopyable(QTreeWidgetItemIterator::All))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (QTreeWidgetItem *, QTreeWidgetItemIterator::IteratorFlags)>()
        ._default(copyVariantFromCopyable(QTreeWidgetItemIterator::All))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::IteratorFlag>("IteratorFlag")
        ._element("All", D::ClassType::All)
        ._element("Hidden", D::ClassType::Hidden)
        ._element("NotHidden", D::ClassType::NotHidden)
        ._element("Selected", D::ClassType::Selected)
        ._element("Unselected", D::ClassType::Unselected)
        ._element("Selectable", D::ClassType::Selectable)
        ._element("NotSelectable", D::ClassType::NotSelectable)
        ._element("DragEnabled", D::ClassType::DragEnabled)
        ._element("DragDisabled", D::ClassType::DragDisabled)
        ._element("DropEnabled", D::ClassType::DropEnabled)
        ._element("DropDisabled", D::ClassType::DropDisabled)
        ._element("HasChildren", D::ClassType::HasChildren)
        ._element("NoChildren", D::ClassType::NoChildren)
        ._element("Checked", D::ClassType::Checked)
        ._element("NotChecked", D::ClassType::NotChecked)
        ._element("Enabled", D::ClassType::Enabled)
        ._element("Disabled", D::ClassType::Disabled)
        ._element("Editable", D::ClassType::Editable)
        ._element("NotEditable", D::ClassType::NotEditable)
        ._element("UserFlag", D::ClassType::UserFlag)
    ;
    _d.CPGF_MD_TEMPLATE _operator<QTreeWidgetItemIterator & (*)(cpgf::GMetaSelf, const QTreeWidgetItemIterator &)>(mopHolder = mopHolder, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QTreeWidgetItemIterator & (*) (QTreeWidgetItemIterator *, const QTreeWidgetItemIterator &))&opErAToRWrapper_QTreeWidgetItemIterator__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTreeWidgetItemIterator & (*)(cpgf::GMetaSelf)>(++mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opInc", (QTreeWidgetItemIterator & (*) (QTreeWidgetItemIterator *))&opErAToRWrapper_QTreeWidgetItemIterator__opInc, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QTreeWidgetItemIterator (*)(cpgf::GMetaSelf)>(mopHolder++);
    _d.CPGF_MD_TEMPLATE _method("_opIncSuffix", (const QTreeWidgetItemIterator (*) (QTreeWidgetItemIterator *))&opErAToRWrapper_QTreeWidgetItemIterator__opIncSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTreeWidgetItemIterator & (*)(cpgf::GMetaSelf, int)>(mopHolder += mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAddAssign", (QTreeWidgetItemIterator & (*) (QTreeWidgetItemIterator *, int))&opErAToRWrapper_QTreeWidgetItemIterator__opAddAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTreeWidgetItemIterator & (*)(cpgf::GMetaSelf)>(--mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDec", (QTreeWidgetItemIterator & (*) (QTreeWidgetItemIterator *))&opErAToRWrapper_QTreeWidgetItemIterator__opDec, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<const QTreeWidgetItemIterator (*)(cpgf::GMetaSelf)>(mopHolder--);
    _d.CPGF_MD_TEMPLATE _method("_opDecSuffix", (const QTreeWidgetItemIterator (*) (QTreeWidgetItemIterator *))&opErAToRWrapper_QTreeWidgetItemIterator__opDecSuffix, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTreeWidgetItemIterator & (*)(cpgf::GMetaSelf, int)>(mopHolder -= mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opSubAssign", (QTreeWidgetItemIterator & (*) (QTreeWidgetItemIterator *, int))&opErAToRWrapper_QTreeWidgetItemIterator__opSubAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<QTreeWidgetItem * (*)(const cpgf::GMetaSelf &)>(*mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opDerefer", (QTreeWidgetItem * (*) (const QTreeWidgetItemIterator *))&opErAToRWrapper_QTreeWidgetItemIterator__opDerefer, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace meta_qtwidgets




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
