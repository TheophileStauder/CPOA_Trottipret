#ifndef GESTIONNAIRECOMPTES_H
#define GESTIONNAIRECOMPTES_H
#include <vector>
#include <string>
class Compte;


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
