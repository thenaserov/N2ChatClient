#include "n2client.h"

N2Client::N2Client(QObject *parent) : QObject(parent)
{

}

N2Client::~N2Client()
{
    socket->close();
}

void N2Client::connect()
{
    socket = new QTcpSocket(this);
        socket->connectToHost("127.0.0.1", 60535);

        if(socket->waitForConnected(3000))
        {
            qDebug() << "Connected!";

            // send
//            socket->write("hello server\r\n\r\n\r\n\r\n");
//            socket->waitForBytesWritten(1000);
//            socket->waitForReadyRead(3000);
//            qDebug() << "Reading: " << socket->bytesAvailable();
//            qDebug() << socket->readAll();
        }
        else
        {
            qDebug() << "Not connected!";
        }
}

void N2Client::join(QString name)
{
    socket->write(name.toUtf8());
    socket->waitForBytesWritten(1000);
    socket->flush();
}

void N2Client::sendMessage(QString message)
{
    socket->write(message.toUtf8());
    socket->waitForBytesWritten(1000);
    socket->flush();
}
