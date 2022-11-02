#include "gvol.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

GVol::GVol()
{
    num=0;
    des=" ";
    dated=" ";
    datea=" ";
}
GVol::GVol(int num,QString des,QString dated,QString datea)
{
this->num=num;
this->des=des;
this->dated=dated;
this->datea=datea;
}
int GVol::getnum(){return num;}
QString GVol::getdes(){return des;}
QString GVol::getdated(){return dated;}
QString GVol::getdatea(){return datea;}
void GVol::setnum(int num){this->num=num;}
void GVol::setdes(QString des){this->des=des;}
void GVol::setdated(QString dated){this->dated=dated;}
void GVol::setdatea(QString datea){this->datea=datea;}

bool GVol::ajouter()
{
    QSqlQuery query;
    QString num_string= QString::number(num);
         query.prepare("INSERT INTO vol (num, des, dated, datea) "
                       "VALUES (:num, :des, :dated, :datea)");
         query.bindValue(":num", num_string);
         query.bindValue(":des", des);
         query.bindValue(":dated", dated);
         query.bindValue(":datea", datea);
         return query.exec();


}

bool GVol::supprimer(int num)
{
    QSqlQuery query;
    QString res=QString::number(num);
    query.prepare("Delete from vol where NUM= :num");
    query.bindValue(":num",res);
    return query.exec();
}
QSqlQueryModel* GVol::afficher()
{
   QSqlQueryModel* model=new QSqlQueryModel();

   model->setQuery("SELECT* FROM vol");
   model->setHeaderData(0, Qt::Horizontal, QObject::tr("num"));
   model->setHeaderData(1, Qt::Horizontal, QObject::tr("des"));
   model->setHeaderData(2, Qt::Horizontal, QObject::tr("dated"));
   model->setHeaderData(3, Qt::Horizontal, QObject::tr("datea"));
return model;

}
bool GVol::modifier(int num)
{
    QSqlQuery query;

       QString res= QString::number(num);
       query.prepare("UPDATE vol SET num=:num,des=:des,dated=:dated ,datea=:datea WHERE num=:num");
       query.bindValue(":num", num);
       query.bindValue(":des", des);
       query.bindValue(":dated", dated);
       query.bindValue(":datea", datea);


          return    query.exec();
}
