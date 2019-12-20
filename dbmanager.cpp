#include "dbmanager.h"
#include <iostream>
#include <string.h>
#include <QSqlError>
#include <QSqlRecord>
#include <QFile>

DbManager::DbManager(){}
DbManager::DbManager(const QString& name)
{

    numAnnonce = 0 ;
    QFile file("compteTest.db");
    file.open(QIODevice::ReadWrite);
    file.close();

    myDb = QSqlDatabase::addDatabase("QSQLITE");
    myDb.setHostName("localhost");
    myDb.setDatabaseName("compteTest.db") ;
    myDb.open();
    myDb.exec("CREATE TABLE IF NOT EXISTS compte (idIzly integer primary key, nom text, prenom text, mdpIzly text, moyenne real, adrMail text, bio text);");
    myDb.exec("CREATE TABLE IF NOT EXISTS annonce(idAnnonce integer primary key, idIzly integer, ville text, adresse text, dateDeb text,dateFin text, prix real);");
    if (!myDb.open())
        qDebug() << "Error: could not open database";
    else
        qDebug() << "Database opened successfully";
}

bool DbManager::ajouterCompte(QString idIzly,QString nom,QString prenom,QString mdpIzly,QString moyenne,QString adresseMail,QString bio)
{
    std::cout<<"DANS AJOUTER COMPTE "<<std::endl;
    bool res = true ;
    auto queryAdd1 = QSqlQuery{};
    if (!queryAdd1.prepare("INSERT INTO compte (idIzly,nom,prenom,mdpIzly,moyenne,adrMail,bio) VALUES(:idIzly,:nom, :prenom , :mdpIzly ,:moyenne,:adrMail , :bio );")) {
        qDebug() << "can not prepare query:"<< queryAdd1.lastError();
        res = false;
    }
    queryAdd1.bindValue(":idIzly", idIzly.toInt());
    queryAdd1.bindValue(":nom", nom);
    queryAdd1.bindValue(":prenom", prenom);
    queryAdd1.bindValue(":mdpIzly", mdpIzly);
    queryAdd1.bindValue(":moyenne", moyenne.toDouble());
    queryAdd1.bindValue(":adrMail", adresseMail);
    queryAdd1.bindValue(":bio", bio);
    std::cout << mdpIzly.toStdString() << "dans ajouter" ;
    if (queryAdd1.exec()){
        qDebug() << "Person added";
    }
    else{
        qDebug() << "Error: could not add person " << queryAdd1.lastError() << queryAdd1.lastQuery();
        res = false ;
    }
   // afficherCompte(idIzly);
   return res;
}

void DbManager::afficherCompte(QString idIzly){
    std::cout<<"dans afficher compte" ;

    // Query all
    auto queryAll = QSqlQuery{"SELECT * FROM compte;"};
    int idIzly1 = queryAll.record().indexOf(idIzly);
    queryAll.first() ;
    while (queryAll.next()) {
        auto id = queryAll.value(idIzly1).toString();
        qDebug() << "Identifiant Izly dans la base :: " << id;
    }
}

/**
 * @brief Methode pour verifier une connexion dans la base de donnée
 * @param idAdr
 * @param mdp
 * @return booleen resultat requête
 */
bool DbManager::connexionValide(QString idAdr,QString mdp){

    bool res = false;
    auto query = QSqlQuery();
    if(!query.prepare("SELECT mdpIzly FROM compte WHERE idIzly = :id OR adrMail LIKE :adr ;")){
        qDebug()<<"echec preparation de la requete connexion " ;
    }
    query.bindValue(":id",idAdr.toInt());
    query.bindValue(":adr",idAdr);
    query.exec();
    if(query.next()){
        auto mdpBase = query.value(0).toString();
        qDebug() << "Mot de passe Izly dans la base :: " << mdpBase;
        if(!mdp.isEmpty() && mdp == mdpBase){res = true;}
        return res;
    }else{
        return false;
    }
}

/**
 * @brief DbManager::ajouterAnnonce
 * @param ville
 * @param adresse
 * @param dateDeb
 * @param dateFin
 * @param prix
 * @return true si l'ajout de l'annonce s'est bien déroulé, false sinon
 */
bool DbManager::ajouterAnnonce(QString IdIzly, QString ville,QString adresse,QString dateDeb,QString dateFin,QString prix){
    bool res = true ;
    auto queryAdd1 = QSqlQuery{};
    if (!queryAdd1.prepare("INSERT INTO annonce (idAnnonce,idIzly,ville,adresse,dateDeb,dateFin,prix) VALUES(:idAnnonce, :idIzly, :ville, :adresse, :dateDeb, :dateFin, :prix);")) {
        qDebug() << "can not prepare query:"<< queryAdd1.lastError();
        res = false;
    }

    int numAnnonceTemp = fabriqueNumAnnonce();

    queryAdd1.bindValue(":idAnnonce",numAnnonceTemp); //donne un numero unique a chaque annonce
    queryAdd1.bindValue(":idIzly", IdIzly.toInt());
    queryAdd1.bindValue(":ville", ville);
    queryAdd1.bindValue(":adresse", adresse);
    queryAdd1.bindValue(":dateDeb", dateDeb);
    queryAdd1.bindValue(":dateFin", dateFin);
    queryAdd1.bindValue(":prix", prix.toFloat());

    if (queryAdd1.exec()){
        qDebug() << "Annonce added";
    }
    else{
        qDebug() << "Error: could not add annonce " << queryAdd1.lastError() << queryAdd1.lastQuery();
        res = false ;
    }
   return res;
}

std::vector<int> DbManager::rechercherAnnonce(QString date, QString ville){
    std::vector<int> listeAnnonce; //.push_back(annonce);

    auto query = QSqlQuery();
    if(!query.prepare("SELECT idAnnonce FROM annonce WHERE ville LIKE ':ville'")){ //ajouter comparaison avec date
        qDebug()<<"echec preparation de la requete connexion " ;
    }
    query.bindValue(":ville",ville);
    query.first();
    auto id = query.value("idAnnonce").toInt();
    listeAnnonce.push_back(id);
    qDebug() << "dans la recherche " << id;
    return listeAnnonce ;
}


int DbManager::fabriqueNumAnnonce(){

    auto query = QSqlQuery();
    if(!query.prepare("SELECT MAX(idAnnonce) FROM annonce;")){
        qDebug()<<"echec preparation de la requete connexion " ;
    }

    query.exec();
    if(query.next()){
        auto id = query.value(0).toInt();
        return id+1;
    }
    return -1;
}


void DbManager::setNumAnnonce(int a ){
    numAnnonce = a;
}

