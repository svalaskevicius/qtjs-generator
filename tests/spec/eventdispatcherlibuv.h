
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

struct PollMocker {
    uv_poll_t *registeredHandle, *startedHandle, *stoppedHandle;
    bool checkStart, checkStop;
    MockedLibuvApi *api;

    PollMocker(MockedLibuvApi *api);
    void mockInit(int fd);
    void mockStart(int type);
    void mockInitAndStart(int fd, int type);
    void mockStop();
    void checkHandles();
    void verifyAndReset();
};

}

TEST_CASE("EventDispatcherLibUv supports QSocketNotifier registration")
{
    SECTION("registerSocketNotifier initialises libuv handle for the given read fd")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndStart(19, UV_READABLE);

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(19, QSocketNotifier::Read, []{});

        pollMocker.checkHandles();
    }

    SECTION("registerSocketNotifier initialises libuv handle for the given write fd")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndStart(20, UV_WRITABLE);

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Write, []{});

        pollMocker.checkHandles();
    }

    SECTION("unregisterSocketNotifier stops uv poller for a registered handle")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndStart(20, UV_WRITABLE);
        pollMocker.mockStop();

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Write, []{});
        dispatcher.unregisterSocketNotifier(20, QSocketNotifier::Write);

        pollMocker.checkHandles();
    }


    SECTION("unregisterSocketNotifier does not call libuv if the socket was not registered")
    {
        MockedLibuvApi *api = new MockedLibuvApi();

        MOCK_EXPECT( api->uv_poll_stop ).never();

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.unregisterSocketNotifier(20, QSocketNotifier::Write);
    }

    SECTION("unregisterSocketNotifier stops uv poller just once for a registered handle")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndStart(20, UV_WRITABLE);
        pollMocker.mockStop();

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Write, []{});
        dispatcher.unregisterSocketNotifier(20, QSocketNotifier::Write);
        dispatcher.unregisterSocketNotifier(20, QSocketNotifier::Write);

        pollMocker.checkHandles();
    }

    SECTION("socket watcher invokes read callback")
    {
        int callbackInvoked = 0;
        qtjs::SocketCallbacks callbacks = {
            UV_READABLE,
            [&callbackInvoked]{ callbackInvoked++; },
            []{ FAIL("unexpected call"); }
        };

        uv_poll_t request;
        request.data = &callbacks;

        qtjs::uv_socket_watcher(&request, 0, UV_READABLE);

        REQUIRE( callbackInvoked == 1 );
    }

    SECTION("socket watcher invokes write callback")
    {
        int callbackInvoked = 0;
        qtjs::SocketCallbacks callbacks = {
            UV_WRITABLE,
            []{ FAIL("unexpected call"); },
            [&callbackInvoked]{ callbackInvoked++; }
        };

        uv_poll_t request;
        request.data = &callbacks;

        qtjs::uv_socket_watcher(&request, 0, UV_WRITABLE);

        REQUIRE( callbackInvoked == 1 );
    }


    SECTION("registerSocketNotifier initialises libuv handle read callback")
    {
        int callbackInvoked = 0;
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndStart(19, UV_READABLE);

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(19, QSocketNotifier::Read, [&callbackInvoked]{ callbackInvoked++; });

        pollMocker.checkHandles();
        REQUIRE( pollMocker.startedHandle->data );
        ((qtjs::SocketCallbacks *)pollMocker.startedHandle->data)->readAvailable();
        REQUIRE_THROWS( ((qtjs::SocketCallbacks *)pollMocker.startedHandle->data)->writeAvailable() );
        REQUIRE( callbackInvoked == 1 );
    }

    SECTION("registerSocketNotifier initialises libuv handle write callback")
    {
        int callbackInvoked = 0;
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndStart(19, UV_WRITABLE);

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(19, QSocketNotifier::Write, [&callbackInvoked]{ callbackInvoked++; });

        pollMocker.checkHandles();
        REQUIRE( pollMocker.startedHandle->data );
        REQUIRE_THROWS( ((qtjs::SocketCallbacks *)pollMocker.startedHandle->data)->readAvailable() );
        ((qtjs::SocketCallbacks *)pollMocker.startedHandle->data)->writeAvailable();
        REQUIRE( callbackInvoked == 1 );
    }

    SECTION("registerSocketNotifier combines libuv handle read&write callbacks")
    {
        int callbackInvoked = 0;
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndStart(19, UV_READABLE);
        pollMocker.mockStart(UV_WRITABLE);

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(19, QSocketNotifier::Read, [&callbackInvoked]{ callbackInvoked++; });
        dispatcher.registerSocketNotifier(19, QSocketNotifier::Write, [&callbackInvoked]{ callbackInvoked++; });

        pollMocker.checkHandles();
        REQUIRE( pollMocker.startedHandle->data );

        ((qtjs::SocketCallbacks *)pollMocker.startedHandle->data)->readAvailable();
        ((qtjs::SocketCallbacks *)pollMocker.startedHandle->data)->writeAvailable();

        REQUIRE( callbackInvoked == 2 );
    }

    SECTION("unregisterSocketNotifier only unregisters the requested events type")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndStart(20, UV_WRITABLE);
        pollMocker.mockStart(UV_READABLE);

        qtjs::EventDispatcherLibUvPrivate dispatcher(api);
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Write, []{});
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Read, []{});

        pollMocker.checkHandles();
        pollMocker.verifyAndReset();

        pollMocker.mockStop();
        pollMocker.mockStart(UV_READABLE);

        dispatcher.unregisterSocketNotifier(20, QSocketNotifier::Write);

        pollMocker.checkHandles();
    }
}

TEST_CASE("EventDispatcherLibUv supports QTimer registration")
{
    SECTION("it does not unregister a non-existing timer")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        qtjs::EventDispatcherLibUvPrivate dispatcher(api);

        REQUIRE( dispatcher.unregisterTimer(83) == false );
    }

    SECTION("it unregisters a registered timer")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        qtjs::EventDispatcherLibUvPrivate dispatcher(api);

        dispatcher.registerTimer(83, 30, Qt::CoarseTimer, nullptr);
        REQUIRE( dispatcher.unregisterTimer(83) == true );
    }
}





namespace {

PollMocker::PollMocker(MockedLibuvApi *api) : checkStart(false), checkStop(false), api(api)
{
}

void PollMocker::mockInit(int fd)
{
    MOCK_EXPECT( api->uv_poll_init ).once()
            .with( mock::equal(uv_default_loop()), mock::retrieve(registeredHandle), mock::equal(fd) )
            .returns(0);
}

void PollMocker::mockStart(int type)
{
    MOCK_EXPECT( api->uv_poll_start ).once()
            .with( mock::retrieve(startedHandle), mock::equal(type), mock::equal(&qtjs::uv_socket_watcher) )
            .returns(0);
    checkStart = true;
}

void PollMocker::mockInitAndStart(int fd, int type)
{
    mockInit(fd);
    mockStart(type);
}

void PollMocker::mockStop()
{
    MOCK_EXPECT( api->uv_poll_stop ).once()
            .with( mock::retrieve(stoppedHandle) )
            .returns(0);
    checkStop = true;
}

void PollMocker::checkHandles()
{
    REQUIRE( registeredHandle );
    if (checkStart) {
        REQUIRE( registeredHandle == startedHandle );
    }
    if (checkStop) {
        REQUIRE( registeredHandle == stoppedHandle );
    }
}

void PollMocker::verifyAndReset()
{
    MOCK_VERIFY(api->uv_poll_init);
    MOCK_RESET(api->uv_poll_init);
    if (checkStart) {
        MOCK_VERIFY(api->uv_poll_start);
        MOCK_RESET(api->uv_poll_start);
        checkStart = false;
    }
    if (checkStop) {
        MOCK_VERIFY(api->uv_poll_stop);
        MOCK_RESET(api->uv_poll_stop);
        checkStop = false;
    }
}
}
