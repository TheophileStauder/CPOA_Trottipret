#include "mainwindow.h"
#include "compte.h"
#include "gestionnairecomptes.h"
#include <iostream>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
   // QApplication a(argc, argv);
    //MainWindow w;
    //w.show();
    //    Compte(std::string p, std::string  n, std::string adrM, std::string idI, std::string mdpI, GestionnaireComptes g) ;

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

    return 0 ;
}
