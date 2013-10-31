#include "eventdispatcherlibuv.h"

EventDispatcherLibUv::EventDispatcherLibUv(QObject *parent) :
    QAbstractEventDispatcher(parent), hasPending(true), finalize(false)
{
}
