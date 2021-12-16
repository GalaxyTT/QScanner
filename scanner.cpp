#include "scanner.h"

scanner::scanner(QWidget *parent)
    : QMainWindow(parent)
{
    setupUi(this);
}

scanner::~scanner()
{
}

void scanner::on_scanButton_clicked()
{
    hostname = hostnameEdit->text();
    QString ports = portsEdit->text();
    portsSplitted = ports.split(',');
    results = ScannerNet::scanPorts(portsSplitted, hostname);
    int tempCount = 0;
    for(bool singleResult : results)
    {
         if(singleResult == true){
             resultBox->append("Port " + portsSplitted[tempCount] + " erfolgreich verbunden!");
         }
         else{
             resultBox->append("Verbindung zu Port " + portsSplitted[tempCount] + " fehlgeschlagen!");
         }
         tempCount++;
    }
}

