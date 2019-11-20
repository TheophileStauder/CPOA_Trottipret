#include "annonce.h"
#include <iostream>

Annonce::Annonce()
{
    //rien
}

Annonce::Annonce(std::string descr, std::string v, float t, Date retrait, Date retour, int i){
    description = descr ;
    ville = v ;
    tarif = t ;
    dateRetrait = retrait ;
    dateRetour = retour ;
    id = i ;
}

std::string Annonce::getDescr(){
    return description;
}

int Annonce::getTarif(){
    return tarif;
}

void Annonce::setDescription(std::string descr){
    description=descr;

}

void Annonce::setTarif(int prix){
    tarif=prix;

}

void Annonce::setDateEmprun (Date dateEmp){
    dateRetrait=dateEmp;
}

Date Annonce::getDateRetrait(){
    return dateRetrait;
}

std::string Annonce::getVille(){
    return ville;
}

bool Annonce::empruntPossible(Date date){
    //Ajouter une méthode dans date qui prend un date et comapre les deux date , retourne vrai si la premiere date est plus récente
    if((date.getAn().compare(getDateRetrait().getAn()))< 0){
        return true;
    }
}


int Annonce::getId(){
    return id ;
}
