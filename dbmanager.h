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
    void setNumAnnonce(int a);
    int fabriqueNumAnnonce();
    bool ajouterCompte(QString idIzly,QString nom,QString prenom,QString mdpIzly,QString moyenne,QString adresseMail,QString bio);
    void afficherCompte(QString idIzly);
    bool connexionValide(QString idAdr,QString mdp);
    bool ajouterAnnonce(QString IdIzly,QString ville,QString adresse,QString dateDeb,QString dateFin,QString prix);
    std::vector<int> rechercherAnnonce(QString date, QString ville) ;  //retourne la liste d'id des annonces qui correspondes
private:
    QSqlDatabase myDb;
    int numAnnonce ;
};

#endif // DBMANAGER_H
