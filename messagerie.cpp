#include "messagerie.h"
#include "profile.h"
#include "annoncewindow.h"
#include "mainwindow.h"
#include "ui_messagerie.h"
#include <QMessageBox>

Messagerie::Messagerie(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Messagerie)
{
    ui->setupUi(this);
}

Messagerie::~Messagerie()
{
    delete ui;
}

void Messagerie::on_acceuilprof_clicked()
{
    hide();
    annonce=new AnnonceWindow(this);
    annonce->show();
}

void Messagerie::on_profil_clicked()
{
    hide();
    p=new Profile(this);
    p->show();
}

void Messagerie::on_aide_clicked()
{
    QMessageBox::information(this,"Pour nous contacter : ","<br /> La directrice Maela :   @ <br /> <br />  L'assitante Nada : @ <br /> <br /> L'esclave Théophile : @");
}

void Messagerie::on_deconnexion_clicked()
{
    hide();
    win=new MainWindow(this);
    win->show();
}
