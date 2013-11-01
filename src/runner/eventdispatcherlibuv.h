#ifndef EVENTDISPATCHERLIBUV_H
#define EVENTDISPATCHERLIBUV_H

#include <QAbstractEventDispatcher>
#include <QCoreApplication>

#include "uv.h"
#include <QDebug>

class EventDispatcherLibUv : public QAbstractEventDispatcher {
    Q_OBJECT

    bool hasPending;
public:
    bool finalize;
    explicit EventDispatcherLibUv(QObject* parent = 0);
    virtual ~EventDispatcherLibUv(void) {}

    virtual void wakeUp(void) {
        Q_UNIMPLEMENTED();
    }
    virtual void interrupt(void) {
        Q_UNIMPLEMENTED();
    }
    virtual void flush(void) {
        Q_UNIMPLEMENTED();
    }

    virtual bool processEvents(QEventLoop::ProcessEventsFlags flags) {
        emit awake();
        QCoreApplication::sendPostedEvents();
        hasPending = uv_run(uv_default_loop(), UV_RUN_ONCE);
        qDebug() << "prc ev" << hasPending;
        if (!hasPending && finalize) {
            QCoreApplication::instance()->quit();
        }
        return hasPending;

    }
    virtual bool hasPendingEvents(void) {
        return hasPending;
    }

    virtual void registerSocketNotifier(QSocketNotifier* notifier) {
        Q_UNIMPLEMENTED();
    }
    virtual void unregisterSocketNotifier(QSocketNotifier* notifier) {
        Q_UNIMPLEMENTED();
    }

    virtual void registerTimer(int timerId, int interval, Qt::TimerType timerType, QObject* object) {
        Q_UNIMPLEMENTED();
    }
    virtual bool unregisterTimer(int timerId) {
        Q_UNIMPLEMENTED();
        return false;
    }
    virtual bool unregisterTimers(QObject* object) {
        Q_UNIMPLEMENTED();
        return false;
    }
    virtual QList<QAbstractEventDispatcher::TimerInfo> registeredTimers(QObject* object) const {
        Q_UNIMPLEMENTED();
        return QList<QAbstractEventDispatcher::TimerInfo>();
    }
    virtual int remainingTime(int timerId) {
        Q_UNIMPLEMENTED();
        return 0;
    }

private:
    Q_DISABLE_COPY(EventDispatcherLibUv)
};


#endif // EVENTDISPATCHERLIBUV_H
