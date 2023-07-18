#include <QCoreApplication>
#include "n2client.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    N2Client client;
    client.connect();
    return a.exec();
}
