#include "compte.h"
#include "gestionnairecomptes.h"
#include <assert.h>
#include <iostream>
#include <string>
#include <regex>

//http://www.siloged.fr/cours/QTCreator/CreerunObjet.html  exemple qt

Compte::Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, GestionnaireComptes& g)  //contructeur sans la bio car optionnelle
{
    prenom = p ;
    nom = n ;
    moyenneNote = 0.0 ;
    adresseMail = adrM ;
    idIzly = idI ;
    mdpIzly = mdpI ;
    miniBio = "" ;
    gestionnaire = g ;
    assert(g.verifierCompteIzly(idIzly)) ;
    assert(g.verifierCompteAdr(adresseMail)) ;
    assert(isEmailValide()) ;

    std::cout << "Compte crée avec succès" << std::endl ;
    g.ajouterCompte(*this); // ajouter ce compte dans le gestionnaire
}

Compte::Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, std::string bio, GestionnaireComptes& g) //constructeur avec bio
{
    prenom = p ;
    nom = n ;
    moyenneNote = 0.0 ;
    adresseMail = adrM ;
    idIzly = idI ;
    mdpIzly = mdpI ;
    miniBio = bio ;
    gestionnaire = g ;


    assert(isEmailValide()) ;
   // assert(verifierCompte()) ;
    assert(g.verifierCompteIzly(idIzly)) ;
    assert(g.verifierCompteAdr(adresseMail)) ;
    std::cout << "Compte crée avec succès" << std::endl ;
    g.ajouterCompte(*this); // ajouter ce compte dans le gestionnaire
}

void Compte::setBio(std::string bio) // set la bio (optionnelle)
{
    miniBio = bio ;
}


bool Compte::isEmailValide(){
    const std::regex regex ("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    return std::regex_match(adresseMail, regex) ;
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
