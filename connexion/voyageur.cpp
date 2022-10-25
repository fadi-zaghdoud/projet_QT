#include "voyageur.h"
#include <QSqlQuery>
#include <QtDebug>
voyageur::voyageur()
{
num=0;
nom=" ";
prenom=" ";
}
voyageur::voyageur(int num,QString nom,QString prenom)
{
this->num=num;
this->nom=nom;
this->prenom=prenom;
}
int voyageur::getnum(){return num;}
QString voyageur::getnom(){return nom;}
QString voyageur::getprenom(){return prenom;}
void voyageur::setnum(int num){this->num=num;}
void voyageur::setnom(QString nom){this->nom=nom;}
void voyageur::setprenom(QString prenom){this->prenom=prenom;}
bool voyageur::ajouter()
{
    QSqlQuery query;
    QString num_string= QString::number(num);
         query.prepare("INSERT INTO GS_VOYAGEUR (num, nom, prenom) "
                       "VALUES (:num, :forename, :surname)");
         query.bindValue(":num", num_string);
         query.bindValue(":forename", nom);
         query.bindValue(":surname", prenom);
         return  query.exec();

}
