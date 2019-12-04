#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include "gestionnairecomptes.h"
#include "compte.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("./img/pic.png");
    ui->label_pic->setPixmap(pix);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connexion_clicked()
{
    QString adr,pass;
    adr=ui->adress->text();
     pass=ui->pass->text();
     if(adr=="" || pass=="")
     {
      QMessageBox::information(this,"Connexion non réussie","Veuillez remplir tout les champs");
}
     else{
  QMessageBox::information(this,"Connexion réussie","Vous êtes connecté");
}
}

void MainWindow::on_inscription_clicked()
{
    QString nom,prenom,mail,izly,mdp1,mdp2;
    nom=ui->nom->text();
    prenom=ui->prenom->text();
    mail=ui->mail->text();
    izly=ui->izly->text();
    mdp1=ui->mdp1->text();
    mdp2=ui->mdp2->text();

    if(nom=="" || prenom=="" || mail=="" || izly=="" || mdp1=="" || mdp2=="")
    {
   QMessageBox::information(this,"Inscription non réussie","Veuillez remplir tout les champs");
   }


    if(mdp1 != mdp2){
        QMessageBox::information(this,"Inscription non réussie","Mots de passe différents");
   }
    else
     {
        GestionnaireComptes* g = GestionnaireComptes::getInstance();
        if(!g->isEmailValide(mail.toStdString())){
            QMessageBox::information(this,"Inscription non réussie","Adresse mail non valide");
        }
        if(!g->verifierCompteAdr(mail.toStdString())){
            QMessageBox::information(this,"Inscription non réussie","Adresse mail deja utilisee");
        }
        if(!g->verifierCompteIzly(izly.toStdString())){
            QMessageBox::information(this,"Inscription non réussie","Identifiant deja utilise");
        }
        if(g->verifierCompteIzly(izly.toStdString()) && g->verifierCompteAdr(mail.toStdString()) && g->isEmailValide(mail.toStdString())){
         Compte compte(prenom.toStdString(), nom.toStdString(), mail.toStdString(), izly.toStdString(), mdp1.toStdString()) ;
         QMessageBox::information(this,"Inscription réussie","Vous êtes inscrit maintenant ");
        }
     }
}

