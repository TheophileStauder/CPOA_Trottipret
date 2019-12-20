#ifndef PROFILE_H
#define PROFILE_H

#include <QMainWindow>
#include "dbmanager.h"
class AnnonceWindow;
class MainWindow;
class Messagerie;
class Dialog;

namespace Ui {
class Profile;
}

class Profile : public QMainWindow
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = 0);
    ~Profile();
    void setDb(DbManager db) ;
    void setId(QString id) ;

private slots:
    void on_acceuilprof_clicked();

    void on_deconnexion_clicked();

    void on_aide_clicked();

    void on_message_clicked();

    void on_annonce_clicked();

    void on_demande_clicked();

    void on_modif_clicked();

    void on_demandenevoi_clicked();

    void on_afficheAnnonce_clicked();

private:
    Ui::Profile *ui;
    AnnonceWindow *annonce;
     MainWindow *win;
     Messagerie *mess;
     Dialog *dialog;
     DbManager myDb ;
     QString IdIzly ;
};

#endif // PROFILE_H
