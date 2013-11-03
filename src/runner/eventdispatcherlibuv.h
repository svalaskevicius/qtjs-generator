#ifndef EVENTDISPATCHERLIBUV_H
#define EVENTDISPATCHERLIBUV_H

#include <QAbstractEventDispatcher>
#include <QMap>

#include <memory>

namespace qtjs {

class EventDispatcherLibUvPrivate;

class EventDispatcherLibUv : public QAbstractEventDispatcher {
    Q_OBJECT
    std::unique_ptr<EventDispatcherLibUvPrivate> impl;

    bool hasPending;
public:
    bool finalize;
    explicit EventDispatcherLibUv(QObject* parent = 0);
    virtual ~EventDispatcherLibUv(void);

    virtual void wakeUp(void);
    virtual void interrupt(void);
    virtual void flush(void);

    virtual bool processEvents(QEventLoop::ProcessEventsFlags flags);
    virtual bool hasPendingEvents(void);

    virtual void registerSocketNotifier(QSocketNotifier* notifier);
    virtual void unregisterSocketNotifier(QSocketNotifier* notifier);

    virtual void registerTimer(int timerId, int interval, Qt::TimerType timerType, QObject* object);
    virtual bool unregisterTimer(int timerId);
    virtual bool unregisterTimers(QObject* object);
    virtual QList<QAbstractEventDispatcher::TimerInfo> registeredTimers(QObject* object) const;
    virtual int remainingTime(int timerId);

private:
    QMap<void *, QList<QAbstractEventDispatcher::TimerInfo>> timers;
    QMap<int, void *> timerLookup;
    Q_DISABLE_COPY(EventDispatcherLibUv)

    void untrackObjectTimer(void *obj, int id);
};

}

#endif // EVENTDISPATCHERLIBUV_H
