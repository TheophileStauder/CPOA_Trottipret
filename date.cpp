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
Date::Date(){}


int Date::getHeure(){
    return heure;
}
int Date::getMinute(){
    return minute;
}

int Date::getJour(){
    return jour;
}
int Date::getMois(){
    return mois;
}

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


void Date::setMinute(int min){
    minute=min;

}

void Date::setJour(int j){
    jour=j;

}

void Date::setMois(int m){
    mois=m;

}

void Date::setAn(int a){
    an=a;
}

int Date::getAn(){
    return an;
}
