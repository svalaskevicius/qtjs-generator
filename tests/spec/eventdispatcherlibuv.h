
#include <catch.hpp>
#include <turtle/mock.hpp>

#include "../src/runner/eventdispatcherlibuv_p.h"

#include <QSocketNotifier>



MOCK_BASE_CLASS( MockedLibuvApi, qtjs::LibuvApi ) {
    MOCK_METHOD(uv_poll_init, 3);
};

TEST_CASE("libuv based event dispatcher") {

    SECTION("registerSocketNotifier initialises libuv handle for the given fd") {

        qtjs::EventDispatcherLibUvPrivate dispatcher;

        MockedLibuvApi api;
        MOCK_EXPECT( api.uv_poll_init ).once( ).with( mock::any, mock::any, mock::equal(19) ).returns(0);
        api.uv_poll_init(nullptr, nullptr, 19);

//        dispatcher.registerSocketNotifier(19, QSocketNotifier::Read);

//        REQUIRE(1);
    }

}

