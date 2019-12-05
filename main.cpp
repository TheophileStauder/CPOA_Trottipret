#include "mainwindow.h"
#include "compte.h"
#include "gestionnairecomptes.h"
#include <iostream>
#include <QApplication>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Trottipret");
     w.show();
    return a.exec();
}
