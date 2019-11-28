#include "trottipret.h"
#include <QApplication>
#include "annonce.h"
#include "date.h"
#include "QDebug"

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
     MainWindow w;
     w.setWindowTitle("Trottipret");
    w.show();
    //anneDemandeEmprunt<anneeEmpruntPossible false sinon true
     Annonce c;
     Date d;
     d.setAn(2019); // anne demande
     d.setJour(21); // jours demande
     d.setMois(1); // mois demande
     Date emprunt;
     emprunt.setAn(2019); // annee possible
     emprunt.setJour(21); // jours possible
     emprunt.setMois(1); // mois possible
     c.setDateEmprun(emprunt);
     qInfo("Hello result %d ",c.empruntPossible(d));
    /*return 0;*/
    return a.exec();
}
