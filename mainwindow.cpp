#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "reclamation.h"
#include "pdf.h"

#include<QPrinter>

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    refresh();
    ui->pushButton->hide();
 /*   int ret=A.connect_arduino(); // lancer la connexion à arduino
            switch(ret){
            case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
                break;
            case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
               break;
            case(-1):qDebug() << "arduino is not available";
            }*/
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_10_clicked()
{
    QString email = ui->lineEdit_4->text();
    QString subject = ui->lineEdit_3->text();
    QString content = "wowo man";
    QString date = "2022-11-01";
    //int id,QString content,QString date_rec,QString email,QString subject
    Reclamation rec(0,"content",date,email,subject);

    if(rec.ajouter()){
        refresh();



    }
    else{
        refresh();
    }
}
void MainWindow::refresh(){
    Reclamation r;
        ui->tableView_3->setModel(r.afficher());
        ui->comboBox_3->setModel(r.afficher_id());



}
void MainWindow::on_pushButton_11_clicked()
{
    QString id = ui->comboBox_3->currentText();
  Reclamation rec;
    Reclamation r = rec.getReclamation(id);
    qDebug()<<r.getSubject();
    ui->lineEdit_4->setText(r.getEmail());
       ui->lineEdit_3->setText(r.getSubject());
       ui->pushButton->show();
       ui->pushButton_11->hide();
       ui->comboBox_3->hide();
       ui->pushButton_12->hide();




}

void MainWindow::on_pushButton_12_clicked()
{
    Reclamation r ;
    if(r.supprimer(ui->comboBox_3->currentText())){

        refresh();
    }
    else{
        refresh();
    }

}


void MainWindow::on_pushButton_4_clicked()

{
    refresh();
}
/*{
    Reclamation r ;
    if(r.supprimer(ui->comboBox_3->currentText())){

        refresh();
    }
    else{
        refresh();
    }

}*/

void MainWindow::on_pushButton_clicked()
{
    QString id = ui->comboBox_3->currentText();
    QString email = ui->lineEdit_4->text();
    QString subject = ui->lineEdit_3->text();
    QString content =ui->lineEdit_4->text();;
    Reclamation r(0,content,"",email,subject);



    r.update(id,r);
    refresh();
    ui->pushButton->hide();
    ui->pushButton_11->show();
    ui->comboBox_3->show();
    ui->pushButton_12->show();

}

void MainWindow::on_pushButton_2_clicked()
{
    refresh();
}

void MainWindow::on_pushButton_3_clicked()
{
    //pdf : vous trouver le fichier dans le dossier build

            QString strStream;
                        QTextStream out(&strStream);
                        const int rowCount = ui->tableView_3->model()->rowCount();
                        const int columnCount =ui->tableView_3->model()->columnCount();


                        out <<  "<html>\n"
                                "<head>\n"
                                "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                                <<  QString("<title>%1</title>\n").arg("voyageur")
                                <<  "</head>\n"
                                "<body bgcolor=#55ffff link=#5000A0>\n"
                                    "<h1>Liste des voyageurs</h1>"

                                    "<table border=1 cellspacing=0 cellpadding=2>\n";

                        // headers
                            out << "<thead><tr bgcolor=#f0f0f0>";
                            for (int column = 0; column < columnCount; column++)
                                if (!ui->tableView_3->isColumnHidden(column))
                                    out << QString("<th>%1</th>").arg(ui->tableView_3->model()->headerData(column, Qt::Horizontal).toString());
                            out << "</tr></thead>\n";
                            // data table
                               for (int row = 0; row < rowCount; row++) {
                                   out << "<tr>";
                                   for (int column = 0; column < columnCount; column++) {
                                       if (!ui->tableView_3->isColumnHidden(column)) {
                                           QString data = ui->tableView_3->model()->data(ui->tableView_3->model()->index(row, column)).toString().simplified();
                                           out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                       }
                                   }
                                   out << "</tr>\n";
                               }
                               out <<  "</table>\n"
                                   "</body>\n"
                                   "</html>\n";



                QTextDocument *document = new QTextDocument();
                document->setHtml(strStream);


                //QTextDocument document;
                //document.setHtml(html);
                QPrinter printer(QPrinter::PrinterResolution);
                printer.setOutputFormat(QPrinter::PdfFormat);
                printer.setOutputFileName("mypdffile1.pdf");
                document->print(&printer);
}




void MainWindow::on_trienom_clicked()
{ Reclamation r;
    ui->tableView_3->setModel(r.triid());
}

void MainWindow::on_recherche_clicked()
{ Reclamation r;
            ui->tableView_3->setModel(r.recherche_rec(ui->recherche_2->text()));

}

void MainWindow::on_frame_2_customContextMenuRequested(const QPoint &pos)
{

}

void MainWindow::on_comboBox_3_activated(const QString &arg1)
{

}
