#include "scannergui.h"
#include "scannernet.h"

ScannerGui::ScannerGui(QWidget *parent) :
    QWidget(parent)
{
    setupUi(this);
}

void ScannerGui::on_startButton_clicked()
{
    QStringList portsToScan = portEntry->text;
}
