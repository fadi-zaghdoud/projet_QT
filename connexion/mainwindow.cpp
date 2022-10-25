#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "voyageur.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_ajouter_clicked()
{
    int num=ui->le_num->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();

    voyageur V(num,nom,prenom);
}
