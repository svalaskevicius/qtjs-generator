// Auto generated file, don't modify.

#ifndef __META_QTGUI_QIMAGEIOHANDLER_H
#define __META_QTGUI_QIMAGEIOHANDLER_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>
#include <qtGui_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qimageiohandler(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _enum<long long>("GlobalDefine_QtGui_20")
        ._element("QImageIOHandlerFactoryInterface_iid", QImageIOHandlerFactoryInterface_iid)
    ;
}


template <typename D>
void buildMetaClass_QImageIOHandler(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("setDevice", &D::ClassType::setDevice);
    _d.CPGF_MD_TEMPLATE _method("device", &D::ClassType::device);
    _d.CPGF_MD_TEMPLATE _method("setFormat", (void (D::ClassType::*) (const QByteArray &))&D::ClassType::setFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setFormat", (void (D::ClassType::*) (const QByteArray &) const)&D::ClassType::setFormat, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("format", &D::ClassType::format);
    _d.CPGF_MD_TEMPLATE _method("name", &D::ClassType::name);
    _d.CPGF_MD_TEMPLATE _method("canRead", &D::ClassType::canRead);
    _d.CPGF_MD_TEMPLATE _method("read", &D::ClassType::read);
    _d.CPGF_MD_TEMPLATE _method("write", &D::ClassType::write);
    _d.CPGF_MD_TEMPLATE _method("option", &D::ClassType::option);
    _d.CPGF_MD_TEMPLATE _method("setOption", &D::ClassType::setOption, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("supportsOption", &D::ClassType::supportsOption);
    _d.CPGF_MD_TEMPLATE _method("jumpToNextImage", &D::ClassType::jumpToNextImage);
    _d.CPGF_MD_TEMPLATE _method("jumpToImage", &D::ClassType::jumpToImage);
    _d.CPGF_MD_TEMPLATE _method("loopCount", &D::ClassType::loopCount);
    _d.CPGF_MD_TEMPLATE _method("imageCount", &D::ClassType::imageCount);
    _d.CPGF_MD_TEMPLATE _method("nextImageDelay", &D::ClassType::nextImageDelay);
    _d.CPGF_MD_TEMPLATE _method("currentImageNumber", &D::ClassType::currentImageNumber);
    _d.CPGF_MD_TEMPLATE _method("currentImageRect", &D::ClassType::currentImageRect);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ImageOption>("ImageOption")
        ._element("Size", D::ClassType::Size)
        ._element("ClipRect", D::ClassType::ClipRect)
        ._element("Description", D::ClassType::Description)
        ._element("ScaledClipRect", D::ClassType::ScaledClipRect)
        ._element("ScaledSize", D::ClassType::ScaledSize)
        ._element("CompressionRatio", D::ClassType::CompressionRatio)
        ._element("Gamma", D::ClassType::Gamma)
        ._element("Quality", D::ClassType::Quality)
        ._element("Name", D::ClassType::Name)
        ._element("SubType", D::ClassType::SubType)
        ._element("IncrementalReading", D::ClassType::IncrementalReading)
        ._element("Endianness", D::ClassType::Endianness)
        ._element("Animation", D::ClassType::Animation)
        ._element("BackgroundColor", D::ClassType::BackgroundColor)
        ._element("ImageFormat", D::ClassType::ImageFormat)
    ;
}


class QImageIOHandlerWrapper : public QImageIOHandler, public cpgf::GScriptWrapper {
public:
    
    QImageIOHandlerWrapper()
        : QImageIOHandler() {}
    
    bool supportsOption(QImageIOHandler::ImageOption option) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("supportsOption"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, option));
        }
        return QImageIOHandler::supportsOption(option);
    }
    bool super_supportsOption(QImageIOHandler::ImageOption option) const
    {
        return QImageIOHandler::supportsOption(option);
    }
    
    bool jumpToImage(int imageNumber)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("jumpToImage"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, imageNumber));
        }
        return QImageIOHandler::jumpToImage(imageNumber);
    }
    bool super_jumpToImage(int imageNumber)
    {
        return QImageIOHandler::jumpToImage(imageNumber);
    }
    
    bool read(QImage * image)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("read"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, image));
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_read(QImage * image)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool jumpToNextImage()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("jumpToNextImage"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QImageIOHandler::jumpToNextImage();
    }
    bool super_jumpToNextImage()
    {
        return QImageIOHandler::jumpToNextImage();
    }
    
    int currentImageNumber() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentImageNumber"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QImageIOHandler::currentImageNumber();
    }
    int super_currentImageNumber() const
    {
        return QImageIOHandler::currentImageNumber();
    }
    
    int nextImageDelay() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("nextImageDelay"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QImageIOHandler::nextImageDelay();
    }
    int super_nextImageDelay() const
    {
        return QImageIOHandler::nextImageDelay();
    }
    
    QRect currentImageRect() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("currentImageRect"));
        if(func)
        {
            return cpgf::fromVariant<QRect >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QImageIOHandler::currentImageRect();
    }
    QRect super_currentImageRect() const
    {
        return QImageIOHandler::currentImageRect();
    }
    
    bool canRead() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("canRead"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        throw std::runtime_error("Abstract method");
    }
    bool super_canRead() const
    {
        throw std::runtime_error("Abstract method");
    }
    
    int loopCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("loopCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QImageIOHandler::loopCount();
    }
    int super_loopCount() const
    {
        return QImageIOHandler::loopCount();
    }
    
    void setOption(QImageIOHandler::ImageOption option, const QVariant & value)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setOption"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, option, value);
            return;
        }
        QImageIOHandler::setOption(option, value);
    }
    void super_setOption(QImageIOHandler::ImageOption option, const QVariant & value)
    {
        QImageIOHandler::setOption(option, value);
    }
    
    bool write(const QImage & image)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("write"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, image));
        }
        return QImageIOHandler::write(image);
    }
    bool super_write(const QImage & image)
    {
        return QImageIOHandler::write(image);
    }
    
    QByteArray name() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("name"));
        if(func)
        {
            return cpgf::fromVariant<QByteArray >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QImageIOHandler::name();
    }
    QByteArray super_name() const
    {
        return QImageIOHandler::name();
    }
    
    QVariant option(QImageIOHandler::ImageOption option) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("option"));
        if(func)
        {
            return cpgf::fromVariant<QVariant >(cpgf::invokeScriptFunction(func.get(), this, option));
        }
        return QImageIOHandler::option(option);
    }
    QVariant super_option(QImageIOHandler::ImageOption option) const
    {
        return QImageIOHandler::option(option);
    }
    
    int imageCount() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("imageCount"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QImageIOHandler::imageCount();
    }
    int super_imageCount() const
    {
        return QImageIOHandler::imageCount();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("super_supportsOption", (bool (D::ClassType::*) (QImageIOHandler::ImageOption) const)&D::ClassType::super_supportsOption);
        _d.CPGF_MD_TEMPLATE _method("super_jumpToImage", (bool (D::ClassType::*) (int))&D::ClassType::super_jumpToImage);
        _d.CPGF_MD_TEMPLATE _method("super_read", (bool (D::ClassType::*) (QImage *))&D::ClassType::super_read);
        _d.CPGF_MD_TEMPLATE _method("super_jumpToNextImage", (bool (D::ClassType::*) ())&D::ClassType::super_jumpToNextImage);
        _d.CPGF_MD_TEMPLATE _method("super_currentImageNumber", (int (D::ClassType::*) () const)&D::ClassType::super_currentImageNumber);
        _d.CPGF_MD_TEMPLATE _method("super_nextImageDelay", (int (D::ClassType::*) () const)&D::ClassType::super_nextImageDelay);
        _d.CPGF_MD_TEMPLATE _method("super_currentImageRect", (QRect (D::ClassType::*) () const)&D::ClassType::super_currentImageRect);
        _d.CPGF_MD_TEMPLATE _method("super_canRead", (bool (D::ClassType::*) () const)&D::ClassType::super_canRead);
        _d.CPGF_MD_TEMPLATE _method("super_loopCount", (int (D::ClassType::*) () const)&D::ClassType::super_loopCount);
        _d.CPGF_MD_TEMPLATE _method("super_setOption", (void (D::ClassType::*) (QImageIOHandler::ImageOption, const QVariant &))&D::ClassType::super_setOption, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_write", (bool (D::ClassType::*) (const QImage &))&D::ClassType::super_write);
        _d.CPGF_MD_TEMPLATE _method("super_name", (QByteArray (D::ClassType::*) () const)&D::ClassType::super_name);
        _d.CPGF_MD_TEMPLATE _method("super_option", (QVariant (D::ClassType::*) (QImageIOHandler::ImageOption) const)&D::ClassType::super_option);
        _d.CPGF_MD_TEMPLATE _method("super_imageCount", (int (D::ClassType::*) () const)&D::ClassType::super_imageCount);
    }
};


template <typename D>
void buildMetaClass_QImageIOHandlerWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    
    QImageIOHandlerWrapper::cpgf__register(_d);
    
    buildMetaClass_QImageIOHandler<D>(_d);
}


template <typename D>
void buildMetaClass_QImageIOPlugin(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("capabilities", &D::ClassType::capabilities, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("create", &D::ClassType::create, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QByteArray()))
    ;
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Capability>("Capability")
        ._element("CanRead", D::ClassType::CanRead)
        ._element("CanWrite", D::ClassType::CanWrite)
        ._element("CanReadIncremental", D::ClassType::CanReadIncremental)
    ;
    {
        GDefineMetaClass<QFlags<typename D::ClassType::Capability > > _t_d = GDefineMetaClass<QFlags<typename D::ClassType::Capability > >::lazyDeclare("Capabilities", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename D::ClassType::Capability > >, typename D::ClassType::Capability >);
        _d._class(_t_d);
    }
}


class QImageIOPluginWrapper : public QImageIOPlugin, public cpgf::GScriptWrapper {
public:
    
    QImageIOPluginWrapper(QObject * parent = 0)
        : QImageIOPlugin(parent) {}
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QImageIOPlugin::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QImageIOPlugin::qt_metacast(__arg0);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1));
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    QImageIOPlugin::Capabilities capabilities(QIODevice * device, const QByteArray & format) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("capabilities"));
        if(func)
        {
            return cpgf::fromVariant<QImageIOPlugin::Capabilities >(cpgf::invokeScriptFunction(func.get(), this, device, format));
        }
        throw std::runtime_error("Abstract method");
    }
    QImageIOPlugin::Capabilities super_capabilities(QIODevice * device, const QByteArray & format) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QImageIOPlugin::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QImageIOPlugin::metaObject();
    }
    
    QImageIOHandler * create(QIODevice * device, const QByteArray & format = QByteArray()) const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("create"));
        if(func)
        {
            return cpgf::fromVariant<QImageIOHandler * >(cpgf::invokeScriptFunction(func.get(), this, device, format));
        }
        throw std::runtime_error("Abstract method");
    }
    QImageIOHandler * super_create(QIODevice * device, const QByteArray & format = QByteArray()) const
    {
        throw std::runtime_error("Abstract method");
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QImageIOPlugin::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QImageIOPlugin::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_capabilities", (QImageIOPlugin::Capabilities (D::ClassType::*) (QIODevice *, const QByteArray &) const)&D::ClassType::super_capabilities, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >());
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_create", (QImageIOHandler * (D::ClassType::*) (QIODevice *, const QByteArray &) const)&D::ClassType::super_create, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<1> >())
            ._default(copyVariantFromCopyable(QByteArray()))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
    }
};


template <typename D>
void buildMetaClass_QImageIOPluginWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    
    QImageIOPluginWrapper::cpgf__register(_d);
    
    buildMetaClass_QImageIOPlugin<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
