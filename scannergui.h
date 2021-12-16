#ifndef SCANNERGUI_H
#define SCANNERGUI_H

#include "scannernet.h"
#include "ui_scannergui.h"

class ScannerGui : public QWidget, private Ui::ScannerGui
{
    Q_OBJECT

public:
    explicit ScannerGui(QWidget *parent = nullptr);
private slots:
    QVector<int> ports;
    void on_startButton_clicked();
};

#endif // SCANNERGUI_H
