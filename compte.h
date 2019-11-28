#ifndef COMPTE_H
#define COMPTE_H
#include <string>
#include "gestionnairecomptes.h"


/** @brief La classe Compte est la classe qui contient toutes les informations d'un utilisateur et lui permet de
 ** s'authentifier au système
 **
 ** Elle contient deux constructeurs (un avec bio et un sans)
 **
 ** Elle contient 2 méthodes (sans compter les getter et setter basiques),
 **  @ref verifierCompte(), @ref setBio()
 **
 ** @version 1a
 **/
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
    Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, GestionnaireComptes& g) ;
    Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, std::string bio, GestionnaireComptes& g) ;
    void setBio(std::string bio);
    bool isEmailValide() ;
    std::string getNom() ;
    std::string getAdr() ;
    std::string getIdIzly() ;


};

#endif // COMPTE_H
