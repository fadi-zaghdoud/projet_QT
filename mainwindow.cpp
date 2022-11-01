#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "employe.h"
#include <QMessageBox>
#include <QIntValidator>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     ui->le_id->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_employe->setModel(Etmp.afficher());

{
    ui->le_post->addItem("Agent de piste");
    ui->le_post->addItem("Agent d’entretien d’avion");
    ui->le_post->addItem("Agent des litiges bagages");
    ui->le_post->addItem("Agent d'accueil");
    ui->le_post->addItem("Employe de prestations alimentaires");
    ui->le_post->addItem("Service de netoyage");
}
    {
        ui->le_post_3->addItem("Agent de piste");
        ui->le_post_3->addItem("Agent d’entretien d’avion");
        ui->le_post_3->addItem("Agent des litiges bagages");
        ui->le_post_3->addItem("Agent d'accueil");
        ui->le_post_3->addItem("Employe de prestations alimentaires");
        ui->le_post_3->addItem("Service de netoyage");
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    QString post=ui->le_post->currentText();
    employe E(id,nom,prenom,post);
    bool test=E.ajouter();
    if(test)
   {
        ui->tab_employe->setModel(Etmp.afficher());
      QMessageBox::information(nullptr, QObject::tr("ok"),
      QObject::tr("ajout effectué.\n"
                  "Click Cancel to exit."), QMessageBox::Cancel);

   }
    else
     QMessageBox::critical(nullptr, QObject::tr("not ok"),
     QObject::tr("ajout non effectué.\n"
                 "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pb_supprimer_clicked()
{
   int id =ui->le_idS->text().toInt();
   bool test=Etmp.supprimer(id);
   if(test)
  {
       ui->tab_employe->setModel(Etmp.afficher());
     QMessageBox::information(nullptr, QObject::tr("ok"),
     QObject::tr("suppression effectué.\n"
                 "Click Cancel to exit."), QMessageBox::Cancel);
ui->tab_employe->setModel(Etmp.afficher());
  }
   else
     QMessageBox::critical(nullptr, QObject::tr("not ok"),
     QObject::tr("suppression non effectué.\n"
                 "Click Cancel to exit."), QMessageBox::Cancel);

}


void MainWindow::on_pb_modifier_clicked()
{
    int id = ui->le_id_3->text().toInt();
        QString nom= ui->le_nom_3->text();
         QString prenom= ui->le_prenom_3->text();
         QString post = ui->le_post_3->currentText();

        employe Etmp(id,nom,prenom,post);
        bool test=Etmp.modifier(id);
        if(test)
        {

            ui->tab_employe->setModel(Etmp.afficher());//refresh

                   QMessageBox::information(nullptr, QObject::tr("effectué"),
                        QObject::tr(" Modifié.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
                   ui->le_id_3->clear();
                   ui->le_nom_3->clear();
                   ui->le_prenom_3->clear();
                   ui->le_post_3->clear();
       }
        else
        {
            QMessageBox::critical(nullptr, QObject::tr("non effectué"),
                        QObject::tr("non modifié !.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
            ui->le_id_3->clear();
            ui->le_nom_3->clear();
            ui->le_prenom_3->clear();
            ui->le_post_3->clear();



        }

}
