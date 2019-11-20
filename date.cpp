#include "date.h"
#include <iostream>

Date::Date()
{
//rien
}





int Date::getHeure(){
    return heure;
}
int Date::getMinute(){
    return minute;
}


std::string Date::getJour(){
    return jour;
}
std::string Date::getMois(){
    return mois;
}




void Date::setMinute(int min){
    minute=min;

}

void Date::setJour(std::string j){
    jour=j;

}

void Date::setMois(std::string m){
    mois=m;

}

void Date::setAn(std::string a){
    an=a;
}

std::string Date::getAn(){
    return an;
}
