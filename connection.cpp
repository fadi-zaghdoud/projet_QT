#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("salah");//inserer nom de l'utilisateur
db.setPassword("salah");//inserer mot de passe de c
if (db.open())
test=true;





    return  test;
}
