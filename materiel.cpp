#include "materiel.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include <QPdfWriter>
#include <QPainter>

Materiel::Materiel()
{
    code=0; prix=0; type="";
}

Materiel::Materiel(int code,int prix,QString type)
{
    this->code=code;
    this->prix=prix;
    this->type=type;
}


int Materiel::getcode(){return code;}
int Materiel::getprix(){return prix;}
QString Materiel::gettype(){return type;}

void Materiel::setcode(int code){this -> code=code;}
void Materiel::setprix(int prix){this-> prix=prix;}
void Materiel::settype(QString type){this ->type=type;}

bool Materiel::ajouter()
{
    QSqlQuery query;
    QString code_string=QString::number(code);
         query.prepare("INSERT INTO materiel (code, prix, type) "
                       "VALUES (:id, :forename, :surname)");
         query.bindValue(0, code_string);
         query.bindValue(1, prix);
         query.bindValue(2, type);
       return query.exec();
}
bool Materiel::supprimer(int code)
{
    QSqlQuery query;

         query.prepare("Delete from materiel where code=:code");

         query.bindValue(0,code);

       return query.exec();

}
QSqlQueryModel* Materiel::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();

          model->setQuery("SELECT* FROM materiel");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("code"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("prix"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));



    return model;
}
bool Materiel::modifier()
{
    QSqlQuery query;
    QString code_string=QString::number(code);
         query.prepare("UPDATE materiel SET code=:code,prix=:prix,type=:type WHERE code=:code");

         query.bindValue(":code", code_string);
         query.bindValue(":prix", prix);
         query.bindValue(":type", type);
       return query.exec();

}
QSqlQueryModel* Materiel::RechercheMateriel(QString recherche)
 {
     QSqlQueryModel * model= new QSqlQueryModel();
     model->setQuery("SELECT * FROM materiel WHERE code LIKE '"+recherche+"%' OR prix LIKE '"+recherche+"%' ");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("code"));
     model->setHeaderData(1, Qt::Horizontal, QObject::tr("prix"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("type"));

return model;
}
QSqlQueryModel * Materiel::triermaterielparcode()
{

    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM materiel ORDER BY code ASC ");
           q->exec();
           model->setQuery(*q);
           return model;
}

QSqlQueryModel * Materiel::triermaterielparprix()
{

    QSqlQuery * q = new  QSqlQuery ();
           QSqlQueryModel * model = new  QSqlQueryModel ();
           q->prepare("SELECT * FROM materiel ORDER BY prix ASC");
           q->exec();
           model->setQuery(*q);
           return model;
}


void Materiel::telechargerPDF()
{


                     QPdfWriter pdf("C:/Users/scare/Desktop/PDF.pdf");

                     QPainter painter(&pdf);
                    int i = 4000;
                         painter.setPen(Qt::blue);
                         painter.setFont(QFont("Arial", 30));
                         painter.drawText(1100,1200,"LISTES DE MATERIELS");
                         painter.setPen(Qt::black);
                         painter.setFont(QFont("Arial",14));

                         painter.drawRect(0,3000,9600,500);
                         painter.setFont(QFont("Arial",11));
                         painter.drawText(200,3300,"code");
                         painter.drawText(1300,3300,"prix");
                         painter.drawText(2700,3300,"type");


                         QSqlQuery query;
                         query.prepare("select * from materiel");
                         query.exec();
                         while (query.next())
                         {
                             painter.drawText(200,i,query.value(0).toString());
                             painter.drawText(1300,i,query.value(1).toString());
                             painter.drawText(2700,i,query.value(2).toString());




                            i = i + 500;
                         }}
