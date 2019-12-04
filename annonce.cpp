#include "annonce.h"
#include <iostream>


/** @brief La classe Annonce est la classe qui contient les informations relatives à une trotinette qui peut être prêter
 * (dates,tarif,modèle,etc etc)
 **
 ** Elle contient deux constructeurs, un vide,un qui rempli les champs privés
 **
 ** Elle contient 2 méthodes (sans compter les getter et setter basiques),
 **  @ref verifierCompte(), @ref setBio()
 **
 ** @version 1d
 **/
Annonce::Annonce(){}

/// @brief Constructeur qui rempli les champs de la classe
///
/// @param descr la description
/// @param v le nom de la ville
/// @param t le tarif horaire
/// @param retrait la date au plus tôt pour un début d'emprunt
/// @param retour la date de fin de l'emprunt
Annonce::Annonce(std::string descr, std::string v, float t, Date retrait, Date retour, GestionnaireAnnonce& g){
    description = descr ;
    ville = v ;
    tarif = t ;
    dateRetrait = retrait ;
    dateRetour = retour ;
    id = g.getId() ;
    g.ajouterAnnonce(*this); // ajouter cette annonce dans le gestionnaire

}
/// @brief Getter sur la description de l'annonce
///
/// @return  la description
std::string Annonce::getDescr(){
    return description;
}

/// @brief Getter sur le tarif horaire de l'annonce
///
/// @return  le tarif
float Annonce::getTarif(){
    return tarif;
}

/// @brief Setter de la description de l'annonce
///
/// @param descr la nouvelle desccription
void Annonce::setDescription(std::string descr){
    description=descr;

}

///@brief Setter sur le tarif horaire de l'annonce
///
/// @param prix le tarif horaire
void Annonce::setTarif(float prix){
    tarif=prix;
}

/// @brief Setter de la date de début d'emprunt
///
/// @param dateEmp la date de début d'emprunt
void Annonce::setDateEmprunt (Date dateEmp){
    dateRetrait=dateEmp;
}

/// @brief Getter de la date de debut d'emprunt
///
/// @return la date de debut d'emprunt
Date Annonce::getDateRetrait(){
    return dateRetrait;
}

/// @brief Getter de la date de fin d'emprunt
///
/// @return la date de fin d'emprunt
Date Annonce::getDateRetour(){
    return dateRetour;
}

/// @brief Getter du nom de la ville
///
/// @return la ville
std::string Annonce::getVille(){
    return ville;
}


/// @brief Methode booléenne qui renvoie si un emprunt est possible
/// pour un date donnée en paramètre ( vérifie que la date donnée
/// se situe entre les deux dates de l'annonce
///
/// @param date la date pour un début d'emprunt
///
/// @return booléen
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

/// @brief Getter de l'ID de l'annonce
///
/// @return id
int Annonce::getId(){
    return id ;
}


///@brief Affiche l'annonce sur la sortie standard
void Annonce::afficheAnnonce(){
    std::cout << "Annonce numéro : " << getId() << std::endl;
    std::cout << "\nDescription : " << getDescr() << std::endl;
    std::cout << "\nVille  : " << getVille() << std::endl;
    std::cout << "\nTarif horaire  : " << getTarif() << std::endl;
    std::cout << "\nDate de début d'emprunt : " << getDateRetrait().toString() << std::endl;
    std::cout << "\nDate de retour    : " << getDateRetour().toString() << std::endl;
    std::cout << "\n\n\n\n"<< std::endl;
}
