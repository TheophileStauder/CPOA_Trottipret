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
    DbManager monDbManager("compteTest.db");

    QApplication a(argc, argv);
        MainWindow w;
        w.setWindowTitle("Trottipret");
        w.setDb(monDbManager);
        w.show();
        return a.exec();


}
