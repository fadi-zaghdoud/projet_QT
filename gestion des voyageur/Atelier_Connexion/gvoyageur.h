#ifndef GVOYAGEUR_H
#define GVOYAGEUR_H
#include <QString>
#include <QSqlQueryModel>
class GVoyageur
{
public:
    GVoyageur();
        GVoyageur(int,QString,QString,QString);
        int getnum();
        QString getnom();
        QString getprenom();
        QString getdest();
        void setnum(int);
        void setnom(QString);
        void setprenom(QString);
        void setdest(QString);
        bool ajouter();
        bool supprimer(int num);
        QSqlQueryModel* afficher();
        bool modifier(int num);
    private:
        int num;
        QString nom, prenom,dest;

};

#endif // GVOYAGEUR_H
