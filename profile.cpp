#include "profile.h"
#include "ui_profile.h"
#include "annoncewindow.h"
#include "mainwindow.h"
#include "messagerie.h"
#include <QMessageBox>
#include  <QFileDialog>
#include "dialog.h"

Profile::Profile(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profile)
{
    ui->setupUi(this);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::on_acceuilprof_clicked()
{
    hide();
    annonce=new AnnonceWindow(this);
    annonce->show();
}

void Profile::on_deconnexion_clicked()
{
    hide();
    win=new MainWindow(this);
    win->show();
}

void Profile::on_aide_clicked()
{
    QMessageBox::information(this,"Pour nous contancter : ","<br /> La directrice Maela :   @ <br /> <br />  L'assitante Nada : @ <br /> <br /> L'esclave Théophile : @");
}

void Profile::on_message_clicked()
{
    hide();
    mess=new Messagerie(this);
    mess->show();
}

void Profile::on_annonce_clicked()
{
    dialog=new Dialog(this);
    dialog->setDb(myDb);
    dialog->setId(IdIzly) ;
    dialog->show();

}

void Profile::on_demande_clicked()
{
    QMessageBox::information(this,"Mes demandes en cours : ","<br />Ici les demande reçu");
}

void Profile::on_modif_clicked()
{
    QMessageBox::information(this,"Modif profil : ","<br />Ici pour modifier profil");
}

void Profile::on_demandenevoi_clicked()
{
     QMessageBox::information(this,"Demande envoyé : ","<br />Ici mes demandes de pret");
}


void Profile::on_afficheAnnonce_clicked()
{

    QMessageBox::information(this,"Mes annonces : ","<br />Ici mes annonces de pret");
}

void Profile::setDb(DbManager db){
    myDb = db ;
}
void Profile::setId(QString id){
    IdIzly = id ;
}
