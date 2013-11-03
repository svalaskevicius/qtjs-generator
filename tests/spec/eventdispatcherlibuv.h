
#include <catch.hpp>
#include <turtle/mock.hpp>

#include "../src/runner/eventdispatcherlibuv_p.h"

#include <QSocketNotifier>


MOCK_BASE_CLASS( MockedLibuvApi, qtjs::LibuvApi ) {
    MOCK_METHOD(uv_poll_init, 3)
    MOCK_METHOD(uv_poll_start, 3)
    MOCK_METHOD(uv_poll_stop, 1)
};

namespace {

struct pollInitMocker {
    uv_poll_t *registeredHandle, *usedHandle;

    pollInitMocker(MockedLibuvApi *api, int fd, int type) {
        MOCK_EXPECT( api->uv_poll_init ).once()
                .with( mock::equal(uv_default_loop()), mock::retrieve(registeredHandle), mock::equal(fd) )
                .returns(0);

        MOCK_EXPECT( api->uv_poll_start ).once()
                .with( mock::retrieve(usedHandle), mock::equal(type), mock::equal(&qtjs::uv_socket_watcher) )
                .returns(0);
    }

    void checkHandles() {
        REQUIRE( registeredHandle );
        REQUIRE( registeredHandle == usedHandle );
    }
};

}

TEST_CASE("libuv based event dispatcher")
{
    SECTION("registerSocketNotifier initialises libuv handle for the given read fd")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        pollInitMocker pollMocker(api, 19, UV_READABLE);

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(19, QSocketNotifier::Read);

        pollMocker.checkHandles();
    }

    SECTION("registerSocketNotifier initialises libuv handle for the given write fd")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        pollInitMocker pollMocker(api, 20, UV_WRITABLE);

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Write);

        pollMocker.checkHandles();
    }

    SECTION("unregisterSocketNotifier stops uv poller for a registered handle")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        pollInitMocker pollMocker(api, 20, UV_WRITABLE);

        uv_poll_t *usedHandle;

        MOCK_EXPECT( api->uv_poll_stop ).once()
                .with( mock::retrieve(usedHandle) )
                .returns(0);

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Write);
        dispatcher.unregisterSocketNotifier(20, QSocketNotifier::Write);

        pollMocker.checkHandles();
        REQUIRE( usedHandle );
        REQUIRE( usedHandle == pollMocker.registeredHandle );
    }


    SECTION("unregisterSocketNotifier does not call libuv if the socket was not registered")
    {
        MockedLibuvApi *api = new MockedLibuvApi();

        MOCK_EXPECT( api->uv_poll_stop ).never();

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.unregisterSocketNotifier(20, QSocketNotifier::Write);
    }
}
