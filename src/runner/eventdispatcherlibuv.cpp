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

int LibuvApi::uv_timer_init(uv_loop_t* loop, uv_timer_t* handle)
{
    return ::uv_timer_init(loop, handle);
}

int LibuvApi::uv_timer_start(uv_timer_t* handle, uv_timer_cb cb, uint64_t timeout, uint64_t repeat)
{
    return ::uv_timer_start(handle, cb, timeout, repeat);
}

int LibuvApi::uv_timer_stop(uv_timer_t* handle)
{
    return ::uv_timer_stop(handle);
}



EventDispatcherLibUvSocketNotifier::EventDispatcherLibUvSocketNotifier(LibuvApi *api) : api(api)
{
    if (!this->api) {
        this->api.reset(new LibuvApi());
    }
}

EventDispatcherLibUvSocketNotifier::~EventDispatcherLibUvSocketNotifier()
{
    for (auto it : socketWatchers) {
        unregisterPollWatcher(it.second, UV_READABLE | UV_WRITABLE);
    }
    socketWatchers.clear();
}

void EventDispatcherLibUvSocketNotifier::registerSocketNotifier(int fd, QSocketNotifier::Type type, std::function<void()> callback)
{
    int uvType = translateQSocketNotifierTypeToUv(type);
    if (uvType < 0) {
        qWarning() << "unsupported notifier type" << type;
        return;
    }
    uv_poll_t &fdWatcher = findOrCreateWatcher(fd);

    SocketCallbacks *callbacks = ((SocketCallbacks *)fdWatcher.data);
    callbacks->eventMask |= uvType;
    if (uvType == UV_READABLE) {
        callbacks->readAvailable = callback;
    }
    if (uvType == UV_WRITABLE) {
        callbacks->writeAvailable = callback;
    }
    api->uv_poll_start(&fdWatcher, uvType, &qtjs::uv_socket_watcher);
}

uv_poll_t &EventDispatcherLibUvSocketNotifier::findOrCreateWatcher(int fd)
{
    auto it = socketWatchers.find(fd);
    if (socketWatchers.end() == it) {
        socketWatchers.insert(std::make_pair(fd, uv_poll_t()));
        it = socketWatchers.find(fd);
        Q_ASSERT(socketWatchers.end() != it);
        it->second.data = new SocketCallbacks();
        api->uv_poll_init(uv_default_loop(), &it->second, fd);
    }
    return it->second;
}

void EventDispatcherLibUvSocketNotifier::unregisterSocketNotifier(int fd, QSocketNotifier::Type type)
{
    int uvType = translateQSocketNotifierTypeToUv(type);
    if (uvType < 0) {
        qWarning() << "unsupported notifier type" << type;
        return;
    }
    auto it = socketWatchers.find(fd);
    if (socketWatchers.end() != it) {
        uv_poll_t &fdWatcher = it->second;
        if (unregisterPollWatcher(fdWatcher, uvType)) {
            socketWatchers.erase(it);
        }
    }
}

bool EventDispatcherLibUvSocketNotifier::unregisterPollWatcher(uv_poll_t &fdWatcher, unsigned int eventMask)
{
    api->uv_poll_stop(&fdWatcher);
    SocketCallbacks *callbacks = (SocketCallbacks *)fdWatcher.data;
    callbacks->eventMask &= ~eventMask;
    if (!callbacks->eventMask) {
        delete callbacks;
        return true;
    }
    api->uv_poll_start(&fdWatcher, callbacks->eventMask, &qtjs::uv_socket_watcher);
    return false;
}




EventDispatcherLibUvTimerNotifier::EventDispatcherLibUvTimerNotifier(LibuvApi *api) : api(api)
{
    if (!this->api) {
        this->api.reset(new LibuvApi());
    }
}

EventDispatcherLibUvTimerNotifier::~EventDispatcherLibUvTimerNotifier()
{
    for (auto it : timers) {
        unregisterTimerWatcher(it.second);
    }
    timers.clear();
}


void EventDispatcherLibUvTimerNotifier::registerTimer(int timerId, int interval, std::function<void()> callback)
{
    auto it = timers.find(timerId);
    if (timers.end() == it) {
        timers.insert(std::make_pair(timerId, uv_timer_t()));
        it = timers.find(timerId);
        Q_ASSERT(timers.end() != it);
        it->second.data = new TimerData();
        api->uv_timer_init(uv_default_loop(), &it->second);
    }
    uv_timer_t &timer = it->second;
    ((TimerData *)timer.data)->timeout = callback;
    api->uv_timer_start(&timer, &uv_timer_watcher, interval, interval);
}

bool EventDispatcherLibUvTimerNotifier::unregisterTimer(int timerId) {
    auto it = timers.find(timerId);
    if (it == timers.end()) {
        return false;
    }
    unregisterTimerWatcher(it->second);
    timers.erase(it);
    return true;
}

void EventDispatcherLibUvTimerNotifier::unregisterTimerWatcher(uv_timer_t &watcher)
{
    api->uv_timer_stop(&watcher);
    delete ((TimerData *)watcher.data);
}



QList<QAbstractEventDispatcher::TimerInfo> EventDispatcherLibUvTimerWatcher::getTimerInfo(QObject *object)
{
    return QList<QAbstractEventDispatcher::TimerInfo>();
}






void uv_socket_watcher(uv_poll_t* req, int /* status */, int events)
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

void uv_timer_watcher(uv_timer_t* handle, int /* status */)
{
    TimerData *data = (TimerData *) handle->data;
    if (data) {
        data->timeout();
    }
}

EventDispatcherLibUv::EventDispatcherLibUv(QObject *parent) :
    QAbstractEventDispatcher(parent),
    socketNotifier(new EventDispatcherLibUvSocketNotifier()),
    timerNotifier(new EventDispatcherLibUvTimerNotifier()),
    hasPending(true), finalize(false)
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
    socketNotifier->registerSocketNotifier(notifier->socket(), notifier->type(), [notifier]{
        QEvent event(QEvent::SockAct);
        QCoreApplication::sendEvent(notifier, &event);
    });
}
void EventDispatcherLibUv::unregisterSocketNotifier(QSocketNotifier* notifier)
{
    socketNotifier->unregisterSocketNotifier(notifier->socket(), notifier->type());
}

void EventDispatcherLibUv::registerTimer(int timerId, int interval, Qt::TimerType timerType, QObject* object)
{
    timerNotifier->registerTimer(timerId, interval, [timerId, object, this] {
        QTimerEvent e(timerId);
        QCoreApplication::sendEvent(object, &e);
        clock_gettime( CLOCK_REALTIME, &timerInvokations[timerId] );
    });
    timers[object].append(QAbstractEventDispatcher::TimerInfo(timerId, interval, timerType));
    timerLookup[timerId] = object;
    clock_gettime( CLOCK_REALTIME, &timerInvokations[timerId] );
}
bool EventDispatcherLibUv::unregisterTimer(int timerId) {
    bool ret = timerNotifier->unregisterTimer(timerId);
    if (ret) {
        untrackObjectTimer(timerLookup[timerId], timerId);
        timerLookup.remove(timerId);
        timerInvokations.remove(timerId);
    }
    return ret;
}
void EventDispatcherLibUv::untrackObjectTimer(void *obj, int id)
{
    QMutableListIterator<QAbstractEventDispatcher::TimerInfo> it(timers[obj]);
    while (it.hasNext()) {
        if (it.next().timerId == id) {
            it.remove();
            if (timers[obj].empty()) {
                timers.remove(obj);
            }
            return;
        }
    }
}

bool EventDispatcherLibUv::unregisterTimers(QObject* object) {
    bool ret = true;
    for (auto info : registeredTimers(object)) {
        ret &= unregisterTimer(info.timerId);
    }
    return ret;
}
QList<QAbstractEventDispatcher::TimerInfo> EventDispatcherLibUv::registeredTimers(QObject* object) const
{
    return timers[object];
}
int EventDispatcherLibUv::remainingTime(int timerId) {
    struct timespec now;
    clock_gettime( CLOCK_REALTIME, &now );
    struct timespec last = timerInvokations[timerId];
    u_int64_t diff = (now.tv_sec - last.tv_sec)*1000000000 + now.tv_nsec - last.tv_nsec;
    if (diff > 0) {
        uint msecs = diff / 1000000;
        for (auto info : timers[timerLookup[timerId]]) {
            if (info.timerId == timerId) {
                return info.interval - msecs;
            }
        }
    }
    return 0;
}

}
