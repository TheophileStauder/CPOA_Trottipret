#ifndef COMPTE_H
#define COMPTE_H
#include <string>
#include "gestionnairecomptes.h"

class Compte
{
private:
    std::string nom ;
    std::string prenom ;
    double moyenneNote ;
    std::string adresseMail ;
    std::string miniBio ;
    std::string idIzly ;
    std::string mdpIzly ;
    GestionnaireComptes gestionnaire ;

public:
    Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, GestionnaireComptes g) ;
    Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, std::string bio, GestionnaireComptes g) ;
    void setBio(std::string bio);
    bool verfierCompte() ;
    std::string getNom() ;
    std::string getAdr() ;
    std::string getIdIzly() ;


};

#endif // COMPTE_H
