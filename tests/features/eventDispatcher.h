
#include <catch.hpp>

#include <QTcpServer>
#include <QTcpSocket>
#include <QCoreApplication>

#include <chrono>

#include "../src/runner/eventdispatcherlibuv.h"

TEST_CASE("libuv based event dispatcher") {

    auto ev_dispatcher = new EventDispatcherLibUv();
    QCoreApplication::setEventDispatcher(ev_dispatcher);
    int argc = 0;
    char *argv[1] = {0};
    QCoreApplication app(argc, argv, 0);

    SECTION("it dispatches QSocketNotifier events") {

        QTcpServer server;
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

        bool processed = false;

        QTcpSocket client;
        QByteArray result;
        QObject::connect(&client, &QTcpSocket::connected, [&client, &result, &processed]{
            QObject::connect(&client, &QTcpSocket::readyRead, [&client, &result, &processed]{
                result = client.readAll();
                processed = true;
            });

            client.write("test", 4);
            client.flush();
        });
        client.connectToHost(QHostAddress("127.0.0.1"), server.serverPort());


        using namespace std::chrono;
        steady_clock::time_point t1 = steady_clock::now();
        while (!processed) {
            app.processEvents();
            steady_clock::time_point t2 = steady_clock::now();
            REQUIRE (duration_cast<seconds>(t2-t1).count() < 1);
        }

        REQUIRE_THAT( result.constData(), Equals("test") );
    }
}
