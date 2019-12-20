#ifndef MESSAGERIE_H
#define MESSAGERIE_H

#include <QMainWindow>

class MainWindow;
class Profile;
class AnnonceWindow;

namespace Ui {
class Messagerie;

}

class Messagerie : public QMainWindow
{
    Q_OBJECT

public:
    explicit Messagerie(QWidget *parent = 0);
    ~Messagerie();

private slots:
    void on_acceuilprof_clicked();

    void on_profil_clicked();

    void on_aide_clicked();

    void on_deconnexion_clicked();

private:
    Ui::Messagerie *ui;
    MainWindow *win;
    Profile *p;
    AnnonceWindow *annonce;
};

#endif // MESSAGERIE_H
