#include "date.h"
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

/// @brief Constructeur vide
Date::Date(){}

/// @brief Constructeur qui rempli les champs de la classe
///
/// @param min les minutes
/// @param h l'heure
/// @param j le jour
/// @param m le mois
/// @param a l'annee
Date::Date(int min,int h,int j,int m,int a){
    minute = min;
    heure = h;
    jour = j;
    mois = m;
    annee = a;
}

///@brief Getter de heure
///
/// @return heure
int Date::getHeure(){
    return heure;
}

///@brief Getter de minute
///
///@return minute
int Date::getMinute(){
    return minute;
}


///@brief Getter du jour
///
///@return jour
int Date::getJour(){
    return jour;
}

///@brief Getter du mois
///
///@return mois
int Date::getMois(){
    return mois;
}


///@brief Methode qui compare deux date et dit si le param est plus veixu que la date actuelle
///
///@return boolen
bool Date::compareCurentDate(Date date){
    time_t now = time(0);
    tm ltm = *localtime(&now);
    int year = ltm.tm_year;
    int month=ltm.tm_mon;
    int day=ltm.tm_mday;
    bool tmp=false;
    int yearDate=date.getAn();
    int moisDate=date.getMois();
    int jourDate= date.getJour();
    if(yearDate<year){
    tmp=true ;
}
    if(moisDate<month){
    tmp=true ;
}
    if(jourDate<day){
    tmp=true ;
}
return tmp;
}

///@brief Setter de minute
///
/// @param min les minutes
void Date::setMinute(int min){
    minute=min;

}


///@brief Setter de jour
///
/// @param j le jour
void Date::setJour(int j){
    jour=j;

}


///@brief Setter de mois
///
/// @param m le mois
void Date::setMois(int m){
    mois=m;

}

///
///@brief Setter de annee
/// \param a l'annee
///
void Date::setAn(int a){
    annee=a;
}


/// @brief Getter de annee
///
/// @return annee
int Date::getAn(){
    return annee;
}
