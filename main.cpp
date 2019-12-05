#include "mainwindow.h"
#include "compte.h"
#include "date.h"
#include "gestionnairecomptes.h"
#include "gestionnaireannonce.h"
#include "dbmanager.h"
#include "annonce.h"
#include <string.h>
#include <iostream>
#include <QApplication>
#include <vector>
#include <iostream>
#include <unistd.h>
#include <QSqlError>
#include <QSqlRecord>


//CREATE TABLE compte(idIzly integer primary key,nom text,prenom text,mdpIzly text,moyenneNote real,adresseMail text,miniBio text);
/** @brief Un main basique qui permet de tester les différentes fonctionnalités
 ** spécifiées pour la première itérations :
 ** Pour cette version uniquement la création de compte
 ** @version 1d
 **/
int main(int argc, char *argv[])
{

    /*Création de la base de donéee*/
    DbManager monDbManager("/home/profil/laconi3u/build-Trottipret-Desktop-Debug/compte2");

    // monDbManager.ajouterCompte("12","stauder","theo","tutu","1","voile@live.fr","coucou");
    //monDbManager.ajouterCompte("12","titi","theo","tutu","2","voile@live.fr","coucou");
    //monDbManager.ajouterCompte("13","str","tutu","tutu","2","voile@live.fr","coucou");
    //monDbManager.afficherCompte("13");
    //sleep(2);

    QApplication a(argc, argv);
        MainWindow w;
        w.setWindowTitle("Trottipret");
        w.setDb(monDbManager);
        w.show();
        return a.exec();


}
