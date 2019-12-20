#include "date.h"
#include <iostream>
#include <string>
#include <sstream>

/** @brief La classe Date est la classe qui représente une date au format JJ/MM/AAAA avec un horaire au format MM/HH
 **
 ** Elle contient un constructeur vide,un constructeur qui permet de remplir les champs de la classe
 **
 ** Elle contient 2 méthodes
 **  @ref compareCurrentDate() et @ref toString()
 **
 ** @version 1d
 **/



/// @brief Constructeur vide
Date::Date(){}


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

///@brief Compare la date avec la date d'aujourd'hui pour savoir si elle est valide (dans le futur)
///@return booleen
bool Date::compareCurentDate(){
    time_t now = time(0);
    tm ltm = *localtime(&now);
    int year = ltm.tm_year;
    int month=ltm.tm_mon;
    int day=ltm.tm_mday;
    bool tmp=false;
    int yearDate=getAn();
    int moisDate=getMois();
    int jourDate= getJour();

    if(yearDate<year){
        tmp=true ;
    }

    if(yearDate==year && moisDate<month){
        tmp=true ;
    }

    if(yearDate==year && moisDate==month && jourDate<day){
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


///@brief Setter de l'heure
///
/// @param h l'heure
void Date::setHeure(int h){
    heure = h ;

}


///@brief Setter de mois
///
/// @param m le mois
void Date::setMois(int m){
    mois=m;

}

///@brief Setter de annee
///@param a l'annee
void Date::setAn(int a){
    an=a;
}


/// @brief Getter de annee
///
/// @return annee
int Date::getAn(){
    return an;
}

/// @brief Ecrit la date sous forme de string
///
/// @return la chaine de caractère 
std::string  Date::toString(){
    /*std::string jour = std::stoi(getJour());
    std::string mois = std::stoi(getMois());
    std::string annee = std::stoi(getAn());*/
    std::string jour = std::to_string(getJour());
    std::string mois = std::to_string(getMois());
    std::string annee = std::to_string(getAn());

    std::string res {jour+"/"+mois+"/"+annee} ;


    return  res ;
}
