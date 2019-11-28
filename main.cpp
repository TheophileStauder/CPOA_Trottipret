#include "mainwindow.h"
#include "compte.h"
#include "date.h"
#include "gestionnairecomptes.h"
#include "gestionnaireannonce.h"
#include <iostream>
#include <QApplication>
using namespace std;


/** @brief Un main basique qui permet de tester les différentes fonctionnalités
 ** spécifiées pour la première itérations :
 ** Pour cette version uniquement la création de compte
 ** @version 1a
 **/
int main(int argc, char *argv[])
{
   // QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, GestionnaireComptes g) ;

    // Creation d'un compte sur terminal
    std::string prenom ;
    std::cout << "Saisir votre prenom : " ;
    std::cin >> prenom ;

    std::string nom ;
    std::cout << "Saisir votre nom : ";
    std::cin >> nom ;

    std::string adrM ;
    std::cout << "Saisir votre adresse mail : ";
    std::cin >> adrM ;

    std::string idIzly ;
    std::cout << "Saisir votre identifiant Izly : " ;
    std::cin >> idIzly ;

    std::string mdp ;
    std::cout << "Saisir votre mot de passe Izly : " ;
    std::cin >> mdp ;


    GestionnaireComptes g ;

    Compte compte(prenom, nom, adrM, idIzly, mdp, g) ;

    //test ajouter une annonce
    //    Annonce(std::string descr, std::string v, float t, Date retrait, Date retour, int i);

    std::string descr ;
    std::cout << "Saisir une description : " ;
    std::cin >> descr ;

    std::string ville ;
    std::cout << "Saisir une ville : " ;
    std::cin >> ville ;

   /* float tarif ;
    std::cout << "Saisir un tarif horaire : " ;
    std::cin >> tarif ;*/

    Date date1 ;
    date1.setJour(25);
    date1.setMois(9);
    date1.setAn(2019);
    date1.setMinute(30);
    date1.setHeure(14);

    Date date2 ;
    date2.setJour(26);
    date2.setMois(9);
    date2.setAn(2019);
    date2.setMinute(30);
    date2.setHeure(14);

    GestionnaireAnnonce ga ;
    Annonce annonce(descr,ville, 50.0, date1, date2, ga) ;

    return 0 ;
}
