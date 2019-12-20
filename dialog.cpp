#include "dialog.h"
#include "ui_dialog.h"
#include  <QFileDialog>
#include  <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Ajout Annonce");
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_ajoutphoto_clicked()
{
   QString file_name=QFileDialog::getOpenFileName(this,"Open a file","C://");
    QMessageBox::information(this,"..",file_name);
}

/**
 * @brief Dialog::on_ajouter_clicked
 */
void Dialog::on_ajouter_clicked()
{
    QString ville,adresse,dateDeb,dateFin,prix;
    ville=ui->villeEnt->text();
    adresse=ui->adr->text();
    dateDeb=ui->dateDebEnt->text();
    dateFin=ui->dateFinEnt->text();
    prix=ui->prix->text();


    if(ville=="" || adresse=="" || dateDeb=="" || dateFin=="" || prix=="")
    {
        QMessageBox::information(this,"Annonce non ajoutée","Veuillez remplir tout les champs");
    }
    else{
        //ajouter une annonce dans la base
        myDb.ajouterAnnonce(idIzly, ville, adresse, dateDeb, dateFin, prix) ;
        QMessageBox::information(this,"Annonce ajoutée","Votre annonce a été ajoutée en succes");
        Dialog::close();
    }

}

void Dialog::on_annuler_clicked()
{
   Dialog::close();
}

void Dialog::setDb(DbManager db){
    myDb = db ;
}

void Dialog::setId(QString id){
    idIzly = id ;
}
