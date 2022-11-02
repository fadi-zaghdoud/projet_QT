#include "gvoyageur.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

GVoyageur::GVoyageur()
{
 num=0;
 nom=" ";
 prenom=" ";
 dest=" ";
}
GVoyageur::GVoyageur(int num,QString nom,QString prenom,QString dest)
{
this->num=num;
this->nom=nom;
this->prenom=prenom;
this->dest=dest;
}
int GVoyageur::getnum(){return num;}
QString GVoyageur::getnom(){return nom;}
QString GVoyageur::getprenom(){return prenom;}
QString GVoyageur::getdest(){return dest;}
void GVoyageur::setnum(int num){this->num=num;}
void GVoyageur::setnom(QString nom){this->nom=nom;}
void GVoyageur::setprenom(QString prenom){this->prenom=prenom;}
void GVoyageur::setdest(QString dest){this->dest=dest;}
bool GVoyageur::ajouter()
{
    QSqlQuery query;
    QString num_string= QString::number(num);
         query.prepare("INSERT INTO GVoyageur (num, nom, prenom, dest) "
                       "VALUES (:id, :forename, :surname, :destination)");
         query.bindValue(":id", num_string);
         query.bindValue(":forename", nom);
         query.bindValue(":surname", prenom);
         query.bindValue(":destination", dest);
         return query.exec();

}
bool GVoyageur::supprimer(int num)
{
    QSqlQuery query;
    QString res=QString::number(num);
    query.prepare("Delete from GVoyageur where NUM= :num");
    query.bindValue(":num",res);
    return query.exec();
}
QSqlQueryModel* GVoyageur::afficher()
{
   QSqlQueryModel* model=new QSqlQueryModel();

   model->setQuery("SELECT* FROM GVoyageur");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("num"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("dest"));
return model;

}
bool GVoyageur::modifier(int num)
{
    QSqlQuery query;

       QString res= QString::number(num);
       query.prepare("UPDATE GVoyageur SET num=:num,nom=:nom,prenom=:prenom ,dest=:dest WHERE num=:num");
       query.bindValue(":num", num);
       query.bindValue(":nom", nom);
       query.bindValue(":prenom", prenom);
       query.bindValue(":dest", dest);




          return    query.exec();
}


