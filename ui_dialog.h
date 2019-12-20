/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QLineEdit *villeEnt;
    QLineEdit *dateDebEnt;
    QLineEdit *dateFinEnt;
    QLineEdit *adr;
    QLineEdit *prix;
    QLabel *ville;
    QLabel *dateDeb;
    QLabel *datefin;
    QLabel *adress;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *ajoutphoto;
    QTextEdit *desc;
    QPushButton *ajouter;
    QPushButton *annuler;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(532, 558);
        Dialog->setStyleSheet(QStringLiteral("background-color:rgb(255,255, 255);"));
        label = new QLabel(Dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 281, 51));
        label->setStyleSheet(QLatin1String("background-color: rgb(61, 88, 87);\n"
"font: 57 24pt \"Ubuntu\";\n"
"color:rgb(255,255, 255);"));
        villeEnt = new QLineEdit(Dialog);
        villeEnt->setObjectName(QStringLiteral("villeEnt"));
        villeEnt->setGeometry(QRect(200, 90, 131, 25));
        villeEnt->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        villeEnt->setEchoMode(QLineEdit::Normal);
        dateDebEnt = new QLineEdit(Dialog);
        dateDebEnt->setObjectName(QStringLiteral("dateDebEnt"));
        dateDebEnt->setGeometry(QRect(200, 130, 131, 25));
        dateDebEnt->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        dateDebEnt->setEchoMode(QLineEdit::Normal);
        dateFinEnt = new QLineEdit(Dialog);
        dateFinEnt->setObjectName(QStringLiteral("dateFinEnt"));
        dateFinEnt->setGeometry(QRect(200, 170, 131, 25));
        dateFinEnt->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        dateFinEnt->setEchoMode(QLineEdit::Normal);
        adr = new QLineEdit(Dialog);
        adr->setObjectName(QStringLiteral("adr"));
        adr->setGeometry(QRect(200, 210, 131, 25));
        adr->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        adr->setEchoMode(QLineEdit::Normal);
        prix = new QLineEdit(Dialog);
        prix->setObjectName(QStringLiteral("prix"));
        prix->setGeometry(QRect(200, 250, 131, 25));
        prix->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        prix->setEchoMode(QLineEdit::Normal);
        ville = new QLabel(Dialog);
        ville->setObjectName(QStringLiteral("ville"));
        ville->setGeometry(QRect(60, 90, 51, 31));
        ville->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Vemana2000\";\n"
""));
        dateDeb = new QLabel(Dialog);
        dateDeb->setObjectName(QStringLiteral("dateDeb"));
        dateDeb->setGeometry(QRect(10, 130, 161, 31));
        dateDeb->setStyleSheet(QStringLiteral("font: 75 italic 10pt \"Vemana2000\";"));
        datefin = new QLabel(Dialog);
        datefin->setObjectName(QStringLiteral("datefin"));
        datefin->setGeometry(QRect(10, 170, 151, 31));
        datefin->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Vemana2000\";\n"
""));
        adress = new QLabel(Dialog);
        adress->setObjectName(QStringLiteral("adress"));
        adress->setGeometry(QRect(10, 210, 151, 31));
        adress->setStyleSheet(QStringLiteral("font: 75 italic 10pt \"Vemana2000\";"));
        label_6 = new QLabel(Dialog);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 250, 121, 31));
        label_6->setStyleSheet(QStringLiteral("font: 75 italic 10pt \"Vemana2000\";"));
        label_7 = new QLabel(Dialog);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 300, 141, 17));
        label_7->setStyleSheet(QLatin1String("font: 75 italic 10pt \"Vemana2000\";\n"
""));
        label_8 = new QLabel(Dialog);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 350, 141, 17));
        ajoutphoto = new QPushButton(Dialog);
        ajoutphoto->setObjectName(QStringLiteral("ajoutphoto"));
        ajoutphoto->setGeometry(QRect(180, 300, 281, 25));
        ajoutphoto->setStyleSheet(QStringLiteral("background-color: rgb(61, 88, 87);"));
        desc = new QTextEdit(Dialog);
        desc->setObjectName(QStringLiteral("desc"));
        desc->setGeometry(QRect(170, 370, 301, 151));
        ajouter = new QPushButton(Dialog);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(380, 50, 89, 25));
        ajouter->setStyleSheet(QLatin1String("background-color: rgb(61, 88, 87);\n"
"color:rgb(255,255, 255);"));
        annuler = new QPushButton(Dialog);
        annuler->setObjectName(QStringLiteral("annuler"));
        annuler->setGeometry(QRect(380, 90, 89, 25));
        annuler->setStyleSheet(QLatin1String("background-color: rgb(61, 88, 87);\n"
"color:rgb(255,255, 255);"));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", 0));
        label->setText(QApplication::translate("Dialog", "Nouvelle Annonce", 0));
        villeEnt->setText(QString());
        dateDebEnt->setText(QString());
        dateFinEnt->setText(QString());
        adr->setText(QString());
        prix->setText(QString());
        ville->setText(QApplication::translate("Dialog", "Ville", 0));
        dateDeb->setText(QApplication::translate("Dialog", "Date debut disponiblit\303\251", 0));
        datefin->setText(QApplication::translate("Dialog", "Date fin de disponibilit\303\251", 0));
        adress->setText(QApplication::translate("Dialog", "Adresse retrait et retour", 0));
        label_6->setText(QApplication::translate("Dialog", "Tarif", 0));
        label_7->setText(QApplication::translate("Dialog", "Photo (optionnelle)", 0));
        label_8->setText(QApplication::translate("Dialog", "Descrtiption", 0));
        ajoutphoto->setText(QApplication::translate("Dialog", "Ajouter photo", 0));
        ajouter->setText(QApplication::translate("Dialog", "Ajouter", 0));
        annuler->setText(QApplication::translate("Dialog", "Annuler", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
