
#include <igloo/igloo_alt.h>
//#include <CppSpec.h>

#include <QTcpServer>
#include <QTcpSocket>
#include <QCoreApplication>

using namespace std;
using namespace igloo;

Describe(event_dispatcher) {
    It(dispatches_QSocketNotifier_events) {

        int argc = 0;
        char *argv[1] = {0};
        QCoreApplication app(argc, argv, 0);

        QTcpServer server;
        QObject::connect(&server, &QTcpServer::newConnection, [&server]{
            QTcpSocket *socket = server.nextPendingConnection();
            QObject::connect(socket, &QTcpSocket::readyRead, [socket]{
                int bytes = socket->bytesAvailable();
                Assert::That( bytes , Is().EqualTo(4));
                auto data = socket->readAll();
                socket->write(data);
            });
        });
        Assert::That( server.listen() , Is().EqualTo(true));

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

        Assert::That( result.constData() , Is().EqualTo("test"));
    }
};
