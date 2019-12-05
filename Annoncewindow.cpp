#include "annoncewindow.h"
#include "ui_annoncewindow.h"
#include <QMessageBox>

annoncewindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("../CPOA_Trottipret-master/img/pic.png");
    ui->label_pic->setPixmap(pix);

}

annoncewindow::~MainWindow()
{
    delete ui;
}

void annoncewindow::on_connexion_clicked()
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

void annoncewindow::on_inscription_clicked()
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
     else
     {
            QMessageBox::information(this,"Inscription réussie","Vous êtes inscrit maintenant ");
     }
}


