// Auto generated file, don't modify.

#ifndef CPGF_META_QTCORE_QPROCESS_H
#define CPGF_META_QTCORE_QPROCESS_H


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
void buildMetaClass_Global_qprocess(D _d)
{
    (void)_d;
    using namespace cpgf;
    
}


template <typename D>
void buildMetaClass_QProcess(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * (QObject *)>()
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _field("staticMetaObject", &D::ClassType::staticMetaObject);
    _d.CPGF_MD_TEMPLATE _method("metaObject", &D::ClassType::metaObject);
    _d.CPGF_MD_TEMPLATE _method("qt_metacast", &D::ClassType::qt_metacast);
    _d.CPGF_MD_TEMPLATE _method("qt_metacall", &D::ClassType::qt_metacall);
    _d.CPGF_MD_TEMPLATE _method("start", (void (D::ClassType::*) (const QString &, const QStringList &, QIODevice::OpenMode))&D::ClassType::start, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QIODevice::ReadWrite))
    ;
    _d.CPGF_MD_TEMPLATE _method("start", (void (D::ClassType::*) (const QString &, QIODevice::OpenMode))&D::ClassType::start, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QIODevice::ReadWrite))
    ;
    _d.CPGF_MD_TEMPLATE _method("start", (void (D::ClassType::*) (QIODevice::OpenMode))&D::ClassType::start)
        ._default(copyVariantFromCopyable(QIODevice::ReadWrite))
    ;
    _d.CPGF_MD_TEMPLATE _method("open", &D::ClassType::open)
        ._default(copyVariantFromCopyable(QIODevice::ReadWrite))
    ;
    _d.CPGF_MD_TEMPLATE _method("program", &D::ClassType::program);
    _d.CPGF_MD_TEMPLATE _method("setProgram", &D::ClassType::setProgram, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("arguments", &D::ClassType::arguments);
    _d.CPGF_MD_TEMPLATE _method("setArguments", &D::ClassType::setArguments, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("readChannelMode", &D::ClassType::readChannelMode);
    _d.CPGF_MD_TEMPLATE _method("setReadChannelMode", &D::ClassType::setReadChannelMode);
    _d.CPGF_MD_TEMPLATE _method("processChannelMode", &D::ClassType::processChannelMode);
    _d.CPGF_MD_TEMPLATE _method("setProcessChannelMode", &D::ClassType::setProcessChannelMode);
    _d.CPGF_MD_TEMPLATE _method("inputChannelMode", &D::ClassType::inputChannelMode);
    _d.CPGF_MD_TEMPLATE _method("setInputChannelMode", &D::ClassType::setInputChannelMode);
    _d.CPGF_MD_TEMPLATE _method("readChannel", &D::ClassType::readChannel);
    _d.CPGF_MD_TEMPLATE _method("setReadChannel", &D::ClassType::setReadChannel);
    _d.CPGF_MD_TEMPLATE _method("closeReadChannel", &D::ClassType::closeReadChannel);
    _d.CPGF_MD_TEMPLATE _method("closeWriteChannel", &D::ClassType::closeWriteChannel);
    _d.CPGF_MD_TEMPLATE _method("setStandardInputFile", &D::ClassType::setStandardInputFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setStandardOutputFile", &D::ClassType::setStandardOutputFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QIODevice::Truncate))
    ;
    _d.CPGF_MD_TEMPLATE _method("setStandardErrorFile", &D::ClassType::setStandardErrorFile, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >())
        ._default(copyVariantFromCopyable(QIODevice::Truncate))
    ;
    _d.CPGF_MD_TEMPLATE _method("setStandardOutputProcess", &D::ClassType::setStandardOutputProcess);
    _d.CPGF_MD_TEMPLATE _method("workingDirectory", &D::ClassType::workingDirectory);
    _d.CPGF_MD_TEMPLATE _method("setWorkingDirectory", &D::ClassType::setWorkingDirectory, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("setEnvironment", &D::ClassType::setEnvironment, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("environment", &D::ClassType::environment);
    _d.CPGF_MD_TEMPLATE _method("setProcessEnvironment", &D::ClassType::setProcessEnvironment);
    _d.CPGF_MD_TEMPLATE _method("processEnvironment", &D::ClassType::processEnvironment);
    _d.CPGF_MD_TEMPLATE _method("state", &D::ClassType::state);
    _d.CPGF_MD_TEMPLATE _method("pid", &D::ClassType::pid);
    _d.CPGF_MD_TEMPLATE _method("processId", &D::ClassType::processId);
    _d.CPGF_MD_TEMPLATE _method("waitForStarted", &D::ClassType::waitForStarted)
        ._default(copyVariantFromCopyable(30000))
    ;
    _d.CPGF_MD_TEMPLATE _method("waitForReadyRead", &D::ClassType::waitForReadyRead)
        ._default(copyVariantFromCopyable(30000))
    ;
    _d.CPGF_MD_TEMPLATE _method("waitForBytesWritten", &D::ClassType::waitForBytesWritten)
        ._default(copyVariantFromCopyable(30000))
    ;
    _d.CPGF_MD_TEMPLATE _method("waitForFinished", &D::ClassType::waitForFinished)
        ._default(copyVariantFromCopyable(30000))
    ;
    _d.CPGF_MD_TEMPLATE _method("readAllStandardOutput", &D::ClassType::readAllStandardOutput);
    _d.CPGF_MD_TEMPLATE _method("readAllStandardError", &D::ClassType::readAllStandardError);
    _d.CPGF_MD_TEMPLATE _method("exitCode", &D::ClassType::exitCode);
    _d.CPGF_MD_TEMPLATE _method("exitStatus", &D::ClassType::exitStatus);
    _d.CPGF_MD_TEMPLATE _method("bytesAvailable", &D::ClassType::bytesAvailable);
    _d.CPGF_MD_TEMPLATE _method("bytesToWrite", &D::ClassType::bytesToWrite);
    _d.CPGF_MD_TEMPLATE _method("isSequential", &D::ClassType::isSequential);
    _d.CPGF_MD_TEMPLATE _method("canReadLine", &D::ClassType::canReadLine);
    _d.CPGF_MD_TEMPLATE _method("close", &D::ClassType::close);
    _d.CPGF_MD_TEMPLATE _method("atEnd", &D::ClassType::atEnd);
    _d.CPGF_MD_TEMPLATE _method("terminate", &D::ClassType::terminate);
    _d.CPGF_MD_TEMPLATE _method("kill", &D::ClassType::kill);
    _d.CPGF_MD_TEMPLATE _method("started", &D::ClassType::started);
    _d.CPGF_MD_TEMPLATE _method("finished", (void (D::ClassType::*) (int))&D::ClassType::finished);
    _d.CPGF_MD_TEMPLATE _method("finished", (void (D::ClassType::*) (int, QProcess::ExitStatus))&D::ClassType::finished);
    _d.CPGF_MD_TEMPLATE _method("stateChanged", &D::ClassType::stateChanged);
    _d.CPGF_MD_TEMPLATE _method("readyReadStandardOutput", &D::ClassType::readyReadStandardOutput);
    _d.CPGF_MD_TEMPLATE _method("readyReadStandardError", &D::ClassType::readyReadStandardError);
    _d.CPGF_MD_TEMPLATE _method("tr", &D::ClassType::tr)
        ._default(copyVariantFromCopyable(-1))
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("execute", (int (*) (const QString &, const QStringList &))&D::ClassType::execute, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("execute", (int (*) (const QString &))&D::ClassType::execute, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("startDetached", (bool (*) (const QString &, const QStringList &, const QString &, qint64 *))&D::ClassType::startDetached, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1>, cpgf::GMetaRuleCopyConstReference<2> >())
        ._default(copyVariantFromCopyable(0))
    ;
    _d.CPGF_MD_TEMPLATE _method("startDetached", (bool (*) (const QString &, const QStringList &))&D::ClassType::startDetached, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("startDetached", (bool (*) (const QString &))&D::ClassType::startDetached, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("systemEnvironment", &D::ClassType::systemEnvironment);
    _d.CPGF_MD_TEMPLATE _method("nullDevice", &D::ClassType::nullDevice);
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ProcessError>("ProcessError")
        ._element("FailedToStart", D::ClassType::FailedToStart)
        ._element("Crashed", D::ClassType::Crashed)
        ._element("Timedout", D::ClassType::Timedout)
        ._element("ReadError", D::ClassType::ReadError)
        ._element("WriteError", D::ClassType::WriteError)
        ._element("UnknownError", D::ClassType::UnknownError)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ProcessState>("ProcessState")
        ._element("NotRunning", D::ClassType::NotRunning)
        ._element("Starting", D::ClassType::Starting)
        ._element("Running", D::ClassType::Running)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ProcessChannel>("ProcessChannel")
        ._element("StandardOutput", D::ClassType::StandardOutput)
        ._element("StandardError", D::ClassType::StandardError)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ProcessChannelMode>("ProcessChannelMode")
        ._element("SeparateChannels", D::ClassType::SeparateChannels)
        ._element("MergedChannels", D::ClassType::MergedChannels)
        ._element("ForwardedChannels", D::ClassType::ForwardedChannels)
        ._element("ForwardedOutputChannel", D::ClassType::ForwardedOutputChannel)
        ._element("ForwardedErrorChannel", D::ClassType::ForwardedErrorChannel)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::InputChannelMode>("InputChannelMode")
        ._element("ManagedInputChannel", D::ClassType::ManagedInputChannel)
        ._element("ForwardedInputChannel", D::ClassType::ForwardedInputChannel)
    ;
    _d.CPGF_MD_TEMPLATE _enum<typename D::ClassType::ExitStatus>("ExitStatus")
        ._element("NormalExit", D::ClassType::NormalExit)
        ._element("CrashExit", D::ClassType::CrashExit)
    ;
}


class QProcessWrapper : public QProcess, public cpgf::GScriptWrapper {
public:
    
    QProcessWrapper(QObject * parent = 0)
        : QProcess(parent) {}
    
    bool open(QIODevice::OpenMode mode = QIODevice::ReadWrite)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("open"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, mode).getValue());
        }
        return QProcess::open(mode);
    }
    bool super_open(QIODevice::OpenMode mode = QIODevice::ReadWrite)
    {
        return QProcess::open(mode);
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
        QProcess::close();
    }
    void super_close()
    {
        QProcess::close();
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
    
    bool waitForReadyRead(int msecs = 30000)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("waitForReadyRead"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, msecs).getValue());
        }
        return QProcess::waitForReadyRead(msecs);
    }
    bool super_waitForReadyRead(int msecs = 30000)
    {
        return QProcess::waitForReadyRead(msecs);
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
    
    void setProcessState(QProcess::ProcessState state)
    {
        QProcess::setProcessState(state);
    }
    
    qint64 bytesAvailable() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("bytesAvailable"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QProcess::bytesAvailable();
    }
    qint64 super_bytesAvailable() const
    {
        return QProcess::bytesAvailable();
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
        return QProcess::atEnd();
    }
    bool super_atEnd() const
    {
        return QProcess::atEnd();
    }
    
    bool canReadLine() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("canReadLine"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QProcess::canReadLine();
    }
    bool super_canReadLine() const
    {
        return QProcess::canReadLine();
    }
    
    qint64 readData(char * data, qint64 maxlen)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("readData"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunctionOnObject(func.get(), this, data, maxlen).getValue());
        }
        return QProcess::readData(data, maxlen);
    }
    qint64 super_readData(char * data, qint64 maxlen)
    {
        return QProcess::readData(data, maxlen);
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
        return QProcess::bytesToWrite();
    }
    qint64 super_bytesToWrite() const
    {
        return QProcess::bytesToWrite();
    }
    
    bool waitForBytesWritten(int msecs = 30000)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("waitForBytesWritten"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this, msecs).getValue());
        }
        return QProcess::waitForBytesWritten(msecs);
    }
    bool super_waitForBytesWritten(int msecs = 30000)
    {
        return QProcess::waitForBytesWritten(msecs);
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
        return QProcess::qt_metacast(__arg0);
    }
    void * super_qt_metacast(const char * __arg0)
    {
        return QProcess::qt_metacast(__arg0);
    }
    
    bool isSequential() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("isSequential"));
        if(func)
        {
            return cpgf::fromVariant<bool >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QProcess::isSequential();
    }
    bool super_isSequential() const
    {
        return QProcess::isSequential();
    }
    
    qint64 writeData(const char * data, qint64 len)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("writeData"));
        if(func)
        {
            return cpgf::fromVariant<qint64 >(cpgf::invokeScriptFunctionOnObject(func.get(), this, data, len).getValue());
        }
        return QProcess::writeData(data, len);
    }
    qint64 super_writeData(const char * data, qint64 len)
    {
        return QProcess::writeData(data, len);
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
    
    void setupChildProcess()
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("setupChildProcess"));
        if(func)
        {
            cpgf::invokeScriptFunctionOnObject(func.get(), this);
            return;
        }
        QProcess::setupChildProcess();
    }
    void super_setupChildProcess()
    {
        QProcess::setupChildProcess();
    }
    
    const QMetaObject * metaObject() const
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("metaObject"));
        if(func)
        {
            return cpgf::fromVariant<const QMetaObject * >(cpgf::invokeScriptFunctionOnObject(func.get(), this).getValue());
        }
        return QProcess::metaObject();
    }
    const QMetaObject * super_metaObject() const
    {
        return QProcess::metaObject();
    }
    
    int qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        cpgf::GScopedInterface<cpgf::IScriptFunction> func(this->getScriptFunction("qt_metacall"));
        if(func)
        {
            return cpgf::fromVariant<int >(cpgf::invokeScriptFunctionOnObject(func.get(), this, __arg0, __arg1, __arg2).getValue());
        }
        return QProcess::qt_metacall(__arg0, __arg1, __arg2);
    }
    int super_qt_metacall(QMetaObject::Call __arg0, int __arg1, void ** __arg2)
    {
        return QProcess::qt_metacall(__arg0, __arg1, __arg2);
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
        _d.CPGF_MD_TEMPLATE _method("setProcessState", (void (D::ClassType::*) (QProcess::ProcessState))&D::ClassType::setProcessState);
        _d.CPGF_MD_TEMPLATE _method("childEvent", (void (D::ClassType::*) (QChildEvent *))&D::ClassType::childEvent);
        _d.CPGF_MD_TEMPLATE _method("readData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::readData);
        _d.CPGF_MD_TEMPLATE _method("customEvent", (void (D::ClassType::*) (QEvent *))&D::ClassType::customEvent);
        _d.CPGF_MD_TEMPLATE _method("connectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::connectNotify);
        _d.CPGF_MD_TEMPLATE _method("writeData", (qint64 (D::ClassType::*) (const char *, qint64))&D::ClassType::writeData);
        _d.CPGF_MD_TEMPLATE _method("readLineData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::readLineData);
        _d.CPGF_MD_TEMPLATE _method("setupChildProcess", (void (D::ClassType::*) ())&D::ClassType::setupChildProcess);
        _d.CPGF_MD_TEMPLATE _method("super_open", (bool (D::ClassType::*) (QIODevice::OpenMode))&D::ClassType::super_open)
            ._default(copyVariantFromCopyable(QIODevice::ReadWrite))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_seek", (bool (D::ClassType::*) (qint64))&D::ClassType::super_seek);
        _d.CPGF_MD_TEMPLATE _method("super_close", (void (D::ClassType::*) ())&D::ClassType::super_close);
        _d.CPGF_MD_TEMPLATE _method("super_pos", (qint64 (D::ClassType::*) () const)&D::ClassType::super_pos);
        _d.CPGF_MD_TEMPLATE _method("super_disconnectNotify", (void (D::ClassType::*) (const QMetaMethod &))&D::ClassType::super_disconnectNotify);
        _d.CPGF_MD_TEMPLATE _method("super_waitForReadyRead", (bool (D::ClassType::*) (int))&D::ClassType::super_waitForReadyRead)
            ._default(copyVariantFromCopyable(30000))
        ;
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
        _d.CPGF_MD_TEMPLATE _method("super_waitForBytesWritten", (bool (D::ClassType::*) (int))&D::ClassType::super_waitForBytesWritten)
            ._default(copyVariantFromCopyable(30000))
        ;
        _d.CPGF_MD_TEMPLATE _method("super_size", (qint64 (D::ClassType::*) () const)&D::ClassType::super_size);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacast", (void * (D::ClassType::*) (const char *))&D::ClassType::super_qt_metacast);
        _d.CPGF_MD_TEMPLATE _method("super_isSequential", (bool (D::ClassType::*) () const)&D::ClassType::super_isSequential);
        _d.CPGF_MD_TEMPLATE _method("super_writeData", (qint64 (D::ClassType::*) (const char *, qint64))&D::ClassType::super_writeData);
        _d.CPGF_MD_TEMPLATE _method("super_event", (bool (D::ClassType::*) (QEvent *))&D::ClassType::super_event);
        _d.CPGF_MD_TEMPLATE _method("super_readLineData", (qint64 (D::ClassType::*) (char *, qint64))&D::ClassType::super_readLineData);
        _d.CPGF_MD_TEMPLATE _method("super_setupChildProcess", (void (D::ClassType::*) ())&D::ClassType::super_setupChildProcess);
        _d.CPGF_MD_TEMPLATE _method("super_metaObject", (const QMetaObject * (D::ClassType::*) () const)&D::ClassType::super_metaObject);
        _d.CPGF_MD_TEMPLATE _method("super_qt_metacall", (int (D::ClassType::*) (QMetaObject::Call, int, void **))&D::ClassType::super_qt_metacall);
    }
};


template <typename D>
void buildMetaClass_QProcessWrapper(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    
    QProcessWrapper::cpgf__register(_d);
    
    buildMetaClass_QProcess<D>(_d);
}


inline QProcessEnvironment & opErAToRWrapper_QProcessEnvironment__opAssign(QProcessEnvironment * self, const QProcessEnvironment & other) {
    return (*self) = other;
}
inline bool opErAToRWrapper_QProcessEnvironment__opEqual(const QProcessEnvironment * self, const QProcessEnvironment & other) {
    return (*self) == other;
}
inline bool opErAToRWrapper_QProcessEnvironment__opNotEqual(const QProcessEnvironment * self, const QProcessEnvironment & other) {
    return (*self) != other;
}


template <typename D>
void buildMetaClass_QProcessEnvironment(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _constructor<void * (const QProcessEnvironment &)>();
    _d.CPGF_MD_TEMPLATE _method("swap", &D::ClassType::swap);
    _d.CPGF_MD_TEMPLATE _method("isEmpty", &D::ClassType::isEmpty);
    _d.CPGF_MD_TEMPLATE _method("clear", &D::ClassType::clear);
    _d.CPGF_MD_TEMPLATE _method("contains", &D::ClassType::contains, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("insert", (void (D::ClassType::*) (const QString &, const QString &))&D::ClassType::insert, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >());
    _d.CPGF_MD_TEMPLATE _method("remove", &D::ClassType::remove, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0> >());
    _d.CPGF_MD_TEMPLATE _method("value", &D::ClassType::value, cpgf::MakePolicy<cpgf::GMetaRuleCopyConstReference<0>, cpgf::GMetaRuleCopyConstReference<1> >())
        ._default(copyVariantFromCopyable(QString()))
    ;
    _d.CPGF_MD_TEMPLATE _method("toStringList", &D::ClassType::toStringList);
    _d.CPGF_MD_TEMPLATE _method("keys", &D::ClassType::keys);
    _d.CPGF_MD_TEMPLATE _method("insert", (void (D::ClassType::*) (const QProcessEnvironment &))&D::ClassType::insert);
    _d.CPGF_MD_TEMPLATE _method("systemEnvironment", &D::ClassType::systemEnvironment);
    _d.CPGF_MD_TEMPLATE _operator<QProcessEnvironment & (*)(cpgf::GMetaSelf, const QProcessEnvironment &)>(mopHolder = mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opAssign", (QProcessEnvironment & (*) (QProcessEnvironment *, const QProcessEnvironment &))&opErAToRWrapper_QProcessEnvironment__opAssign, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QProcessEnvironment &)>(mopHolder == mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opEqual", (bool (*) (const QProcessEnvironment *, const QProcessEnvironment &))&opErAToRWrapper_QProcessEnvironment__opEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
    _d.CPGF_MD_TEMPLATE _operator<bool (*)(const cpgf::GMetaSelf &, const QProcessEnvironment &)>(mopHolder != mopHolder);
    _d.CPGF_MD_TEMPLATE _method("_opNotEqual", (bool (*) (const QProcessEnvironment *, const QProcessEnvironment &))&opErAToRWrapper_QProcessEnvironment__opNotEqual, cpgf::MakePolicy<cpgf::GMetaRuleExplicitThis >());
}


} // namespace qt_metadata




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
