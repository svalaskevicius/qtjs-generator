
#include <catch.hpp>
#include <turtle/mock.hpp>

#include "../src/runner/eventdispatcherlibuv_p.h"

#include <QSocketNotifier>


MOCK_BASE_CLASS( MockedLibuvApi, qtjs::LibuvApi ) {
    MOCK_METHOD(uv_poll_init, 3)
    MOCK_METHOD(uv_poll_start, 3)
    MOCK_METHOD(uv_poll_stop, 1)

    MOCK_METHOD(uv_timer_init, 2)
    MOCK_METHOD(uv_timer_start, 4)
    MOCK_METHOD(uv_timer_stop, 1)
};

namespace {

struct PollMocker {
    uv_poll_t *registeredHandle, *startedHandle, *stoppedHandle;
    bool checkStart, checkStop;
    MockedLibuvApi *api;

    PollMocker(MockedLibuvApi *api);
    void mockInit(int fd);
    void mockStart(int type);
    void mockInitAndExecute(int fd, int type);
    void mockImplicitStop();
    void mockStop();
    void checkHandles();
    void verifyAndReset();
};

struct TimerMocker {
    uv_timer_t *registeredHandle, *startedHandle, *stoppedHandle;
    bool checkStart, checkStop;
    MockedLibuvApi *api;

    TimerMocker(MockedLibuvApi *api);
    void mockInit();
    void mockStart(uint64_t timeout);
    void mockImplicitStop();
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
        pollMocker.mockInitAndExecute(19, UV_READABLE);

        qtjs::EventDispatcherLibUvSocketNotifier dispatcher(api);
        dispatcher.registerSocketNotifier(19, QSocketNotifier::Read, []{});

        pollMocker.checkHandles();
    }

    SECTION("registerSocketNotifier initialises libuv handle for the given write fd")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndExecute(20, UV_WRITABLE);

        qtjs::EventDispatcherLibUvSocketNotifier dispatcher(api);
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Write, []{});

        pollMocker.checkHandles();
    }

    SECTION("unregisterSocketNotifier stops uv poller for a registered handle")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndExecute(20, UV_WRITABLE);
        pollMocker.mockStop();

        qtjs::EventDispatcherLibUvSocketNotifier dispatcher(api);
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Write, []{});
        dispatcher.unregisterSocketNotifier(20, QSocketNotifier::Write);

        pollMocker.checkHandles();
    }

    SECTION("it implicitly stops uv poller for a registered handle on destruction")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndExecute(20, UV_WRITABLE);
        pollMocker.mockStop();

        qtjs::EventDispatcherLibUvSocketNotifier dispatcher(api);
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Write, []{});
    }

    SECTION("unregisterSocketNotifier does not call libuv if the socket was not registered")
    {
        MockedLibuvApi *api = new MockedLibuvApi();

        MOCK_EXPECT( api->uv_poll_stop ).never();

        qtjs::EventDispatcherLibUvSocketNotifier dispatcher(api);
        dispatcher.unregisterSocketNotifier(20, QSocketNotifier::Write);
    }

    SECTION("unregisterSocketNotifier stops uv poller just once for a registered handle")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        PollMocker pollMocker(api);
        pollMocker.mockInitAndExecute(20, UV_WRITABLE);
        pollMocker.mockStop();

        qtjs::EventDispatcherLibUvSocketNotifier dispatcher(api);
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
        pollMocker.mockInitAndExecute(19, UV_READABLE);

        qtjs::EventDispatcherLibUvSocketNotifier dispatcher(api);
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
        pollMocker.mockInitAndExecute(19, UV_WRITABLE);

        qtjs::EventDispatcherLibUvSocketNotifier dispatcher(api);
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
        pollMocker.mockInitAndExecute(19, UV_READABLE);
        pollMocker.mockStart(UV_WRITABLE);

        qtjs::EventDispatcherLibUvSocketNotifier dispatcher(api);
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
        pollMocker.mockInitAndExecute(20, UV_WRITABLE);
        pollMocker.mockStart(UV_READABLE);

        qtjs::EventDispatcherLibUvSocketNotifier dispatcher(api);
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Write, []{});
        dispatcher.registerSocketNotifier(20, QSocketNotifier::Read, []{});

        pollMocker.checkHandles();
        pollMocker.verifyAndReset();

        pollMocker.mockStop();
        pollMocker.mockStart(UV_READABLE);

        dispatcher.unregisterSocketNotifier(20, QSocketNotifier::Write);

        pollMocker.checkHandles();
        pollMocker.verifyAndReset();
    }
}

TEST_CASE("EventDispatcherLibUv supports QTimer registration")
{
    SECTION("it does not unregister a non-existing timer")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        qtjs::EventDispatcherLibUvTimerNotifier dispatcher(api);

        REQUIRE( dispatcher.unregisterTimer(83) == false );
    }

    SECTION("it unregisters a registered timer once")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        qtjs::EventDispatcherLibUvTimerNotifier dispatcher(api);

        TimerMocker mocker(api);
        mocker.mockInit();
        mocker.mockStart(30);
        mocker.mockStop();

        dispatcher.registerTimer(83, 30, []{});
        REQUIRE( dispatcher.unregisterTimer(83) == true );
        REQUIRE( dispatcher.unregisterTimer(83) == false );

        mocker.checkHandles();
    }

    SECTION("it unregisters a registered timer on destruction")
    {
        MockedLibuvApi *api = new MockedLibuvApi();
        qtjs::EventDispatcherLibUvTimerNotifier dispatcher(api);

        TimerMocker mocker(api);
        mocker.mockInit();
        mocker.mockStart(30);
        mocker.mockStop();

        dispatcher.registerTimer(83, 30, []{});
    }

    SECTION("timer watcher invokes timeout callback")
    {
        int callbackInvoked = 0;
        qtjs::TimerData data = {
            [&callbackInvoked]{ callbackInvoked++; }
        };

        uv_timer_t request;
        request.data = &data;

        qtjs::uv_timer_watcher(&request, 0);

        REQUIRE( callbackInvoked == 1 );
    }

    SECTION("registerTimer initialises timeout callback")
    {
        int callbackInvoked = 0;
        MockedLibuvApi *api = new MockedLibuvApi();
        TimerMocker mocker(api);
        mocker.mockInit();
        mocker.mockStart(30);

        qtjs::EventDispatcherLibUvTimerNotifier dispatcher(api);
        dispatcher.registerTimer(83, 30, [&callbackInvoked]{ callbackInvoked++; });

        mocker.checkHandles();
        REQUIRE( mocker.startedHandle->data );
        ((qtjs::TimerData *)mocker.startedHandle->data)->timeout();
        REQUIRE( callbackInvoked == 1 );
    }

}

TEST_CASE("EventDispatcherLibUv tracks timer execution") {
    SECTION("TimerWatcher returns empty list when there are no timers registered") {
        qtjs::EventDispatcherLibUvTimerWatcher watcher;
        REQUIRE( watcher.getTimerInfo(nullptr).empty() );
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

void PollMocker::mockInitAndExecute(int fd, int type)
{
    mockInit(fd);
    mockStart(type);
    mockImplicitStop();
}

void PollMocker::mockStop()
{
    MOCK_RESET(api->uv_poll_stop);
    MOCK_EXPECT( api->uv_poll_stop ).once()
            .with( mock::retrieve(stoppedHandle) )
            .returns(0);
    checkStop = true;
}

void PollMocker::mockImplicitStop()
{
    MOCK_EXPECT( api->uv_poll_stop ).returns(0);
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
        mockImplicitStop();
    }
}



TimerMocker::TimerMocker(MockedLibuvApi *api) : checkStart(false), checkStop(false), api(api)
{
}
void TimerMocker::mockInit()
{
    MOCK_EXPECT( api->uv_timer_init ).once()
        .with( mock::equal(uv_default_loop()), mock::retrieve(registeredHandle) )
        .returns(0);
}
void TimerMocker::mockStart(uint64_t timeout)
{
    MOCK_EXPECT( api->uv_timer_start ).once()
        .with( mock::retrieve(startedHandle),  mock::equal(&qtjs::uv_timer_watcher), mock::equal(timeout), mock::equal(timeout) )
        .returns(0);
    checkStart = true;
    mockImplicitStop();
}

void TimerMocker::mockImplicitStop()
{
    MOCK_EXPECT( api->uv_timer_stop ).returns(0);
}

void TimerMocker::mockStop()
{
    MOCK_RESET(api->uv_timer_stop);
    MOCK_EXPECT( api->uv_timer_stop ).once()
        .with( mock::retrieve(stoppedHandle))
        .returns(0);
    checkStop = true;
}
void TimerMocker::checkHandles()
{
    REQUIRE( registeredHandle );
    if (checkStart) {
        REQUIRE( registeredHandle == startedHandle );
    }
    if (checkStop) {
        REQUIRE( registeredHandle == stoppedHandle );
    }
}
void TimerMocker::verifyAndReset()
{
    MOCK_VERIFY(api->uv_timer_init);
    MOCK_RESET(api->uv_timer_init);
    if (checkStart) {
        MOCK_VERIFY(api->uv_timer_start);
        MOCK_RESET(api->uv_timer_start);
        checkStart = false;
    }
    if (checkStop) {
        MOCK_VERIFY(api->uv_timer_stop);
        MOCK_RESET(api->uv_timer_stop);
        checkStop = false;
        mockImplicitStop();
    }
}

}
