#ifndef GVOL_H
#define GVOL_H
#include <QString>
#include <QSqlQueryModel>

class GVol
{
public:
    GVol();
    GVol(int,QString,QString,QString);
        int getnum();
        QString getdes();
        QString getdated();
        QString getdatea();
        void setnum(int);
        void setdes(QString);
        void setdated(QString);
        void setdatea(QString);
        bool ajouter();
        bool supprimer(int num);
        QSqlQueryModel* afficher();
        bool modifier(int num);
private:
        int num;
        QString des,dated,datea;
};

#endif // GVOL_H
