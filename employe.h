#ifndef EMPLOYE_H
#define EMPLOYE_H
#include <QString>
#include <QSqlQueryModel>
class employe
{
public:
    employe();
    employe(int,QString,QString,QString);
    int getid();
    QString getnom();
    QString getprenom();
    QString getpost();
    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void setpost(QString);
    bool ajouter();
    bool supprimer(int id);
    QSqlQueryModel* afficher();
    bool modifier(int id);
        QSqlQueryModel* Find_employe();
    QSqlQueryModel* recherche_employe(QString search);
private:
    int id;
    QString nom, prenom,post;
};

#endif // EMPLOYE_H
