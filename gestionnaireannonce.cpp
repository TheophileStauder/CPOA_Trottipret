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


/// @brief Constructeur vide
GestionnaireAnnonce::GestionnaireAnnonce(){}


/// @brief Methode pour ajouter une annonce à la classe
///
/// @param annonce une annonce
void GestionnaireAnnonce::ajouterAnnonce(Annonce annonce){
    listeAnnonce.push_back(annonce);
}


/// @brief Methode pour filtrer les annonce et garde celles correspondantes
/// aux paramètres passés
///
/// @param tarif le prix horaire
/// @param ville la ville
/// @param date la date souhaité pour un début d'emprunt
std::vector<Annonce> GestionnaireAnnonce::chercherAnnonce(double tarif,std::string Ville,Date date){
    std::vector<Annonce> resultatAnnoncesFiltrees;

    for(Annonce a : listeAnnonce){
        if(a.getTarif() < tarif && !a.getVille().compare(Ville) && a.empruntPossible(date)){
            resultatAnnoncesFiltrees.push_back(a);
        }

    }
    return resultatAnnoncesFiltrees;
}


/// @brief Methode pour envoyer un requete à un preteur
///
/// @param idAnnonce l'identifiant de l'annonce
/// @param idEmprunteur l'identifiant de l'emprunteur
void GestionnaireAnnonce::envoiRequetePreteur(std::string idAnnonce,std::string idEmprunteur){

}


/// @brief Methode pour verifier la disponibilité d'une trotinette (verifie qu'elle n'a pas déjà été reservée
///
/// @param idAnnonce l'identifiant de l'annonce
bool GestionnaireAnnonce::verifierDisponibilite(std::string idAnnonce){
    for(Annonce a : listeAnnonce){
        /*if(a.get){

        }*/
    }
    return true ; // a completer --> temporaire
}
