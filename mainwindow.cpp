#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gvol.h"
#include <QMessageBox>
#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_numv->setValidator(new QIntValidator(0, 9999999, this));
        ui->tab_vol->setModel(V.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int num=ui->le_numv->text().toInt();
        QString des=ui->le_destv->text();
        QString dated=ui->le_date_d->text();
        QString datea=ui->le_date_a->text();
        GVol V(num,des,dated,datea);
        bool test=V.ajouter();
        if(test)
       {
              ui->tab_vol->setModel(V.afficher());
          QMessageBox::information(nullptr, QObject::tr("ok"),
          QObject::tr("ajout effectué.\n"
                      "Click Cancel to exit."), QMessageBox::Cancel);

       }
        else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
         QObject::tr("ajout non effectué.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pushButton_11_clicked()
{
    int num =ui->s_numv->text().toInt();
       bool test=V.supprimer(num);
       if(test)
      {
             ui->tab_vol->setModel(V.afficher());
         QMessageBox::information(nullptr, QObject::tr("ok"),
         QObject::tr("suppression effectué.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
           ui->tab_vol->setModel(V.afficher());
      }
       else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
         QObject::tr("suppression non effectué.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);

}

void MainWindow::on_pushButton_2_clicked()
{
    int num = ui->m_numv->text().toInt();
            QString des= ui->m_des->text();
             QString dated= ui->m_date_d->text();
             QString datea = ui->m_date_a->text();

            GVol V(num,des,dated,datea);
            bool test=V.modifier(num);
            if(test)
            {
  ui->tab_vol->setModel(V.afficher());

                       QMessageBox::information(nullptr, QObject::tr("effectué"),
                            QObject::tr(" Modifié.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
                       ui->m_numv->clear();
                       ui->m_des->clear();
                       ui->m_date_d->clear();
                       ui->m_date_a->clear();
           }
            else
            {
                QMessageBox::critical(nullptr, QObject::tr("non effectué"),
                            QObject::tr("non modifié !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);
                ui->m_numv->clear();
                ui->m_des->clear();
                ui->m_date_d->clear();
                ui->m_date_a->clear();



            }

}
