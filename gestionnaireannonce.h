#ifndef GESTIONNAIREANNONCE_H
#define GESTIONNAIREANNONCE_H
#include <string>
#include <vector>
#include "compte.h"
#include "annonce.h"
#include "date.h"

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

};

#endif // GESTIONNAIREANNONCE_H
