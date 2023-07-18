#ifndef N2CLIENT_H
#define N2CLIENT_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>

class N2Client : public QObject
{
    Q_OBJECT
public:
    explicit N2Client(QObject *parent = nullptr);
    void connect();

private:
    QTcpSocket *socket;
signals:

};

#endif // N2CLIENT_H
