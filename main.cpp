#include "mainwindow.h"
#include "compte.h"
#include "date.h"
#include "gestionnairecomptes.h"
#include "gestionnaireannonce.h"
#include "annonce.h"
#include <string.h>
#include <iostream>
#include <QApplication>
#include <vector>



/** @brief Un main basique qui permet de tester les différentes fonctionnalités
 ** spécifiées pour la première itérations :
 ** Pour cette version uniquement la création de compte
 ** @version 1d
 **/
int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
        MainWindow w;
        w.setWindowTitle("Trottipret");
         w.show();
        return a.exec();
}
