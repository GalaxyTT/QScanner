#ifndef SCANNERNET_H
#define SCANNERNET_H

#include <QObject>

class ScannerNet : QObject
{
    Q_OBJECT
public:
    ScannerNet();
    explicit ScannerNet(QObject *parent = nullptr);
    static QVector<bool> scanPorts(QStringList ports, QString hostname);
};

#endif // SCANNERNET_H
