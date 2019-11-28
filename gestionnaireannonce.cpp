#include "gestionnaireannonce.h"
#include "compte.h"
#include <string>

/** @brief La classe GestionnaireAnnonce est un manager d'annonce qui permet de  faire le lien entre les utilisateurs
 ** qui communiquent entre eux , commme par exemple lors des requêtes d'emprunt.
 **
 ** Elle contient un constructeur vide,un constructeur qui permet de remplir les champs de la classe
 **
 ** Elle contient 4 méthodes
 **  @ref ajouterAnnonce(), @ref chercherAnnonce(),@ref envoiRequetePreteur(),@ref reponseDemande()
 **
 ** @version 1a
 **/

GestionnaireAnnonce::GestionnaireAnnonce(){}


void GestionnaireAnnonce::ajouterAnnonce(Annonce annonce){
    listeAnnonce.push_back(annonce);
}

std::vector<Annonce> GestionnaireAnnonce::chercherAnnonce(double tarif,std::string Ville,Date date){
    std::vector<Annonce> resultatAnnoncesFiltrees;

    for(Annonce a : listeAnnonce){
        if(a.getTarif() < tarif && !a.getVille().compare(Ville) && a.empruntPossible(date)){
            resultatAnnoncesFiltrees.push_back(a);
        }

    }
    return resultatAnnoncesFiltrees;
}

void GestionnaireAnnonce::envoiRequetePreteur(std::string idAnnonce,std::string idEmprunteur){

}


void GestionnaireAnnonce::creerAnnonce(double tarif,std::string ville,std::string adrRetrait,std::string adrRetour,Date date,std::string descriptif){

}

bool GestionnaireAnnonce::verifierDisponibilite(std::string idAnnonce){
    for(Annonce a : listeAnnonce){
        /*if(a.get){

        }*/
    }
    return true ; // a completer --> temporaire
}
