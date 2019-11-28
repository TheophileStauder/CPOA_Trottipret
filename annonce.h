#ifndef ANNONCE_H
#define ANNONCE_H
#include <iostream>
#include "date.h"

/** @brief La classe Annonce est la classe qui contient les informations relatives à une trotinette qui peut être prêter
 * (dates,tarif,modèle,etc etc)
 **
 ** Elle contient deux constructeurs, un vide,un qui rempli les champs privés
 **
 ** Elle contient 2 méthodes (sans compter les getter et setter basiques),
 **  @ref verifierCompte(), @ref setBio()
 **
 ** @version 1a
 **/

class Annonce
{
public:
    Annonce();
    Annonce(std::string descr, std::string v, float t, Date retrait, Date retour, int i);

    void sethoraire (std::string ho);//pour fixer l'horaire
    void setDescription (std::string descr);//pour fixer la description
    void setTarif (int prix);//pour fixer le tarif
    void setDateEmprunt (Date dateRetrait);//pour fixer la date debut emprunt

    Date getDateRetrait();
    Date getDateRetour();
    int getTarif();//rend la valeur du tarif
    std::string getDescr();//rend la valeur de la desc
    std::string getHoraire();//rend la valeur de l'horaire
    std::string getVille();
    bool empruntPossible(Date date);
    int getId() ;

private:
    std::string description;
    std::string ville;
    float tarif;
    Date dateRetrait;
    Date dateRetour;
    int id ;
};

#endif // ANNONCE_H
