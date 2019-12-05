#include "dbmanager.h"
#include <iostream>
#include <string.h>
#include <QSqlError>
#include <QSqlRecord>

DbManager::DbManager(){}
DbManager::DbManager(const QString& name)
{
    // Create DB connection
    myDb = QSqlDatabase::addDatabase("QSQLITE");
    myDb.setDatabaseName("./compteTest.db") ;
    if (!myDb.open())
        qDebug() << "Error: could not open database";
    else
        qDebug() << "Database opened successfully";
}


/**
 * @brief Méthode pour ajouter un compte à la base de donnée dans la table compte et retourne
 * un booleen pour savoir si la requête a fonctionné
 * @param idAnnonce
 * @param description
 * @param tarif
 * @param idAdresse
 * @param idDate
 * @param idIzly
 * @return booleen
 */
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
    afficherCompte(idIzly);
   return res;
}

/**
 * @brief Méthode pour ajouter une annonce à la base de donnée dans la table annonce et retourne
 * un booleen pour savoir si la requête a fonctionné
 * @param idAnnonce
 * @param description
 * @param tarif
 * @param idAdresse
 * @param idDate
 * @param idIzly
 * @return booleen
 */
bool DbManager::ajouterAnnonce(QString idAnnonce,QString description,QString tarif,QString idAdresse,QString idDate,QString idIzly)
{
    std::cout<<"DANS AJOUTER COMPTE "<<std::endl;
    bool res = true ;
    auto queryAdd1 = QSqlQuery{};
    if (!queryAdd1.prepare("INSERT INTO annonce (idAnnonce,description,tarif,idAdresse,idDate,idIzly) VALUES(:idIzly,':description',:tarif,:idDate,:idAdresse,:idIzly)")) {
        qDebug() << "can not prepare query:"<< queryAdd1.lastError();
        res = false;
    }
    queryAdd1.bindValue(":idAnnonce",idAnnonce.toInt());
    queryAdd1.bindValue(":description",description);
    queryAdd1.bindValue(":tarif",tarif.toInt());
    queryAdd1.bindValue(":idAdresse",idAdresse.toInt());
    queryAdd1.bindValue(":idData",idDate.toInt());
    queryAdd1.bindValue(":idIzly", idIzly.toInt());


    if (queryAdd1.exec()){
        qDebug() << "Annonce added";
    }
    else{
        qDebug() << "Error: could not add annonce " << queryAdd1.lastError() << queryAdd1.lastQuery();
        res = false ;
    }
   return res;
}

void DbManager::afficherAnnonce(QString idIzly){
    std::cout<<"dans afficher annonce" ;

    // Query all
    auto queryAll = QSqlQuery{"SELECT * FROM annonce WHERE idIzly = :idIzly;"};

    //int idIzly = queryAll.record().indexOf("idIzly");
    while (queryAll.next()) {
        auto id = queryAll.value(idIzly).toString();
        qDebug() << "Identifiant Izly dans la base :: " << id;
    }
}

void DbManager::afficherCompte(QString idIzly){
    std::cout<<"dans afficher compte" ;

    // Query all
    auto queryAll = QSqlQuery{"SELECT * FROM compte;"};
    //int idIzly = queryAll.record().indexOf("idIzly");
    while (queryAll.next()) {
        auto id = queryAll.value(idIzly).toString();
        qDebug() << "Identifiant Izly dans la base :: " << id;
    }
}
