#include "annoncewindow.h"
#include "ui_annoncewindow.h"
#include "mainwindow.h"
#include "profile.h"
#include "messagerie.h"
#include <QMessageBox>


AnnonceWindow::AnnonceWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AnnonceWindow)
{
    ui->setupUi(this);
}

AnnonceWindow::~AnnonceWindow()
{
    delete ui;
}



void AnnonceWindow::on_deconnexion_clicked()
{
    hide();
    win=new MainWindow(this);
    win->show();
}


void AnnonceWindow::on_message_clicked()
{
    hide();
    mess=new Messagerie(this);
    mess->show();
}

void AnnonceWindow::on_aide_clicked()
{
   QMessageBox::information(this,"Pour nous contancter : ","<br /> La directrice Maela :   @ <br /> <br />  L'assitante Nada : @ <br /> <br /> L'esclave Théophile : @");

}

void AnnonceWindow::on_profil_clicked()
{
    hide();
    p=new Profile(this);
    p->show();
}
