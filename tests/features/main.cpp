#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <QApplication>
#include "src/eventdispatcherlibuv.h"

struct GlobalInitialiser {

    qtjs::EventDispatcherLibUv *ev_dispatcher;
    QCoreApplication *app;

    GlobalInitialiser() {
       ev_dispatcher = new qtjs::EventDispatcherLibUv();
       QCoreApplication::setEventDispatcher(ev_dispatcher);
       int argc = 0;
       char *argv[1] = {0};
       app = new QApplication(argc, argv, 0);
    }

    ~GlobalInitialiser() {
        delete app;
    }

} global;


#include "features/eventDispatcher.h"

