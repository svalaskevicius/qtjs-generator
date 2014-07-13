// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QIODEVICE_H
#define CPGF_META_QTCORE_QIODEVICE_H


#include <QtCore/include/meta_qtcore_qflags.h>
#include <QtCore/include/meta_qtcore_qcontainerfwd.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace qt_metadata { 


template <typename D>
void buildMetaClass_Global_qiodevice(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _operator<QDebug (*)(QDebug, QIODevice::OpenMode)>(mopHolder << mopHolder);
}


template <typename D>
void buildMetaClass_QIODevice(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("openMode", &D::ClassType::openMode);
    _d.CPGF_MD_TEMPLATE _method("setTextModeEnabled", &D::ClassType::setTextModeEnabled);
    _d.CPGF_MD_TEMPLATE _method("isTextModeEnabled", &D::ClassType::isTextModeEnabled);
    _d.CPGF_MD_TEMPLATE _method("isOpen", &D::ClassType::isOpen);
    _d.CPGF_MD_TEMPLATE _method("isReadable", &D::ClassType::isReadable);
    _d.CPGF_MD_TEMPLATE _method("isWritable", &D::ClassType::isWritable);
    _d.CPGF_MD_TEMPLATE _method("isSequential", &D::ClassType::isSequential);
    _d.CPGF_MD_TEMPLATE _method("open", &D::ClassType::open);
    _d.CPGF_MD_TEMPLATE _method("close", &D::ClassType::close);
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("seek", &D::ClassType::seek);
    _d.CPGF_MD_TEMPLATE _method("atEnd", &D::ClassType::atEnd);
    _d.CPGF_MD_TEMPLATE _method("reset", &D::ClassType::reset);
    _d.CPGF_MD_TEMPLATE _method("bytesAvailable", &D::ClassType::bytesAvailable);
    _d.CPGF_MD_TEMPLATE _method("bytesToWrite", &D::ClassType::bytesToWrite);
    _d.CPGF_MD_TEMPLATE _method("read", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::read);
    _d.CPGF_MD_TEMPLATE _method("read", (QByteArray (D::ClassType::*) (qint64))&D::ClassType::read);
    _d.CPGF_MD_TEMPLATE _method("readAll", &D::ClassType::readAll);
    _d.CPGF_MD_TEMPLATE _method("readLine", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::readLine);
    _d.CPGF_MD_TEMPLATE _method("readLine", (QByteArray (D::ClassType::*) (qint64))&D::ClassType::readLine)
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("canReadLine", &D::ClassType::canReadLine);
    _d.CPGF_MD_TEMPLATE _method("write", (qint64 (D::ClassType::*) (const char *, qint64))&D::ClassType::write);
    _d.CPGF_MD_TEMPLATE _method("write", (qint64 (D::ClassType::*) (const char *))&D::ClassType::write);
    _d.CPGF_MD_TEMPLATE _method("write", (qint64 (D::ClassType::*) (const QByteArray &))&D::ClassType::write, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("peek", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::peek);
    _d.CPGF_MD_TEMPLATE _method("peek", (QByteArray (D::ClassType::*) (qint64))&D::ClassType::peek);
    _d.CPGF_MD_TEMPLATE _method("waitForReadyRead", &D::ClassType::waitForReadyRead);
    _d.CPGF_MD_TEMPLATE _method("waitForBytesWritten", &D::ClassType::waitForBytesWritten);
    _d.CPGF_MD_TEMPLATE _method("ungetChar", &D::ClassType::ungetChar);
    _d.CPGF_MD_TEMPLATE _method("putChar", &D::ClassType::putChar);
    _d.CPGF_MD_TEMPLATE _method("getChar", &D::ClassType::getChar);
    _d.CPGF_MD_TEMPLATE _method("errorString", &D::ClassType::errorString);
    _d.CPGF_MD_TEMPLATE _method("readyRead", &D::ClassType::readyRead);
    _d.CPGF_MD_TEMPLATE _method("bytesWritten", &D::ClassType::bytesWritten);
    _d.CPGF_MD_TEMPLATE _method("aboutToClose", &D::ClassType::aboutToClose);
    _d.CPGF_MD_TEMPLATE _method("readChannelFinished", &D::ClassType::readChannelFinished);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::OpenModeFlag>("OpenModeFlag")
        ._element("NotOpen", D::ClassType::NotOpen)
        ._element("ReadOnly", D::ClassType::ReadOnly)
        ._element("WriteOnly", D::ClassType::WriteOnly)
        ._element("ReadWrite", D::ClassType::ReadWrite)
        ._element("Append", D::ClassType::Append)
        ._element("Truncate", D::ClassType::Truncate)
        ._element("Text", D::ClassType::Text)
        ._element("Unbuffered", D::ClassType::Unbuffered)
    ;
    {
        GDefineMetaClass<QFlags<typename QIODevice::OpenModeFlag > > _t_d = GDefineMetaClass<QFlags<typename QIODevice::OpenModeFlag > >::lazyDeclare("OpenMode", &buildMetaClass_QFlags<GDefineMetaClass<QFlags<typename QIODevice::OpenModeFlag > >, typename QIODevice::OpenModeFlag >);
        _d._class(_t_d);
    }
}


class QIODeviceWrapper : public QIODevice, public cpgf::GScriptWrapper {
public:
    
    QIODeviceWrapper()
        : QIODevice() {}
    
    QIODeviceWrapper(QObject * parent)
        : QIODevice(parent) {}
    
    bool open(QIODevice::OpenMode mode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("open"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, mode).getValue());
        }
        return QIODevice::open(mode);
    }
    bool super_open(QIODevice::OpenMode mode)
    {
        return QIODevice::open(mode);
    }
    
    bool seek(qint64 pos)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("seek"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, pos).getValue());
        }
        return QIODevice::seek(pos);
    }
    bool super_seek(qint64 pos)
    {
        return QIODevice::seek(pos);
    }
    
    void setErrorString(const QString & errorString)
    {
        QIODevice::setErrorString(errorString);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    void close()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("close"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QIODevice::close();
    }
    void super_close()
    {
        QIODevice::close();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    qint64 pos() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("pos"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QIODevice::pos();
    }
    qint64 super_pos() const
    {
        return QIODevice::pos();
    }
    
    void disconnectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("disconnectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::disconnectNotify(signal);
    }
    void super_disconnectNotify(const QMetaMethod & signal)
    {
        QObject::disconnectNotify(signal);
    }
    
    bool waitForReadyRead(int msecs)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("waitForReadyRead"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, msecs).getValue());
        }
        return QIODevice::waitForReadyRead(msecs);
    }
    bool super_waitForReadyRead(int msecs)
    {
        return QIODevice::waitForReadyRead(msecs);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    bool reset()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("reset"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QIODevice::reset();
    }
    bool super_reset()
    {
        return QIODevice::reset();
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    void setOpenMode(QIODevice::OpenMode openMode)
    {
        QIODevice::setOpenMode(openMode);
    }
    
    bool eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("eventFilter"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1).getValue());
        }
        return QObject::eventFilter(__arg0, __arg1);
    }
    bool super_eventFilter(QObject * __arg0, QEvent * __arg1)
    {
        return QObject::eventFilter(__arg0, __arg1);
    }
    
    void timerEvent(QTimerEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("timerEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::timerEvent(__arg0);
    }
    void super_timerEvent(QTimerEvent * __arg0)
    {
        QObject::timerEvent(__arg0);
    }
    
    qint64 bytesAvailable() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bytesAvailable"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QIODevice::bytesAvailable();
    }
    qint64 super_bytesAvailable() const
    {
        return QIODevice::bytesAvailable();
    }
    
    void childEvent(QChildEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("childEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::childEvent(__arg0);
    }
    void super_childEvent(QChildEvent * __arg0)
    {
        QObject::childEvent(__arg0);
    }
    
    bool atEnd() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("atEnd"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QIODevice::atEnd();
    }
    bool super_atEnd() const
    {
        return QIODevice::atEnd();
    }
    
    bool canReadLine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("canReadLine"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QIODevice::canReadLine();
    }
    bool super_canReadLine() const
    {
        return QIODevice::canReadLine();
    }
    
    qint64 readData(char * data, qint64 maxlen)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("readData"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunctionOnObject(func.get(), this, data, maxlen).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    qint64 super_readData(char * data, qint64 maxlen)
    {
        throw std::runtime_error("Abstract method");
    }
    
    void customEvent(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("customEvent"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0);
            return;
        }
        QObject::customEvent(__arg0);
    }
    void super_customEvent(QEvent * __arg0)
    {
        QObject::customEvent(__arg0);
    }
    
    void connectNotify(const QMetaMethod & signal)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("connectNotify"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this, signal);
            return;
        }
        QObject::connectNotify(signal);
    }
    void super_connectNotify(const QMetaMethod & signal)
    {
        QObject::connectNotify(signal);
    }
    
    qint64 bytesToWrite() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bytesToWrite"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QIODevice::bytesToWrite();
    }
    qint64 super_bytesToWrite() const
    {
        return QIODevice::bytesToWrite();
    }
    
    bool waitForBytesWritten(int msecs)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("waitForBytesWritten"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, msecs).getValue());
        }
        return QIODevice::waitForBytesWritten(msecs);
    }
    bool super_waitForBytesWritten(int msecs)
    {
        return QIODevice::waitForBytesWritten(msecs);
    }
    
    qint64 size() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("size"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QIODevice::size();
    }
    qint64 super_size() const
    {
        return QIODevice::size();
    }
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QIODevice::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QIODevice::qt_metacast(__arg0);
    }
    
    bool isSequential() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSequential"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QIODevice::isSequential();
    }
    bool super_isSequential() const
    {
        return QIODevice::isSequential();
    }
    
    qint64 writeData(const char * data, qint64 len)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("writeData"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunctionOnObject(func.get(), this, data, len).getValue());
        }
        throw std::runtime_error("Abstract method");
    }
    qint64 super_writeData(const char * data, qint64 len)
    {
        throw std::runtime_error("Abstract method");
    }
    
    bool event(QEvent * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("event"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0).getValue());
        }
        return QObject::event(__arg0);
    }
    bool super_event(QEvent * __arg0)
    {
        return QObject::event(__arg0);
    }
    
    qint64 readLineData(char * data, qint64 maxlen)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("readLineData"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunctionOnObject(func.get(), this, data, maxlen).getValue());
        }
        return QIODevice::readLineData(data, maxlen);
    }
    qint64 super_readLineData(char * data, qint64 maxlen)
    {
        return QIODevice::readLineData(data, maxlen);
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QIODevice::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QIODevice::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QIODevice::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QIODevice::qt_metacall(__arg0, __arg1, __arg2);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("setErrorString", (void (D::ClassType::*) (const QString &))&D::ClassType::setErrorString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("setOpenMode", (void (D::ClassType::*) (QIODevice::OpenMode))&D::ClassType::setOpenMode);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("readData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::readData);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("writeData", (qint64 (D::ClassType::*) (const char *, qint64))&D::ClassType::writeData);
        _d.CPGF_MD_TEMPLATE _method("readLineData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::readLineData);
        _d.CPGF_MD_TEMPLATE _method("super_open", (bool (D::ClassType::*) (QIODevice::OpenMode))&D::ClassType::super_open);
        _d.CPGF_MD_TEMPLATE _method("super_seek", (bool (D::ClassType::*) (qint64))&D::ClassType::super_seek);
        _d.CPGF_MD_TEMPLATE _method("super_close", (void (D::ClassType::*) ())&D::ClassType::super_close);
        _d.CPGF_MD_TEMPLATE _method("super_pos", (qint64 (D::ClassType::*) () const)&D::ClassType::super_pos);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_waitForReadyRead", (bool (D::ClassType::*) (int))&D::ClassType::super_waitForReadyRead);
        _d.CPGF_MD_TEMPLATE _method("super_reset", (bool (D::ClassType::*) ())&D::ClassType::super_reset);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_bytesAvailable", (qint64 (D::ClassType::*) () const)&D::ClassType::super_bytesAvailable);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_atEnd", (bool (D::ClassType::*) () const)&D::ClassType::super_atEnd);
        _d.CPGF_MD_TEMPLATE _method("super_canReadLine", (bool (D::ClassType::*) () const)&D::ClassType::super_canReadLine);
        _d.CPGF_MD_TEMPLATE _method("super_readData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::super_readData);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_bytesToWrite", (qint64 (D::ClassType::*) () const)&D::ClassType::super_bytesToWrite);
        _d.CPGF_MD_TEMPLATE _method("super_waitForBytesWritten", (bool (D::ClassType::*) (int))&D::ClassType::super_waitForBytesWritten);
        _d.CPGF_MD_TEMPLATE _method("super_size", (qint64 (D::ClassType::*) () const)&D::ClassType::super_size);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_isSequential", (bool (D::ClassType::*) () const)&D::ClassType::super_isSequential);
        _d.CPGF_MD_TEMPLATE _method("super_writeData", (qint64 (D::ClassType::*) (const char *, qint64))&D::ClassType::super_writeData);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_readLineData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::super_readLineData);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    }
};


template <typename D>
void buildMetaClass_QIODeviceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>();
    
    QIODeviceWrapper::cpgf__register(_d);
    
    buildMetaClass_QIODevice<D>(_d);
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
