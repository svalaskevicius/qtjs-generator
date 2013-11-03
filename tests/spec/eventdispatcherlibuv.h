
#include <catch.hpp>
#include <turtle/mock.hpp>

#include "../src/runner/eventdispatcherlibuv_p.h"

#include <QSocketNotifier>


MOCK_BASE_CLASS( MockedLibuvApi, qtjs::LibuvApi ) {
    MOCK_METHOD(uv_poll_init, 3);
    MOCK_METHOD(uv_poll_start, 3);
};

TEST_CASE("libuv based event dispatcher") {

    SECTION("registerSocketNotifier initialises libuv handle for the given read fd") {

        uv_poll_t *registeredHandle, *usedHandle;

        MockedLibuvApi *api = new MockedLibuvApi();
        MOCK_EXPECT( api->uv_poll_init ).once()
                .with( mock::equal(uv_default_loop()), mock::retrieve(registeredHandle), mock::equal(19) )
                .returns(0);

        MOCK_EXPECT( api->uv_poll_start ).once()
                .with( mock::retrieve(usedHandle), mock::equal(UV_READABLE), mock::equal(&qtjs::uv_socket_watcher) )
                .returns(0);

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(19, QSocketNotifier::Read);

        REQUIRE( registeredHandle );
        REQUIRE( registeredHandle == usedHandle );
    }

}

