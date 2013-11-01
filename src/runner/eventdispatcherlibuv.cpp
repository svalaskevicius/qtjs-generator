#include "eventdispatcherlibuv.h"
#include <QCoreApplication>

#include "uv.h"
#include <QDebug>

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
