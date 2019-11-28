#ifndef DATE_H
#define DATE_H
#include <iostream>

/** @brief La classe Date est la classe qui représente une date au format JJ/MM/AAAA avec un horaire au format MM/HH
 **
 ** Elle contient un constructeur vide,un constructeur qui permet de remplir les champs de la classe
 **
 ** Elle contient x méthodes
 **  @ref ...
 **
 ** @version 1a
 **/

class Date
{
public:
    Date();
    void setMois(int mois);//pour fixer le mois
    int getMois();//rend le mois
    bool compareCurentDate(Date date); //Pour voir si la date de l'annonce est bien superieur a la date d'aujourdhui
    void setJour (int jour);//pour fixer le jour
    int getJour();//rend le jour

    int getHeure();//rend la valeur de l'heure

    void setMinute(int min);//pour fixer les minutes
    int getMinute();//rend la valeur des minutes

    void setAn(int an);
    int getAn();

private:
    int  mois;
    int jour;
    int an;
    int heure;
    int minute;
};

#endif // DATE_H
