#include "eventdispatcherlibuv.h"
#include <QCoreApplication>
#include <QSocketNotifier>


#include "uv.h"
#include <QDebug>

#include "eventdispatcherlibuv_p.h"


namespace {

inline int translateQSocketNotifierTypeToUv(QSocketNotifier::Type type) {
    switch (type) {
        case QSocketNotifier::Read: return UV_READABLE;
        case QSocketNotifier::Write: return UV_WRITABLE;
        default: return -1;
    }
}

}

namespace qtjs {

int LibuvApi::uv_poll_init(uv_loop_t* loop, uv_poll_t* handle, int fd)
{
    return ::uv_poll_init(loop, handle, fd);
}

int LibuvApi::uv_poll_start(uv_poll_t* handle, int events, uv_poll_cb cb)
{
    return ::uv_poll_start(handle, events, cb);
}

int LibuvApi::uv_poll_stop(uv_poll_t* handle)
{
    return ::uv_poll_stop(handle);
}


EventDispatcherLibUvPrivate::EventDispatcherLibUvPrivate(LibuvApi *api) : api(api)
{
    if (!this->api) {
        this->api.reset(new LibuvApi());
    }
}
void EventDispatcherLibUvPrivate::registerSocketNotifier(int fd, QSocketNotifier::Type type, std::function<void()> callback)
{
    int uvType = translateQSocketNotifierTypeToUv(type);
    if (uvType < 0) {
        qWarning() << "unsupported notifier type" << type;
        return;
    }
    uv_poll_t &fdWatcher = socketWatchers[fd];
    if (!fdWatcher.data) {
        fdWatcher.data = new SocketCallbacks();
    }
    SocketCallbacks *callbacks = ((SocketCallbacks *)fdWatcher.data);
    if (uvType == UV_READABLE) {
        callbacks->readAvailable = callback;
    }
    if (uvType == UV_WRITABLE) {
        callbacks->writeAvailable = callback;
    }
    api->uv_poll_init(uv_default_loop(), &fdWatcher, fd);
    api->uv_poll_start(&fdWatcher, uvType, &qtjs::uv_socket_watcher);
}

void EventDispatcherLibUvPrivate::unregisterSocketNotifier(int fd, QSocketNotifier::Type type)
{
    auto it = socketWatchers.find(fd);
    if (socketWatchers.end() != it) {
        uv_poll_t &fdWatcher = it->second;
        api->uv_poll_stop(&fdWatcher);
        socketWatchers.erase(it);
    }
}



void uv_socket_watcher(uv_poll_t* req, int status, int events)
{
    SocketCallbacks *callbacks = (SocketCallbacks *) req->data;
    if (callbacks) {
        if (events & UV_READABLE) {
            callbacks->readAvailable();
        }
        if (events & UV_WRITABLE) {
            callbacks->writeAvailable();
        }
    }
}

}


struct SocketInfo {
    SocketInfo() : notifier{nullptr, nullptr}, registered(false), started(false) {}
    uv_poll_t uvHandle;
    QSocketNotifier* notifier[2]; // read, write
    bool registered;
    bool started;
};
std::map<int, SocketInfo> sockets;
std::map<uv_poll_t*, SocketInfo*> socketLookup;

namespace {

//void uv_socket_watcher(uv_poll_t* handle, int status, int events)
//{
//    auto it = socketLookup.find(handle);
//    if (socketLookup.end() == it) {
//        qWarning() << "unknown socket to notify";
//        return;
//    }

//    qDebug() << status;
//    SocketInfo &info = *(it->second);
//    QEvent event(QEvent::SockAct);
//    if (events & UV_READABLE) {
//        qDebug() << "prc ev R";

//        Q_ASSERT(info.notifier[0]);
//        QCoreApplication::sendEvent(info.notifier[0], &event);
//    }
//    if (events & UV_WRITABLE) {
//        qDebug() << "prc ev W";


//        Q_ASSERT(info.notifier[1]);
//        QCoreApplication::sendEvent(info.notifier[1], &event);
//    }
//}

}

EventDispatcherLibUv::EventDispatcherLibUv(QObject *parent) :
    QAbstractEventDispatcher(parent), hasPending(true), finalize(false)
{
}

EventDispatcherLibUv::~EventDispatcherLibUv(void) {}

void EventDispatcherLibUv::wakeUp(void) {
    Q_UNIMPLEMENTED();
}
void EventDispatcherLibUv::interrupt(void) {
    Q_UNIMPLEMENTED();
}
void EventDispatcherLibUv::flush(void) {
}

bool EventDispatcherLibUv::processEvents(QEventLoop::ProcessEventsFlags flags) {
    emit awake();
    QCoreApplication::sendPostedEvents();
    emit aboutToBlock();
    hasPending = uv_run(uv_default_loop(), UV_RUN_ONCE);
    if (!hasPending && finalize) {
        QCoreApplication::instance()->quit();
    }
    return hasPending;

}
bool EventDispatcherLibUv::hasPendingEvents(void) {
    return hasPending;
}

void EventDispatcherLibUv::registerSocketNotifier(QSocketNotifier* notifier)
{

}
void EventDispatcherLibUv::unregisterSocketNotifier(QSocketNotifier* notifier)
{
}

void EventDispatcherLibUv::registerTimer(int timerId, int interval, Qt::TimerType timerType, QObject* object) {
    Q_UNIMPLEMENTED();
}
bool EventDispatcherLibUv::unregisterTimer(int timerId) {
    Q_UNIMPLEMENTED();
    return false;
}
bool EventDispatcherLibUv::unregisterTimers(QObject* object) {
    Q_UNIMPLEMENTED();
    return false;
}
QList<QAbstractEventDispatcher::TimerInfo> EventDispatcherLibUv::registeredTimers(QObject* object) const {
    Q_UNIMPLEMENTED();
    return QList<QAbstractEventDispatcher::TimerInfo>();
}
int EventDispatcherLibUv::remainingTime(int timerId) {
    Q_UNIMPLEMENTED();
    return 0;
}
