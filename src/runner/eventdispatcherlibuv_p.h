#pragma once

#include <QSocketNotifier>

#include "uv.h"

namespace qtjs {

struct LibuvApi {
    virtual int uv_poll_init(uv_loop_t* loop, uv_poll_t* handle, int fd) {
        return ::uv_poll_init(loop, handle, fd);
    }
};

class EventDispatcherLibUvPrivate {
public:
    virtual void registerSocketNotifier(int fd, QSocketNotifier::Type type) {

    }
};

}
