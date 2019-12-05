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

    int anneDemandeEmprunt=date.getAn();
    int anneeEmpruntPossible=getDateRetrait().getAn();
    int jourDemandeEmprunt=date.getJour();
    int jourEmpruntPossible=getDateRetrait().getJour();
    int moisDemandeEmprunt=date.getMois();
    int moisEmpruntPossible=getDateRetrait().getMois();

    bool tmp=true;
    if(anneDemandeEmprunt<anneeEmpruntPossible){
       // std::cout << "prem condition "<< tmp << anneDemandeEmprunt << anneeEmpruntPossible ;
        tmp=false;
    }

    if(tmp==true){
    if(moisDemandeEmprunt<moisEmpruntPossible){
        tmp=false;
      }
    }

   if(tmp==true){
     if(jourDemandeEmprunt<jourEmpruntPossible){
      tmp=false;
   }
   }

    return tmp;
}


int Annonce::getId(){
    return id ;
}
