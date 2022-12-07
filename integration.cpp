#include "integration.h"
#include "ui_integration.h"
#include "employe.h"
#include <QApplication>
#include <QMessageBox>
#include <QTableView>
#include <qmessagebox.h>
#include <QIntValidator>
#include <QSqlQuery>
#include <QScrollBar>
#include <qfiledialog.h>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include <QTextDocument>
#include <QTextStream>
#include <QDate>
#include <QComboBox>
#include <QPrinter>
#include <QtCharts>
#include <QChartView>
#include <QBarSet>
#include <QBarSeries>

#include <QtSvg/QSvgRenderer>
#include <QtSvg/QSvgGenerator>


#include "qrcode.h"
#include "qrwidget.h"
#include "qrcodegenratorworker.h"
#include <fstream>
#include <QString>

integration::integration(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::integration)
{
    ui->setupUi(this);

     ui->le_id->setValidator(new QIntValidator(0, 9999999, this));
     ui->le_tel->setValidator(new QIntValidator(0, 99999999, this));
     ui->le_salaire->setValidator(new QIntValidator(0, 99999999, this));
     ui->le_id_3->setValidator(new QIntValidator(0, 9999999, this));
     ui->le_tel_3->setValidator(new QIntValidator(0, 99999999, this));
     ui->le_salaire_3->setValidator(new QIntValidator(0, 99999999, this));

    ui->tab_employe->setModel(Etmp.afficher());

{
    ui->le_post->addItem("Agent de piste");
    ui->le_post->addItem("Ag entretien avion");
    ui->le_post->addItem("Ag bagages");
    ui->le_post->addItem("Agent accueil");
    ui->le_post->addItem("prestations alimentaires");
    ui->le_post->addItem("Service de netoyage");
}
    {
        ui->le_post_3->addItem("Agent de piste");
        ui->le_post_3->addItem("Ag entretien avion");
        ui->le_post_3->addItem("Ag bagages");
        ui->le_post_3->addItem("Agent accueil");
        ui->le_post_3->addItem("prestations alimentaires");
        ui->le_post_3->addItem("Service de netoyage");
    }

}

integration::~integration()
{
    delete ui;
}

void integration::on_pb_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    QString post=ui->le_post->currentText();
    QString email=ui->le_email->text();
    QString password=ui->le_password->text();
    int salaire=ui->le_salaire->text().toInt();
    int tel=ui->le_tel->text().toInt();

    employe E(id,nom,prenom,post,email,password,salaire,tel);
    bool test=E.ajouter();
    if(test)
   {
        foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                                       le->clear();}
                                  QFile file("C:/Users/pc/Desktop/Nouveau dossier/historique.txt");
                                  if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                                      return;
                                  QTextStream cout(&file);
                                  QString d_info = QDateTime::currentDateTime().toString();
                                  QString message2=" + "+d_info+" Une employe a été ajouté sous le nom de mr/mme : "+nom+" " ""+prenom+"\n";
                                  cout << message2;
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

void integration::on_pb_supprimer_clicked()
{
   int id =ui->le_idS->text().toInt();
   bool test=Etmp.supprimer(id);
   if(test)
  {
       foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                            le->clear();}
                       QFile file("C:/Users/pc/Desktop/Nouveau dossier/historique.txt");
                       if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                           return;
                       QTextStream cout(&file);//variable de pointeur aal fichier
                       QString d_info = QDateTime::currentDateTime().toString();// trajaalek el date de systeme
                       QString message2=" - "+d_info+" Une réservation a été supprimé sous la ID : "+id+"\n";
                       cout << message2;
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


void integration::on_pb_modifier_clicked()
{
    int id = ui->le_id_3->text().toInt();
        QString nom= ui->le_nom_3->text();
         QString prenom= ui->le_prenom_3->text();
         QString post = ui->le_post_3->currentText();
         QString email=ui->le_email_3->text();
         QString password=ui->le_password_3->text();
         int salaire=ui->le_salaire_3->text().toInt();
         int tel=ui->le_tel_3->text().toInt();

        employe Etmp(id,nom,prenom,post,email,password,salaire,tel);
        bool test=Etmp.modifier(id);
        if(test)
        {
            foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                                 le->clear();}
                            QFile file("C:/Users/pc/Desktop/Nouveau dossier/historique.txt");
                            if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                                return;
                            QTextStream cout(&file);
                            QString d_info = QDateTime::currentDateTime().toString();
                            QString message2=" ~ "+d_info+" Une employe a été modifié sous le nom de mr/mme : "+nom+" " ""+prenom+"\n";
                            cout << message2;

            ui->tab_employe->setModel(Etmp.afficher());//refresh

                   QMessageBox::information(nullptr, QObject::tr("effectué"),
                        QObject::tr(" Modifié.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
                   ui->le_id_3->clear();
                   ui->le_nom_3->clear();
                   ui->le_prenom_3->clear();
                   ui->le_post_3->clear();
                   ui->le_email_3->clear();
                   ui->le_password_3->clear();
                   ui->le_salaire_3->clear();
                   ui->le_tel_3->clear();

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
            ui->le_email_3->clear();
            ui->le_password_3->clear();
            ui->le_salaire_3->clear();
            ui->le_tel_3->clear();


        }

}

void integration::on_pb_rechercher_clicked()
{

    employe Etmp;
    ui->tab_employe->setModel(Etmp.recherche_employe(ui->recherche->text()));
}

void integration::on_pb_excel_clicked()
{
    employe Etmp;
               QSqlQueryModel * model=new QSqlQueryModel();
               model=Etmp.Find_employe();
               QString textData= "id                       nom                         prenom                     post                       email                       password                         salaire                     tel \n";
               int rows=model->rowCount();
               int columns=model->columnCount();
               for (int i = 0; i < rows; i++)
               {
                   for (int j = 0; j < columns; j++)
                   {
                       textData += model->data(model->index(i,j)).toString();
                       textData +=" ; ";
                   }
                   textData += "\n";
               }
               QString fileName = QFileDialog::getSaveFileName(this, "Export Excel", QString(), "*.csv");
               if (!fileName.isEmpty())
                   if (QFileInfo(fileName).suffix().isEmpty())
                       fileName.append(".csv");
               QFile csvfile(fileName);
               if(csvfile.open(QIODevice::WriteOnly|QIODevice::Truncate))
               {
                   QTextStream out(&csvfile);
                   out<<textData;
               }
               csvfile.close();
}





void integration::on_id_clicked()
{
    ui->tab_employe->setModel(Etmp.triID());
}

void integration::on_nom_clicked()
{
    ui->tab_employe->setModel(Etmp.triNOM());

}


void integration::on_pushButton_clicked()
{
    QPdfWriter pdf("C:/Users/pc/Desktop/pdf/Liste_Employe.pdf");

       QPainter painter(&pdf);
       int i = 4100;
       const QImage image(":/Resources/client_img/logo.png");
                   const QPoint imageCoordinates(155,0);
                   int width1 = 1600;
                   int height1 = 1600;
                   QImage img=image.scaled(width1,height1);
                   painter.drawImage(imageCoordinates, img );


              QColor dateColor(0x4a5bcf);
              painter.setPen(dateColor);

              painter.setFont(QFont("Montserrat SemiBold", 11));
              QDate cd = QDate::currentDate();
              painter.drawText(8400,250,cd.toString("Tunis"));
              painter.drawText(8100,500,cd.toString("dd/MM/yyyy"));

              QColor titleColor(0x341763);
              painter.setPen(titleColor);
              painter.setFont(QFont("Montserrat SemiBold", 25));

              painter.drawText(3000,2700,"Liste des Employes");

              painter.setPen(Qt::black);
              painter.setFont(QFont("Time New Roman", 15));
              painter.drawRect(100,3300,9400,500);

              painter.setFont(QFont("Montserrat SemiBold", 10));

              painter.drawText(500,3600,"Id");
              painter.drawText(2000,3600,"Nom");
              painter.drawText(3300,3600,"prenom");
              painter.drawText(4500,3600,"post");
              painter.drawText(7500,3600,"email");
              painter.setFont(QFont("tel", 10));
              painter.drawRect(100,3300,9400,9000);

              QSqlQuery query;
              query.prepare("select * from employe");
              query.exec();
              int y=4300;
              while (query.next())
              {
                  painter.drawLine(100,y,9490,y);
                  y+=500;
                  painter.drawText(500,i,query.value(0).toString());
                  painter.drawText(2000,i,query.value(1).toString());
                  painter.drawText(3300,i,query.value(2).toString());
                  painter.drawText(4500,i,query.value(3).toString());
                  painter.drawText(7500,i,query.value(4).toString());

                 i = i + 500;
              }
              QMessageBox::information(this, QObject::tr("PDF Enregistré!"),
              QObject::tr("PDF Enregistré!.\n" "Click Cancel to exit."), QMessageBox::Cancel);

}


void integration::on_pb_stat_clicked()
{
    employe etmp;
        QBarSet *set0 = new QBarSet("posts des employées ");

        *set0 << etmp.statistiquesemployes("Agent de piste") << etmp.statistiquesemployes("Ag entretien avion") << etmp.statistiquesemployes("Ag bagages") << etmp.statistiquesemployes("Agent accueil") << etmp.statistiquesemployes("prestations alimentaires") << etmp.statistiquesemployes("Service de netoyage");


        QColor color(0x6568F3);
        set0->setColor(color);

        QBarSeries *series = new QBarSeries();
        series->append(set0);




        QChart *chart = new QChart();
        chart->addSeries(series);
        chart->setTitle("");
        chart->setAnimationOptions(QChart::SeriesAnimations);
        chart->setBackgroundVisible(false);

        QColor bgColor(0xF4DCD3);
                       chart->setBackgroundBrush(QBrush(QColor(bgColor)));

                       chart->setBackgroundVisible(true);

        QStringList categories;
        categories << "Agent de piste" << "Ag entretien avion" << "Ag bagages" << "Agent accueil" << "prestations alimentaires" << "Service de netoyage";
        QBarCategoryAxis *axis = new QBarCategoryAxis();
        axis->append(categories);
        chart->createDefaultAxes();
        chart->setAxisX(axis, series);

        QChartView *chartView = new QChartView(chart);

        chartView->setMinimumWidth(500);
        chartView->setMinimumHeight(300);
        chartView->setParent(ui->stat);
        chart->legend()->setAlignment(Qt::AlignBottom);
        chartView->show();

}



void integration::on_qr_clicked()
{
    if(ui->tab_employe->currentIndex().row()==-1)
                                       QMessageBox::information(nullptr, QObject::tr("Suppression"),
                                                                QObject::tr("Veuillez Choisir un employe du Tableau.\n"
                                                                            "Click Ok to exit."), QMessageBox::Ok);
                                   else
                                   {
                                        int  id=ui->tab_employe->model()->data(ui->tab_employe->model()->index(ui->tab_employe->currentIndex().row(),0)).toInt();

                                        const qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(std::to_string(id).c_str(), qrcodegen::QrCode::Ecc::LOW);

                                        std::ofstream myfile;
                                        myfile.open ("qrcode.svg") ;
                                           myfile << qr.toSvgString(2);
                                           myfile.close();
                                           QSvgRenderer svgRenderer(QString("qrcode.svg"));
                                           QPixmap pix( QSize(90, 90));
                                           QPainter pixPainter( &pix );
                                           svgRenderer.render(&pixPainter);
                                        ui->qrcode->setPixmap(pix);
}
}
void integration::readfile(){
    QString filename="C:/Users/pc/Desktop/Nouveau dossier/historique.txt";
    QFile file(filename);
    if(!file.exists()){
        qDebug() << "fichier not existed ! "<<filename;
    }else{
        qDebug() << filename<<" ok ...";
    }
    QString line;
    ui->textHisto->clear();
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){
            line = stream.readLine();
            ui->textHisto->setText(ui->textHisto->toPlainText()+line+"\n");
        }
    }
    file.close();
}
void integration::on_tabWidget_currentChanged(int index)
{
    readfile();
}

