#ifndef DATE_H
#define DATE_H
#include <iostream>


class Date
{
public:
    Date();
    void setMois(std::string mois);//pour fixer le mois
    std::string getMois();//rend le mois

    void setJour (std::string jour);//pour fixer le jour
    std::string getJour();//rend le jour

    int getHeure();//rend la valeur de l'heure

    void setMinute(int min);//pour fixer les minutes
    int getMinute();//rend la valeur des minutes

    void setAn(std::string an);
    std::string getAn();

private:
    std::string  mois;
    std::string jour;
    std::string an;
    int heure;
    int minute;
};

#endif // DATE_H
