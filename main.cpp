#include "mainwindow.h"

#include <QApplication>
#include "connection.h"
#include<QMessageBox>
#include<unistd.h>
#include "reclamation.h"
#include<QDebug>
#include "service.h"
//#include "arduino.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    Connection c;
    bool test=c.createconnect();
    if(test){
        w.show();

    }






    return a.exec();
}
