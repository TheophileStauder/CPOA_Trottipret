#ifndef DIALOG_H
#define DIALOG_H
#include "dbmanager.h"
#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    void setDb(DbManager db) ;
    void setId(QString id) ;

private slots:
    void on_ajoutphoto_clicked();

    void on_ajouter_clicked();

    void on_annuler_clicked();



private:
    Ui::Dialog *ui;
    DbManager myDb ;
    QString idIzly ;

};

#endif // DIALOG_H
