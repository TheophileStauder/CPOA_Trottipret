#include "compte.h"
#include "gestionnairecomptes.h"
#include <assert.h>
#include <iostream>
#include <string>


//http://www.siloged.fr/cours/QTCreator/CreerunObjet.html  exemple qt

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



/// @brief Constructeur qui rempli les champs de la classe(sans bio)
///
/// @param p le prénom
/// @param n le nom de famille
/// @param t le tarif horaire
/// @param adrM l'adresse mail
/// @param idI l'identifiant Izly
/// @pram mdpI le mot de passe Izly
Compte::Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI)  //contructeur sans la bio car optionnelle
{
    GestionnaireComptes* g = GestionnaireComptes::getInstance();
    prenom = p ;
    nom = n ;
    moyenneNote = 0.0 ;
    adresseMail = adrM ;
    idIzly = idI ;
    mdpIzly = mdpI ;
    miniBio = "" ;
    assert(g->verifierCompteIzly(idIzly)) ;
    assert(g->verifierCompteAdr(adresseMail)) ;
    assert(g->isEmailValide(adresseMail)) ;

    std::cout << "Compte crée avec succès" << std::endl ;
    g->ajouterCompte(*this); // ajouter ce compte dans le gestionnaire
}



/// @brief Constructeur qui rempli les champs de la classe(avec bio)
///
/// @param p le prénom
/// @param n le nom de famille
/// @param t le tarif horaire
/// @param adrM l'adresse mail
/// @param idI l'identifiant Izly
/// @param mdpI le mot de passe Izly
/// @param bio la mini biographie du compte
Compte::Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, std::string bio) //constructeur avec bio
{
    GestionnaireComptes* g = GestionnaireComptes::getInstance();
    prenom = p ;
    nom = n ;
    moyenneNote = 0.0 ;
    adresseMail = adrM ;
    idIzly = idI ;
    mdpIzly = mdpI ;
    miniBio = bio ;


    assert(g->isEmailValide(adresseMail)) ;
    assert(g->verifierCompteIzly(idIzly)) ;
    assert(g->verifierCompteAdr(adresseMail)) ;
    g->ajouterCompte(*this); // ajouter ce compte dans le gestionnaire

    std::cout << "**********************************************" << std::endl ;
    std::cout << "\n\nCompte crée avec succès\n" << std::endl ;
    std::cout << "**********************************************" << std::endl ;
}


// @brief Setter de la mini biographie du compte
///
/// @param bio la nouvelle biographie
void Compte::setBio(std::string bio) // set la bio (optionnelle)
{
    miniBio = bio ;
}

///@brief ajoute une annonce a la liste d'annonce ( avec son id)
void Compte::ajouterAnnonce(int idAnnonce){
    mesAnnonces.push_back(idAnnonce);
    std::cout << "**********************************************" << std::endl ;
    std::cout << "Annonce ajoutée" << std::endl ;
    std::cout << "**********************************************" << std::endl ;
}




/// @brief Getter du nom de compte
///
/// @return nom
std::string Compte::getNom(){
    return nom ;
}


/// @brief Getter de l'id Izly
///
/// @return idIzly
std::string Compte::getIdIzly(){
    return idIzly ;
}


/// @brief Getter de l'adresse mail
///
/// @return adresseMail
std::string Compte::getAdr(){
    return adresseMail ;
}
