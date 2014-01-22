// Auto generated file, don't modify.

#ifndef __META_QTCORE_QFILEDEVICE_H
#define __META_QTCORE_QFILEDEVICE_H


#include <qtCore_cpgf_compat.h>

#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/scriptbind/gscriptbindutil.h"
#include "cpgf/scriptbind/gscriptwrapper.h"
#include "cpgf/gscopedinterface.h"




namespace meta_qtcore { 


template <typename D>
void buildMetaClass_QFileDevice(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("error", &D::ClassType::error);
    _d.CPGF_MD_TEMPLATE _method("unsetError", &D::ClassType::unsetError);
    _d.CPGF_MD_TEMPLATE _method("close", &D::ClassType::close);
    _d.CPGF_MD_TEMPLATE _method("isSequential", &D::ClassType::isSequential);
    _d.CPGF_MD_TEMPLATE _method("handle", &D::ClassType::handle);
    _d.CPGF_MD_TEMPLATE _method("fileName", &D::ClassType::fileName);
    _d.CPGF_MD_TEMPLATE _method("pos", &D::ClassType::pos);
    _d.CPGF_MD_TEMPLATE _method("seek", &D::ClassType::seek);
    _d.CPGF_MD_TEMPLATE _method("atEnd", &D::ClassType::atEnd);
    _d.CPGF_MD_TEMPLATE _method("flush", &D::ClassType::flush);
    _d.CPGF_MD_TEMPLATE _method("size", &D::ClassType::size);
    _d.CPGF_MD_TEMPLATE _method("resize", &D::ClassType::resize);
    _d.CPGF_MD_TEMPLATE _method("permissions", &D::ClassType::permissions);
    _d.CPGF_MD_TEMPLATE _method("setPermissions", &D::ClassType::setPermissions);
    _d.CPGF_MD_TEMPLATE _method("map", &D::ClassType::map)
        ._default(copyVariantFromCopyable(QFileDevice::NoOptions))
    ;
    _d.CPGF_MD_TEMPLATE _method("unmap", &D::ClassType::unmap);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FileError>("FileError")
        ._element("NoError", D::ClassType::NoError)
        ._element("ReadError", D::ClassType::ReadError)
        ._element("WriteError", D::ClassType::WriteError)
        ._element("FatalError", D::ClassType::FatalError)
        ._element("ResourceError", D::ClassType::ResourceError)
        ._element("OpenError", D::ClassType::OpenError)
        ._element("AbortError", D::ClassType::AbortError)
        ._element("TimeOutError", D::ClassType::TimeOutError)
        ._element("UnspecifiedError", D::ClassType::UnspecifiedError)
        ._element("RemoveError", D::ClassType::RemoveError)
        ._element("RenameError", D::ClassType::RenameError)
        ._element("PositionError", D::ClassType::PositionError)
        ._element("ResizeError", D::ClassType::ResizeError)
        ._element("PermissionsError", D::ClassType::PermissionsError)
        ._element("CopyError", D::ClassType::CopyError)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::Permission>("Permission")
        ._element("ReadOwner", D::ClassType::ReadOwner)
        ._element("WriteOwner", D::ClassType::WriteOwner)
        ._element("ExeOwner", D::ClassType::ExeOwner)
        ._element("ReadUser", D::ClassType::ReadUser)
        ._element("WriteUser", D::ClassType::WriteUser)
        ._element("ExeUser", D::ClassType::ExeUser)
        ._element("ReadGroup", D::ClassType::ReadGroup)
        ._element("WriteGroup", D::ClassType::WriteGroup)
        ._element("ExeGroup", D::ClassType::ExeGroup)
        ._element("ReadOther", D::ClassType::ReadOther)
        ._element("WriteOther", D::ClassType::WriteOther)
        ._element("ExeOther", D::ClassType::ExeOther)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::FileHandleFlag>("FileHandleFlag")
        ._element("AutoCloseHandle", D::ClassType::AutoCloseHandle)
        ._element("DontCloseHandle", D::ClassType::DontCloseHandle)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::MemoryMapFlags>("MemoryMapFlags")
        ._element("NoOptions", D::ClassType::NoOptions)
    ;
}


class QFileDeviceWrapper : public QFileDevice, public cpgf::GScriptWrapper {
public:
    
    bool waitForReadyRead(int msecs)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("waitForReadyRead"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, msecs));
        }
        return QIODevice::waitForReadyRead(msecs);
    }
    bool super_waitForReadyRead(int msecs)
    {
        return QIODevice::waitForReadyRead(msecs);
    }
    
    void close()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("close"));
        if(func)
        {
            cpgf::invokeScriptFunction(func.get(), this);
            return;
        }
        QFileDevice::close();
    }
    void super_close()
    {
        QFileDevice::close();
    }
    
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
    
    bool canReadLine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("canReadLine"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QIODevice::canReadLine();
    }
    bool super_canReadLine() const
    {
        return QIODevice::canReadLine();
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
    
    void * qt_metacast(const char * __arg0)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacast"));
        if(func)
        {
            return cpgf::fromVariant<void * >(cpgf::invokeScriptFunction(func.get(), this, __arg0));
        }
        return QFileDevice::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QFileDevice::qt_metacast(__arg0);
    }
    
    qint64 readData(char * data, qint64 maxlen)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("readData"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunction(func.get(), this, data, maxlen));
        }
        return QFileDevice::readData(data, maxlen);
    }
    qint64 super_readData(char * data, qint64 maxlen)
    {
        return QFileDevice::readData(data, maxlen);
    }
    
    QFileDevice::Permissions permissions() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("permissions"));
        if(func)
        {
            return cpgf::fromVariant<QFileDevice::Permissions >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QFileDevice::permissions();
    }
    QFileDevice::Permissions super_permissions() const
    {
        return QFileDevice::permissions();
    }
    
    bool waitForBytesWritten(int msecs)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("waitForBytesWritten"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, msecs));
        }
        return QIODevice::waitForBytesWritten(msecs);
    }
    bool super_waitForBytesWritten(int msecs)
    {
        return QIODevice::waitForBytesWritten(msecs);
    }
    
    bool seek(qint64 offset)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("seek"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, offset));
        }
        return QFileDevice::seek(offset);
    }
    bool super_seek(qint64 offset)
    {
        return QFileDevice::seek(offset);
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
    
    qint64 size() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("size"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QFileDevice::size();
    }
    qint64 super_size() const
    {
        return QFileDevice::size();
    }
    
    QObject * sender() const
    {
        return QObject::sender();
    }
    
    qint64 readLineData(char * data, qint64 maxlen)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("readLineData"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunction(func.get(), this, data, maxlen));
        }
        return QFileDevice::readLineData(data, maxlen);
    }
    qint64 super_readLineData(char * data, qint64 maxlen)
    {
        return QFileDevice::readLineData(data, maxlen);
    }
    
    bool isSignalConnected(const QMetaMethod & signal) const
    {
        return QObject::isSignalConnected(signal);
    }
    
    int receivers(const char * signal) const
    {
        return QObject::receivers(signal);
    }
    
    int senderSignalIndex() const
    {
        return QObject::senderSignalIndex();
    }
    
    bool isSequential() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSequential"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QFileDevice::isSequential();
    }
    bool super_isSequential() const
    {
        return QFileDevice::isSequential();
    }
    
    bool open(QIODevice::OpenMode mode)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("open"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, mode));
        }
        return QIODevice::open(mode);
    }
    bool super_open(QIODevice::OpenMode mode)
    {
        return QIODevice::open(mode);
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
    
    QString fileName() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("fileName"));
        if(func)
        {
            return cpgf::fromVariant<QString >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QFileDevice::fileName();
    }
    QString super_fileName() const
    {
        return QFileDevice::fileName();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QFileDevice::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QFileDevice::metaObject();
    }
    
    bool setPermissions(QFileDevice::Permissions permissionSpec)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setPermissions"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, permissionSpec));
        }
        return QFileDevice::setPermissions(permissionSpec);
    }
    bool super_setPermissions(QFileDevice::Permissions permissionSpec)
    {
        return QFileDevice::setPermissions(permissionSpec);
    }
    
    bool atEnd() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("atEnd"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QFileDevice::atEnd();
    }
    bool super_atEnd() const
    {
        return QFileDevice::atEnd();
    }
    
    qint64 bytesAvailable() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bytesAvailable"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QIODevice::bytesAvailable();
    }
    qint64 super_bytesAvailable() const
    {
        return QIODevice::bytesAvailable();
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
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunction(func.get(), this, __arg0, __arg1, __arg2));
        }
        return QFileDevice::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QFileDevice::qt_metacall(__arg0, __arg1, __arg2);
    }
    
    qint64 bytesToWrite() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bytesToWrite"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QIODevice::bytesToWrite();
    }
    qint64 super_bytesToWrite() const
    {
        return QIODevice::bytesToWrite();
    }
    
    void setErrorString(const QString & errorString)
    {
        QIODevice::setErrorString(errorString);
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
    
    bool reset()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("reset"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QIODevice::reset();
    }
    bool super_reset()
    {
        return QIODevice::reset();
    }
    
    qint64 pos() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("pos"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunction(func.get(), this));
        }
        return QFileDevice::pos();
    }
    qint64 super_pos() const
    {
        return QFileDevice::pos();
    }
    
    bool resize(qint64 sz)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("resize"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunction(func.get(), this, sz));
        }
        return QFileDevice::resize(sz);
    }
    bool super_resize(qint64 sz)
    {
        return QFileDevice::resize(sz);
    }
    
    void setOpenMode(QIODevice::OpenMode openMode)
    {
        QIODevice::setOpenMode(openMode);
    }
    
    qint64 writeData(const char * data, qint64 len)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("writeData"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunction(func.get(), this, data, len));
        }
        return QFileDevice::writeData(data, len);
    }
    qint64 super_writeData(const char * data, qint64 len)
    {
        return QFileDevice::writeData(data, len);
    }
    template <typename D>
    static void cpgf__register(D _d)
    {
        (void)_d;
        using namespace cpgf;
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("readData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::readData);
        _d.CPGF_MD_TEMPLATE _method("timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::timerEvent);
        _d.CPGF_MD_TEMPLATE _method("sender", (QObject * (D::ClassType::*) () const)&D::ClassType::sender);
        _d.CPGF_MD_TEMPLATE _method("readLineData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::readLineData);
        _d.CPGF_MD_TEMPLATE _method("isSignalConnected", (bool (D::ClassType::*) (const QMetaMethod &) const)&D::ClassType::isSignalConnected);
        _d.CPGF_MD_TEMPLATE _method("receivers", (int (D::ClassType::*) (const char *) const)&D::ClassType::receivers);
        _d.CPGF_MD_TEMPLATE _method("senderSignalIndex", (int (D::ClassType::*) () const)&D::ClassType::senderSignalIndex);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("setErrorString", (void (D::ClassType::*) (const QString &))&D::ClassType::setErrorString, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
        _d.CPGF_MD_TEMPLATE _method("disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("setOpenMode", (void (D::ClassType::*) (QIODevice::OpenMode))&D::ClassType::setOpenMode);
        _d.CPGF_MD_TEMPLATE _method("writeData", (qint64 (D::ClassType::*) (const char *, qint64))&D::ClassType::writeData);
        _d.CPGF_MD_TEMPLATE _method("super_waitForReadyRead", (bool (D::ClassType::*) (int))&D::ClassType::super_waitForReadyRead);
        _d.CPGF_MD_TEMPLATE _method("super_close", (void (D::ClassType::*) ())&D::ClassType::super_close);
        _d.CPGF_MD_TEMPLATE _method("super_connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_connectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_canReadLine", (bool (D::ClassType::*) () const)&D::ClassType::super_canReadLine);
        _d.CPGF_MD_TEMPLATE _method("super_childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::super_childEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_readData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::super_readData);
        _d.CPGF_MD_TEMPLATE _method("super_permissions", (QFileDevice::Permissions (D::ClassType::*) () const)&D::ClassType::super_permissions);
        _d.CPGF_MD_TEMPLATE _method("super_waitForBytesWritten", (bool (D::ClassType::*) (int))&D::ClassType::super_waitForBytesWritten);
        _d.CPGF_MD_TEMPLATE _method("super_seek", (bool (D::ClassType::*) (qint64))&D::ClassType::super_seek);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_timerEvent", (void (D::ClassType::*) (QTimerEvent *))&D::ClassType::super_timerEvent);
        _d.CPGF_MD_TEMPLATE _method("super_size", (qint64 (D::ClassType::*) () const)&D::ClassType::super_size);
        _d.CPGF_MD_TEMPLATE _method("super_readLineData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::super_readLineData);
        _d.CPGF_MD_TEMPLATE _method("super_isSequential", (bool (D::ClassType::*) () const)&D::ClassType::super_isSequential);
        _d.CPGF_MD_TEMPLATE _method("super_open", (bool (D::ClassType::*) (QIODevice::OpenMode))&D::ClassType::super_open);
        _d.CPGF_MD_TEMPLATE _method("super_eventFilter", (bool (D::ClassType::*) (QObject *, QEvent *))&D::ClassType::super_eventFilter);
        _d.CPGF_MD_TEMPLATE _method("super_fileName", (QString (D::ClassType::*) () const)&D::ClassType::super_fileName);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_setPermissions", (bool (D::ClassType::*) (QFileDevice::Permissions))&D::ClassType::super_setPermissions);
        _d.CPGF_MD_TEMPLATE _method("super_atEnd", (bool (D::ClassType::*) () const)&D::ClassType::super_atEnd);
        _d.CPGF_MD_TEMPLATE _method("super_bytesAvailable", (qint64 (D::ClassType::*) () const)&D::ClassType::super_bytesAvailable);
        _d.CPGF_MD_TEMPLATE _method("super_customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::super_customEvent);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
        _d.CPGF_MD_TEMPLATE _method("super_bytesToWrite", (qint64 (D::ClassType::*) () const)&D::ClassType::super_bytesToWrite);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_reset", (bool (D::ClassType::*) ())&D::ClassType::super_reset);
        _d.CPGF_MD_TEMPLATE _method("super_pos", (qint64 (D::ClassType::*) () const)&D::ClassType::super_pos);
        _d.CPGF_MD_TEMPLATE _method("super_resize", (bool (D::ClassType::*) (qint64))&D::ClassType::super_resize);
        _d.CPGF_MD_TEMPLATE _method("super_writeData", (qint64 (D::ClassType::*) (const char *, qint64))&D::ClassType::super_writeData);
    }
};


template <typename D>
void buildMetaClass_QFileDeviceWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QFileDeviceWrapper::cpgf__register(_d);
    
    buildMetaClass_QFileDevice<D>(_d);
}


} // namespace meta_qtcore




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
