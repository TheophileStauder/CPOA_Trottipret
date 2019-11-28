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
 ** @version 1a
 **/

GestionnaireComptes::GestionnaireComptes(){
    std::cout << "Dans le constructeur du gestionnaire" << std::endl;
}
/**
 * @brief GestionnaireComptes::verifierCompte
 * @param adrM
 * @return true si le compte peut etre cree, false sinon
 */
bool GestionnaireComptes::verifierCompteAdr(std::string adrM){
    std::cout << "Dans verifier compte" << std::endl ;

    bool b = true ;
    for(Compte c : listComptes){
        if(c.getAdr()==adrM){
            b = false ;
        }
    }
    return b ;
}


bool GestionnaireComptes::verifierCompteIzly(std::string idIzly){
    std::cout << "Dans verifier compte" << std::endl ;
    int i ;
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

void GestionnaireComptes::ajouterCompte(Compte compte){
    std::cout << "Dans ajouter compte" << std::endl ;
    listComptes.push_back(compte);
    for (auto i = listComptes.begin(); i != listComptes.end(); i++){
        std::cout << "liste ajouter compte : " << (*i).getIdIzly() << std::endl ;
    }
}









