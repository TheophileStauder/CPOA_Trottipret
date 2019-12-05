#ifndef PROFIL_H
#define PROFIL_H

#include <QMainWindow>


namespace Ui {
class Profil;
}

class Profil : public QMainWindow
{
    Q_OBJECT

public:
    explicit Profil(QWidget *parent = 0);
    ~Profil();

private slots:
    void on_acceuil_clicked();

private:
    Ui::Profil *ui;
};

#endif // PROFIL_H
