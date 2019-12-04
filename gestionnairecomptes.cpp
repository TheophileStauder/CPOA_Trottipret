#include "gestionnairecomptes.h"
#include "compte.h"
#include <iostream>


/** @brief La classe GestionnaireCompte est un manager de compte qui permet de gérer les créations de compte(interdiction
 ** de creer des comptes avec même Id ou adresse Mail)
 **
 ** Elle contient un constructeur vide
 **
 ** Elle contient 3 méthodes :
 **  @ref verifierCompteAdr(), @ref verifierCompte(),@ref envoiRequetePreteur(),@ref ajouterCompte()
 **
 ** @version 1d
 **/


///@brief constructeur vide
GestionnaireComptes::GestionnaireComptes(){
}


/**
 * @brief GestionnaireComptes::verifierCompte
 * @param adrM
 * @return true si le compte peut etre cree, false sinon
 */
bool GestionnaireComptes::verifierCompteAdr(std::string adrM){

    bool b = true ;
    for(Compte c : listComptes){
        if(c.getAdr()==adrM){
            b = false ;
        }
    }
    return b ;
}



/**
 * @brief GestionnaireComptes::verifierCompteIzly verfie que le compte n'existe pas déjà
 * @param idIzly
 * @return true si le compte peut etre cree, false sinon
 */
bool GestionnaireComptes::verifierCompteIzly(std::string idIzly){
    bool b = true ;

    for (auto i = listComptes.begin(); i != listComptes.end(); i++){
        std::cout << "liste dans verifier compte : " << (*i).getIdIzly() << std::endl ;
        if((*i).getIdIzly()==idIzly){
            b = false ;
        }
    }
    /*for(Compte c : listComptes){
        std::cout << "liste dans verifier compte : " << c.getIdIzly() << std::endl ;
        if(c.getIdIzly()==idIzly){
            b = false ;
        }
    }*/
    return b ;
}


/**
 * @brief GestionnaireComptes::ajouterCompte ajoute un compte au gestionnaire
 * @param compte
 */
void GestionnaireComptes::ajouterCompte(Compte compte){
    listComptes.push_back(compte);
}








