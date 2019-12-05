#include "dbmanager.h"
#include <iostream>
#include <string.h>
#include <QSqlError>

DbManager::DbManager(){}
DbManager::DbManager(const QString& name)
{
    // Create DB connection
    myDb = QSqlDatabase::addDatabase("QSQLITE");
    myDb.setDatabaseName("/home/profil/laconi3u/CPOA_Theo/compteTest.db") ;
    if (!myDb.open())
        qDebug() << "Error: could not open database";
    else
        qDebug() << "Database opened successfully";

}

bool DbManager::ajouterCompte(QString idIzly,QString nom,QString prenom,QString mdpIzly,QString moyenneNote,QString adresseMail,QString miniBio)
{
    std::cout<<"DANS AJOUTER COMPTE "<<std::endl;
    bool res = true ;
    auto queryAdd1 = QSqlQuery{};
    if (!queryAdd1.prepare("INSERT INTO compte (idIzly,nom,prenom,mdpIzly,moyenne,adrMail,bio) VALUES(:idIzly,':nom',':prenom',':mdpIzly',:moyenne,':adrMail',':bio')")) {
        qDebug() << "can not prepare query:"<< queryAdd1.lastError();
        res = false;
    }
    queryAdd1.bindValue(":idIzly", idIzly.toInt());
    queryAdd1.bindValue(":nom", nom);
    queryAdd1.bindValue(":prenom", prenom);
    queryAdd1.bindValue(":mdpIzly", mdpIzly);
    queryAdd1.bindValue(":moyenne", moyenneNote.toFloat());
    queryAdd1.bindValue(":adrMail", adresseMail);
    queryAdd1.bindValue(":bio", miniBio);

    if (queryAdd1.exec()){
        qDebug() << "Person added";
    }
    else{
        qDebug() << "Error: could not add person " << queryAdd1.lastError() << queryAdd1.lastQuery();
        res = false ;
    }

   return res;
}

void DbManager::afficherCompte(QString idIzly){
    std::cout<<"dans afficher compte" ;
    QSqlQuery query;
    query.prepare("SELECT * FROM compte");
    query.exec();
    while (query.next())
    {
       QString name = query.value(idIzly).toString();
       qDebug() << name;
    }
}
