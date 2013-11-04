#pragma once

#include <QAbstractEventDispatcher>
#include <QSocketNotifier>

#include "uv.h"

#include <memory>
#include <map>
#include <functional>

namespace qtjs {

struct SocketCallbacks {
    int eventMask;
    std::function<void()> readAvailable;
    std::function<void()> writeAvailable;
};

struct TimerData {
    std::function<void()> timeout;
};

void uv_socket_watcher(uv_poll_t* handle, int status, int events);
void uv_timer_watcher(uv_timer_t* handle, int status);

struct LibuvApi {
    virtual ~LibuvApi() {}
    virtual int uv_poll_init(uv_loop_t* loop, uv_poll_t* handle, int fd);
    virtual int uv_poll_start(uv_poll_t* handle, int events, uv_poll_cb cb);
    virtual int uv_poll_stop(uv_poll_t* handle);

    virtual int uv_timer_init(uv_loop_t*, uv_timer_t* handle);
    virtual int uv_timer_start(uv_timer_t* handle, uv_timer_cb cb, uint64_t timeout, uint64_t repeat);
    virtual int uv_timer_stop(uv_timer_t* handle);

    virtual uint64_t uv_hrtime(void);
};

class EventDispatcherLibUvSocketNotifier {
public:
    EventDispatcherLibUvSocketNotifier(LibuvApi *api = nullptr);
    virtual ~EventDispatcherLibUvSocketNotifier();
    void registerSocketNotifier(int fd, QSocketNotifier::Type type, std::function<void()> callback);
    void unregisterSocketNotifier(int fd, QSocketNotifier::Type type);
private:
    std::unique_ptr<LibuvApi> api;
    std::map<int, uv_poll_t> socketWatchers;
    uv_poll_t &findOrCreateWatcher(int fd);
    bool unregisterPollWatcher(uv_poll_t &fdWatcher, unsigned int eventMask);
};

class EventDispatcherLibUvTimerNotifier {
public:
    EventDispatcherLibUvTimerNotifier(LibuvApi *api = nullptr);
    virtual ~EventDispatcherLibUvTimerNotifier();
    void registerTimer(int timerId, int interval, std::function<void()> callback);
    bool unregisterTimer(int timerId);
private:
    std::unique_ptr<LibuvApi> api;
    std::map<int, uv_timer_t> timers;
    void unregisterTimerWatcher(uv_timer_t &watcher);
};

class EventDispatcherLibUvTimerWatcher {
public:
    EventDispatcherLibUvTimerWatcher(LibuvApi *api = nullptr);
    void registerTimer(int timerId, int interval, Qt::TimerType timerType, QObject *object);
    QList<QAbstractEventDispatcher::TimerInfo> getTimerInfo(QObject *object);
    void fireTimer(int timerId);
    int remainingTime(int timerId);
private:
    std::unique_ptr<LibuvApi> api;
    std::map<void *, QList<QAbstractEventDispatcher::TimerInfo>> timers;
    std::map<int, unsigned long> timerLastFired;
    std::map<int, int> timerIntervals;
};

}
