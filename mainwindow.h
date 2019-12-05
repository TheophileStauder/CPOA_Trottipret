#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dbmanager.h"
#include <annoncewindow.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setDb(DbManager d) ;


private slots:
    void on_connexion_clicked();
    void on_inscription_clicked();

private:
    Ui::MainWindow *ui;
    DbManager db ;
    AnnonceWindow *annonce;

};

#endif // MAINWINDOW_H

