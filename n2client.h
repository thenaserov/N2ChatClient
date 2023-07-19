#ifndef N2CLIENT_H
#define N2CLIENT_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include <QString>

class N2Client : public QObject
{
    Q_OBJECT
public:
    explicit N2Client(QObject *parent = nullptr);
    ~N2Client();
    void connect();
    void join(QString name);
    void sendMessage(QString message);
private:
    QTcpSocket *socket;
signals:

};

#endif // N2CLIENT_H
