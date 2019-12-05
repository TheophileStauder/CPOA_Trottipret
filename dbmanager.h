#ifndef DBMANAGER_H
#define DBMANAGER_H
#include <QSqlDatabase>
#include <QSqlQuery>
#include <sstream>
#include <QDebug>
#include <QString>
#include <QVariant>


class DbManager
{
public:
    DbManager(const QString& name);
    DbManager() ;
    bool ajouterCompte(QString idIzly,QString nom,QString prenom,QString mdpIzly,QString moyenneNote,QString adresseMail,QString miniBio);
    void afficherCompte(QString idIzly);

private:
    QSqlDatabase myDb;
};

#endif // DBMANAGER_H
