#ifndef GESTIONNAIRECOMPTES_H
#define GESTIONNAIRECOMPTES_H
#include <iostream>
#include <vector>
#include <string>
class Compte;

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
/*class GestionnaireComptes
{
private:
    std::vector<Compte> listComptes ;
public:
    GestionnaireComptes();
    bool verifierCompteAdr(std::string adrM);  //verification de la créeation avec adr mail
    bool verifierCompteIzly(std::string idIzly);   // verification de la creation avec compte Izly
    void ajouterCompte(Compte compte) ;

};*/

class GestionnaireComptes
{
    private:
        /* Here will be the instance stored. */
        static GestionnaireComptes* instance;

        /* Private constructor to prevent instancing. */
        GestionnaireComptes();

        //liste de comptes
        std::vector<Compte> listComptes ;


    public:
        /* Static access method. */
        static GestionnaireComptes* getInstance();
        bool verifierCompteAdr(std::string adrM);  //verification de la créeation avec adr mail
        bool verifierCompteIzly(std::string idIzly);   // verification de la creation avec compte Izly
        void ajouterCompte(Compte compte) ;
        bool isEmailValide(std::string mail) ;
        void connexionViaMail(std::string mail, std::string mdp) ;
        void connexionViaId(std::string id, std::string mdp) ;

};


#endif // GESTIONNAIRECOMPTES_H
