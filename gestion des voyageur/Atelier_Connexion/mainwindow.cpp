#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "gvoyageur.h"
#include <QMessageBox>
#include <QIntValidator>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_num->setValidator(new QIntValidator(0, 9999999, this));
   ui->tab_voyageur->setModel(voy.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int num=ui->le_num->text().toInt();
        QString nom=ui->le_nom->text();
        QString prenom=ui->le_prenom->text();
        QString dest=ui->le_dest->text();
        GVoyageur voy(num,nom,prenom,dest);
        bool test=voy.ajouter();
        if(test)
       {
            ui->tab_voyageur->setModel(voy.afficher());

          QMessageBox::information(nullptr, QObject::tr("ok"),
          QObject::tr("ajout effectuÃ©.\n"
                      "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tab_voyageur->setModel(voy.afficher());

       }
        else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
         QObject::tr("ajout non effectuÃ©.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pushButton_2_clicked()
{
    int num =ui->le_numS->text().toInt();
       bool test=voy.supprimer(num);
       if(test)
      {
           ui->tab_voyageur->setModel(voy.afficher());

         QMessageBox::information(nullptr, QObject::tr("ok"),
         QObject::tr("suppression effectuÃ©.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
      }
       else
         QMessageBox::critical(nullptr, QObject::tr("not ok"),
         QObject::tr("suppression non effectuÃ©.\n"
                     "Click Cancel to exit."), QMessageBox::Cancel);
}

void MainWindow::on_pushButton_3_clicked()
{

    int num = ui->le_num_2->text().toInt();
        QString nom= ui->le_nom_2->text();
         QString prenom= ui->le_prenom_2->text();
         QString dest = ui->le_dest_2->text();

        GVoyageur voy(num,nom,prenom,dest);
        bool test=voy.modifier(num);
        if(test)
        {

            ui->tab_voyageur->setModel(voy.afficher());//refresh

                   QMessageBox::information(nullptr, QObject::tr("effectuÃ©"),
                        QObject::tr(" ModifiÃ©.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
                   ui->le_num_2->clear();
                   ui->le_nom_2->clear();
                   ui->le_prenom_2->clear();
                   ui->le_dest_2->clear();
       }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("non effectuÃ©"),
                        QObject::tr("non modifiÃ© !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
            ui->le_num_2->clear();
            ui->le_nom_2->clear();
            ui->le_prenom_2->clear();
            ui->le_dest_2->clear();



        }

}
