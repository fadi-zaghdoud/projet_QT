#ifndef MATERIEL_H
#define MATERIEL_H


#include <QString>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQuerymodel>
class Materiel
{
public:
    Materiel();
    Materiel(int,int,QString);

    int getcode();
    int getprix();
    QString gettype();

    void setcode(int);
    void setprix(int);
    void settype(QString);

    bool ajouter();
  QSqlQueryModel* afficher();
  bool supprimer(int);
  bool modifier();

  QSqlQueryModel* RechercheMateriel(QString);
  QSqlQueryModel* triermaterielparcode();
  QSqlQueryModel* triermaterielparprix();

  void telechargerPDF();
private:
    int code,prix;
    QString type;


};



#endif // MATERIEL_H
