#ifndef ANNONCE_H
#define ANNONCE_H
#include <iostream>
#include "date.h"



class Annonce
{
public:
    Annonce();

    void sethoraire (std::string ho);//pour fixer l'horaire
    void setDescription (std::string descr);//pour fixer la description
    void setTarif (int prix);//pour fixer le tarif
    void setDateEmprun (Date dateRetrait);//pour fixer la date debut emprunt

    Date getDateRetrait();
    Date getDateRetour();
    int getTarif();//rend la valeur du tarif
    std::string getDescr();//rend la valeur de la desc
    std::string getHoraire();//rend la valeur de l'horaire
    std::string getVille();
    bool empruntPossible(Date date);

private:
    std::string description;
    std::string ville;
    float tarif;
    Date dateRetrait;
    Date dateRetour;
};

#endif // ANNONCE_H
