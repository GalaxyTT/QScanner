#ifndef SCANNER_H
#define SCANNER_H

#include "ui_scanner.h"

#include <QMainWindow>
#include "scannernet.h"

class scanner : public QMainWindow, private Ui::scanner
{
    Q_OBJECT

public:
    scanner(QWidget *parent = nullptr);
    ~scanner();
private:
    QString hostname;
    QStringList portsSplitted;
    QVector<int> ports;
    QVector<bool> results;
private slots:
    void on_scanButton_clicked();
};
#endif // SCANNER_H
