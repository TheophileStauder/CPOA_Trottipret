#ifndef GESTIONNAIREANNONCE_H
#define GESTIONNAIREANNONCE_H
#include <string>
#include <vector>
#include "date.h"
class Annonce;

/** @brief La classe GestionnaireAnnonce est un manager d'annonce qui permet de  faire le lien entre les utilisateurs
 ** qui communiquent entre eux , commme par exemple lors des requêtes d'emprunt.
 **
 ** Elle contient un constructeur vide,un constructeur qui permet de remplir les champs de la classe
 **
 ** Elle contient 4 méthodes
 **  @ref ajouterAnnonce(), @ref chercherAnnonce(),@ref envoiRequetePreteur(),@ref reponseDemande()
 **
 ** @version 1d
 **/
class GestionnaireAnnonce
{

    private :
        std::vector<Annonce> listeAnnonce;


    public:
        GestionnaireAnnonce();
        void ajouterAnnonce(Annonce annonce);
        std::vector<Annonce> getListeAnnonce() { return listeAnnonce; }
        std::vector<Annonce> chercherAnnonce(double tarif,std::string ville,Date date);
        void envoiRequetePreteur(std::string idAnnonce,std::string idEmprunteur);
        void creerAnnonce(double tarif,std::string ville,std::string adrRetrait,std::string adrRetour,Date date,std::string descriptif);
        void reponseDemandePret();
        bool verifierDisponibilite(std::string idAnnonce) ;
        int getId() ;
        int idAnnonce ;

};

#endif // GESTIONNAIREANNONCE_H
