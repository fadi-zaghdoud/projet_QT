#ifndef VOYAGEUR_H
#define VOYAGEUR_H
#include <QString>
#include<QtSql/QSqlDatabase>
#include<QtSql/QSqlTableModel>
class voyageur
{
public:
    voyageur();
    voyageur(int,QString,QString);
    int getnum();
    QString getnom();
    QString getprenom();
    void setnum(int);
    void setnom(QString);
    void setprenom(QString);
    bool ajouter();
private:
    int num;
    QString nom, prenom;
};

#endif // VOYAGEUR_H
