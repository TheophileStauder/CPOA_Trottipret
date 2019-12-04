#ifndef GESTIONNAIRECOMPTES_H
#define GESTIONNAIRECOMPTES_H
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
class GestionnaireComptes
{
private:
    std::vector<Compte> listComptes ;
public:
    GestionnaireComptes();
    bool verifierCompteAdr(std::string adrM);  //verification de la créeation avec adr mail
    bool verifierCompteIzly(std::string idIzly);   // verification de la creation avec compte Izly
    void ajouterCompte(Compte compte) ;

};

#endif // GESTIONNAIRECOMPTES_H
