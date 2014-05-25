// Auto generated file, don't modify.

#ifndef CPGF_META_QTQML_QQUICKPROFILER_P_H
#define CPGF_META_QTQML_QQUICKPROFILER_P_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qquickprofiler_p(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QQuickProfiler(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _field("enabled", &D::ClassType::enabled);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("timestamp", &D::ClassType::timestamp);
    _d.CPGF_MD_TEMPLATE _method("sendMessages", &D::ClassType::sendMessages);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("animationFrame", &D::ClassType::animationFrame);
    _d.CPGF_MD_TEMPLATE _method("pixmapLoadingFinished", &D::ClassType::pixmapLoadingFinished, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("registerAnimationCallback", &D::ClassType::registerAnimationCallback);
    _d.CPGF_MD_TEMPLATE _method("initialize", &D::ClassType::initialize);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::AnimationThread>("AnimationThread")
        ._element("GuiThread", D::ClassType::GuiThread)
        ._element("RenderThread", D::ClassType::RenderThread)
    ;
}


template <typename D>
void buildMetaClass_QQuickProfilerData(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (qint64, int, int, const QUrl &, int, int, int, int)>(cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<3> >())
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (qint64, int, int, int, int, int)>()
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _constructor<void * (qint64, int, int, qint64, qint64, qint64, qint64, qint64)>();
    _d.CPGF_MD_TEMPLATE _field("time", &D::ClassType::time);
    _d.CPGF_MD_TEMPLATE _field("messageType", &D::ClassType::messageType);
    _d.CPGF_MD_TEMPLATE _field("detailType", &D::ClassType::detailType);
    _d.CPGF_MD_TEMPLATE _field("detailUrl", &D::ClassType::detailUrl);
    _d.CPGF_MD_TEMPLATE _field("subtime_1", &D::ClassType::subtime_1);
    _d.CPGF_MD_TEMPLATE _field("x", &D::ClassType::x);
    _d.CPGF_MD_TEMPLATE _field("subtime_2", &D::ClassType::subtime_2);
    _d.CPGF_MD_TEMPLATE _field("y", &D::ClassType::y);
    _d.CPGF_MD_TEMPLATE _field("subtime_3", &D::ClassType::subtime_3);
    _d.CPGF_MD_TEMPLATE _field("framerate", &D::ClassType::framerate);
    _d.CPGF_MD_TEMPLATE _field("subtime_4", &D::ClassType::subtime_4);
    _d.CPGF_MD_TEMPLATE _field("count", &D::ClassType::count);
    _d.CPGF_MD_TEMPLATE _field("subtime_5", &D::ClassType::subtime_5);
    _d.CPGF_MD_TEMPLATE _field("threadId", &D::ClassType::threadId);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
