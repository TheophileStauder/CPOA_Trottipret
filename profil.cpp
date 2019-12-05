#include "profil.h"
#include "ui_profil.h"

Profil::Profil(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Profil)
{
    ui->setupUi(this);
}

Profil::~Profil()
{
    delete ui;
}

void Profil::on_acceuil_clicked()
{
    hide();
}
