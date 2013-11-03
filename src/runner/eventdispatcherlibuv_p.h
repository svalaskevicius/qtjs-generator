#pragma once

#include <QSocketNotifier>

#include "uv.h"

#include <memory>
#include <map>

namespace qtjs {

void uv_socket_watcher(uv_poll_t* handle, int status, int events);

struct LibuvApi {
    virtual ~LibuvApi() {}
    virtual int uv_poll_init(uv_loop_t* loop, uv_poll_t* handle, int fd);
    virtual int uv_poll_start(uv_poll_t* handle, int events, uv_poll_cb cb);
    virtual int uv_poll_stop(uv_poll_t* handle);
};

class EventDispatcherLibUvPrivate {
public:
    EventDispatcherLibUvPrivate(LibuvApi *api = nullptr);
    virtual void registerSocketNotifier(int fd, QSocketNotifier::Type type);
    virtual void unregisterSocketNotifier(int fd, QSocketNotifier::Type type);
private:
    std::unique_ptr<LibuvApi> api;
    std::map<int, uv_poll_t> socketWatchers;
};

}
