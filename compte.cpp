#include "compte.h"
#include "gestionnairecomptes.h"
#include <assert.h>
#include <iostream>
#include <printf.h>
#include <string>

//http://www.siloged.fr/cours/QTCreator/CreerunObjet.html  exemple qt

Compte::Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, GestionnaireComptes g)  //contructeur sans la bio car optionnelle
{
    prenom = p ;
    nom = n ;
    moyenneNote = 0.0 ;
    adresseMail = adrM ;
    idIzly = idI ;
    mdpIzly = mdpI ;
    miniBio = "" ;
    gestionnaire = g ;
    assert(verfierCompte()) ;

    if(!verfierCompte()){  // a enlever plus tard
        printf("Impossible de créer compte : adresse mail ou identifiant izly deja utilisé") ;
    }

    gestionnaire.ajouterCompte(*this); // ajouter ce compte dans le gestionnaire
}

Compte::Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, std::string bio, GestionnaireComptes g) //constructeur avec bio
{
    prenom = p ;
    nom = n ;
    moyenneNote = 0.0 ;
    adresseMail = adrM ;
    idIzly = idI ;
    mdpIzly = mdpI ;
    miniBio = bio ;
    gestionnaire = g ;
}

void Compte::setBio(std::string bio) // set la bio (optionnelle)
{
    miniBio = bio ;
}

bool Compte::verfierCompte(){   //verifie que le compte n'existe pas deja
    bool b = true ;
    b = gestionnaire.verifierCompteAdr(adresseMail) ;
    // cas ou l'adr mail est deja utilisée
    if(!b){
        return false ;
    }

    // cas ou l'id izly est deja utilisé
    b = gestionnaire.verifierCompteIzly(idIzly) ;
    if(!b){
        return false ;
    }
    return true ;
}

std::string Compte::getNom(){
    return nom ;
}

std::string Compte::getIdIzly(){
    return idIzly ;
}

std::string Compte::getAdr(){
    return adresseMail ;
}
