
#include <catch.hpp>

#include <QTcpServer>
#include <QTcpSocket>
#include <QCoreApplication>

using namespace Catch;

TEST_CASE("libuv based event dispatcher") {
    SECTION("it dispatches QSocketNotifier events") {

        int argc = 0;
        char *argv[1] = {0};
        QCoreApplication app(argc, argv, 0);

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


        while (!processed) {
            app.processEvents();
        }

        REQUIRE_THAT( result.constData(), Equals("test") );
    }
}
