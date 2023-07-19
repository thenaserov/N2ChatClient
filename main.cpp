#include <QCoreApplication>
#include "n2client.h"
#include <iostream>
#include <string>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    N2Client client;
    client.connect();

    // Client sends a name to the server
    std::string name;
    std::cout << "Enter your name to join the chat room: ";
    std::cin >> name;
    client.join(QString(name.c_str()));

    return a.exec();
}
