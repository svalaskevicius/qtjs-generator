
#include <catch.hpp>

#include <QTcpServer>
#include <QTcpSocket>
#include <QCoreApplication>

#include <chrono>

#include "../src/runner/eventdispatcherlibuv.h"

namespace {

void launchServer(QTcpServer &server);
void launchClient(QTcpSocket &client, bool &processed, QByteArray &result, int port);
void processAppEvents(QCoreApplication &app, bool &stopFlag, int timeoutSeconds);

}

TEST_CASE("libuv based event dispatcher") {

    auto ev_dispatcher = new EventDispatcherLibUv();
    QCoreApplication::setEventDispatcher(ev_dispatcher);
    int argc = 0;
    char *argv[1] = {0};
    QCoreApplication app(argc, argv, 0);

    SECTION("it dispatches QSocketNotifier events") {

        QTcpServer server;
        bool processed = false;
        QTcpSocket client;
        QByteArray result;

        launchServer(server);
        launchClient(client, processed, result, server.serverPort());
        processAppEvents(app, processed, 1);

        REQUIRE_THAT( result.constData(), Equals("test") );
    }
}

namespace {

void launchServer(QTcpServer &server) {
    QObject::connect(&server, &QTcpServer::newConnection, [&server]{
        QTcpSocket *socket = server.nextPendingConnection();
        QObject::connect(socket, &QTcpSocket::readyRead, [socket]{
            int bytes = socket->bytesAvailable();

            REQUIRE( bytes == 4);

            auto data = socket->readAll();
            socket->write(data);
        });
    });
    REQUIRE( server.listen() );
}

void launchClient(QTcpSocket &client, bool &processed, QByteArray &result, int port) {
    QObject::connect(&client, &QTcpSocket::connected, [&client, &result, &processed]{
        QObject::connect(&client, &QTcpSocket::readyRead, [&client, &result, &processed]{
            result = client.readAll();
            processed = true;
        });

        client.write("test", 4);
        client.flush();
    });
    client.connectToHost(QHostAddress("127.0.0.1"), port);
}

void processAppEvents(QCoreApplication &app, bool &stopFlag, int timeoutSeconds) {
    using namespace std::chrono;
    steady_clock::time_point t1 = steady_clock::now();
    while (!stopFlag) {
        app.processEvents();
        steady_clock::time_point t2 = steady_clock::now();
        REQUIRE (duration_cast<seconds>(t2-t1).count() < timeoutSeconds);
    }
}

}
