#ifndef ANNONCEWINDOW_H
#define ANNONCEWINDOW_H

#include <QMainWindow>


class MainWindow;
class Profile;
class Messagerie;


namespace Ui {
class AnnonceWindow;
}

class AnnonceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AnnonceWindow(QWidget *parent = 0);
    ~AnnonceWindow();

private slots:
    void on_deconnexion_clicked();

    void on_message_clicked();

    void on_aide_clicked();

    void on_profil_clicked();

private:
    Ui::AnnonceWindow *ui;
      MainWindow *win;
      Profile *p;
      Messagerie *mess;
};

#endif // ANNONCEWINDOW_H
