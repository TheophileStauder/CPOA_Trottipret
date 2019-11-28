#include "gestionnairecomptes.h"
#include "compte.h"

// faire un singleton ou pas ??
GestionnaireComptes::GestionnaireComptes(Compte compte)
{
    listComptes.push_back(compte);
}

GestionnaireComptes::GestionnaireComptes()
{

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


bool GestionnaireComptes::verifierCompteIzly(std::string idIzly){
    bool b = true ;
    for(Compte c : listComptes){
        if(c.getIdIzly()==idIzly){
            b = false ;
        }
    }
    return b ;
}

void GestionnaireComptes::ajouterCompte(Compte compte){
    listComptes.push_back(compte);
}









