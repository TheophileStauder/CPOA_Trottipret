#ifndef COMPTE_H
#define COMPTE_H
#include <string>
#include <vector>
#include "gestionnairecomptes.h"


/** @brief La classe Compte est la classe qui contient toutes les informations d'un utilisateur et lui permet de
 ** s'authentifier au système
 **
 ** Elle contient deux constructeurs (un avec bio et un sans)
 **
 ** Elle contient 2 méthodes (sans compter les getter et setter basiques),
 **  @ref verifierCompte(), @ref setBio()
 **
 ** @version 1d
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
    std::vector<int> mesAnnonces;


public:
    Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI) ;
    Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, std::string bio) ;
    void setBio(std::string bio);
    std::string getNom() ;
    std::string getAdr() ;
    std::string getIdIzly() ;
    void ajouterAnnonce(int idAnnonce) ;


};

#endif // COMPTE_H
