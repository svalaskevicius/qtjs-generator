#include "eventdispatcherlibuv.h"
#include <QCoreApplication>
#include <QSocketNotifier>


#include "uv.h"
#include <QDebug>

namespace {

void uv_socket_watcher(uv_poll_t* handle, int status, int events)
{

}

}

struct SocketInfo {
    SocketInfo() : notifier({nullptr, nullptr}) {}
    uv_poll_t uvHandle;
    QSocketNotifier* notifier[2]; // read, write
};
std::map<int, SocketInfo> sockets;


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
    qDebug() << "prc ev" << hasPending;
    if (!hasPending && finalize) {
        QCoreApplication::instance()->quit();
    }
    return hasPending;

}
bool EventDispatcherLibUv::hasPendingEvents(void) {
    return hasPending;
}

void EventDispatcherLibUv::registerSocketNotifier(QSocketNotifier* notifier) {
    Q_UNIMPLEMENTED();
    int fd = notifier->socket();
    SocketInfo &info = sockets[fd];
    if (info.notifier) {
        uv_poll_stop(&info.uvHandle);
        if ((notifier->type() == QSocketNotifier::Read) && info.notifier[0]) {
            unregisterSocketNotifier(info.notifier[0]);
        } else if ((notifier->type() == QSocketNotifier::Write) && info.notifier[1]) {
            unregisterSocketNotifier(info.notifier[1]);
        }
    } else {
        uv_poll_init(uv_default_loop(), &info.uvHandle, fd);
    }

    int events = 0;
    if (notifier->type() == QSocketNotifier::Read) {
        info.notifier[0] = notifier;
        events |= UV_READABLE;
    } else if (notifier->type() == QSocketNotifier::Write) {
        info.notifier[1] = notifier;
        events |= UV_WRITABLE;
    }

    uv_poll_start(&info.uvHandle, events, uv_socket_watcher);
}
void EventDispatcherLibUv::unregisterSocketNotifier(QSocketNotifier* notifier) {
    Q_UNIMPLEMENTED();
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
