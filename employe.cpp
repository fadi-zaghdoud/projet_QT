#include "employe.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

employe::employe()
{
    id=0;
    nom=" ";
    prenom=" ";
    post=" ";
}
employe::employe(int id,QString nom,QString prenom,QString post)
{
this->id=id;
this->nom=nom;
this->prenom=prenom;
this->post=post;
}
int employe::getid(){return id;}
QString employe::getnom(){return nom;}
QString employe::getprenom(){return prenom;}
QString employe::getpost(){return post;}
void employe::setid(int id){this->id=id;}
void employe::setnom(QString nom){this->nom=nom;}
void employe::setprenom(QString prenom){this->prenom=prenom;}
void employe::setpost(QString post){this->post=post;}

bool employe::ajouter()
{
    QSqlQuery query;
    QString id_string= QString::number(id);
         query.prepare("INSERT INTO Employe (id, nom, prenom, post) "
                       "VALUES (:id, :forename, :surname, :travail)");
         query.bindValue(":id", id_string);
         query.bindValue(":forename", nom);
         query.bindValue(":surname", prenom);
         query.bindValue(":travail", post);
         return query.exec();


}

bool employe::supprimer(int id)
{
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("Delete from employe where ID= :id");
    query.bindValue(":id",res);
    return query.exec();
}
QSqlQueryModel* employe::afficher()
{
   QSqlQueryModel* model=new QSqlQueryModel();

   model->setQuery("SELECT* FROM Employe");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("post"));
return model;

}
bool employe::modifier(int id)
{
    QSqlQuery query;

       QString res= QString::number(id);
       query.prepare("UPDATE Employe SET id=:id,nom=:nom,prenom=:prenom ,post=:post WHERE id=:id");
       query.bindValue(":id", id);
       query.bindValue(":nom", nom);
       query.bindValue(":prenom", prenom);
       query.bindValue(":post", post);




          return    query.exec();
}
