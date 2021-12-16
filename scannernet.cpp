#include "scannernet.h"
#include <QCoreApplication>
#include <QAbstractSocket>
#include <QTcpSocket>

ScannerNet::ScannerNet()
{

}

QVector<bool> ScannerNet::scanPorts(QStringList ports, QString hostname)
{
    QTcpSocket* socket = new QTcpSocket();
    QVector<bool> results;

    for (QString port : ports)
    {
        socket->connectToHost( hostname, port.toInt());

        if (!socket->waitForConnected(1000))
        {
            results.push_back(false);
        } else
        {
            results.push_back(true);
            socket->disconnectFromHost();
        }
    }
    delete socket;
    return results;
}
