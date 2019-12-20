/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_4;
    QPushButton *acceuilprof;
    QPushButton *profil;
    QPushButton *message;
    QPushButton *aide;
    QLabel *label_2;
    QPushButton *deconnexion;
    QGraphicsView *photo;
    QPushButton *annonce;
    QPushButton *demande;
    QPushButton *afficheAnnonce;
    QLabel *label_3;
    QTextBrowser *textBrowser;
    QLabel *label;
    QPushButton *demandenevoi;
    QLabel *label_5;
    QPushButton *modif;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName(QStringLiteral("Profile"));
        Profile->resize(1079, 668);
        Profile->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(Profile);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 1081, 141));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(61, 88, 87);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(810, 40, 221, 51));
        label_4->setStyleSheet(QLatin1String("font: 30pt \"Umpush\";\n"
"color: rgb(255, 255, 255);"));
        label_4->setTextFormat(Qt::PlainText);
        label_4->setMargin(6);
        label_4->setIndent(-1);
        acceuilprof = new QPushButton(frame);
        acceuilprof->setObjectName(QStringLiteral("acceuilprof"));
        acceuilprof->setGeometry(QRect(200, 20, 101, 25));
        acceuilprof->setStyleSheet(QLatin1String("border: 2px solid rgb(255, 255, 255);\n"
"background-color: rgb(61, 88, 87);\n"
"color: rgb(255, 255, 255);"));
        profil = new QPushButton(frame);
        profil->setObjectName(QStringLiteral("profil"));
        profil->setGeometry(QRect(350, 20, 101, 25));
        profil->setStyleSheet(QLatin1String("border: 2px solid rgb(255, 255, 255);\n"
"background-color: rgb(61, 88, 87);\n"
"color: rgb(255, 255, 255);"));
        message = new QPushButton(frame);
        message->setObjectName(QStringLiteral("message"));
        message->setGeometry(QRect(500, 20, 101, 25));
        message->setStyleSheet(QLatin1String("border: 2px solid rgb(255, 255, 255);\n"
"background-color: rgb(61, 88, 87);\n"
"color: rgb(255, 255, 255);"));
        aide = new QPushButton(frame);
        aide->setObjectName(QStringLiteral("aide"));
        aide->setGeometry(QRect(650, 20, 101, 25));
        aide->setStyleSheet(QLatin1String("border: 2px solid rgb(255, 255, 255);\n"
"background-color: rgb(61, 88, 87);\n"
"color: rgb(255, 255, 255);"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 271, 61));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 21pt \"Ubuntu\";"));
        deconnexion = new QPushButton(frame);
        deconnexion->setObjectName(QStringLiteral("deconnexion"));
        deconnexion->setGeometry(QRect(0, 110, 101, 25));
        deconnexion->setStyleSheet(QLatin1String("border: 2px solid rgb(61, 88, 87);\n"
"background-color: rgb(61, 88, 87);\n"
"color: rgb(50, 212, 212);"));
        photo = new QGraphicsView(centralwidget);
        photo->setObjectName(QStringLiteral("photo"));
        photo->setGeometry(QRect(6, 170, 141, 131));
        annonce = new QPushButton(centralwidget);
        annonce->setObjectName(QStringLiteral("annonce"));
        annonce->setGeometry(QRect(5, 320, 141, 25));
        annonce->setStyleSheet(QLatin1String("border: 2px solid rgb(61, 88, 87); \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(61, 88, 87);"));
        demande = new QPushButton(centralwidget);
        demande->setObjectName(QStringLiteral("demande"));
        demande->setGeometry(QRect(5, 350, 141, 25));
        demande->setStyleSheet(QLatin1String("border: 2px solid rgb(61, 88, 87); \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(61, 88, 87);"));
        afficheAnnonce = new QPushButton(centralwidget);
        afficheAnnonce->setObjectName(QStringLiteral("afficheAnnonce"));
        afficheAnnonce->setGeometry(QRect(5, 410, 141, 25));
        afficheAnnonce->setStyleSheet(QLatin1String("border: 2px solid rgb(61, 88, 87); \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(61, 88, 87);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(180, 170, 191, 61));
        label_3->setStyleSheet(QLatin1String("color:rgb(61, 88, 87); \n"
"font: 24pt \"Ubuntu\";\n"
""));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(180, 310, 491, 141));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 240, 67, 17));
        demandenevoi = new QPushButton(centralwidget);
        demandenevoi->setObjectName(QStringLiteral("demandenevoi"));
        demandenevoi->setGeometry(QRect(5, 380, 141, 25));
        demandenevoi->setStyleSheet(QLatin1String("border: 2px solid rgb(61, 88, 87); \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(61, 88, 87);"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 230, 91, 20));
        modif = new QPushButton(centralwidget);
        modif->setObjectName(QStringLiteral("modif"));
        modif->setGeometry(QRect(5, 440, 141, 25));
        modif->setStyleSheet(QLatin1String("border: 2px solid rgb(61, 88, 87); \n"
"background-color: rgb(255, 255, 255);\n"
"color: rgb(61, 88, 87);"));
        Profile->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Profile);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1079, 22));
        Profile->setMenuBar(menubar);
        statusbar = new QStatusBar(Profile);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Profile->setStatusBar(statusbar);

        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QMainWindow *Profile)
    {
        Profile->setWindowTitle(QApplication::translate("Profile", "MainWindow", 0));
        label_4->setText(QApplication::translate("Profile", "Trottipr\303\252t", 0));
        acceuilprof->setText(QApplication::translate("Profile", "Accueil", 0));
        profil->setText(QApplication::translate("Profile", "Mon Profile", 0));
        message->setText(QApplication::translate("Profile", "Message", 0));
        aide->setText(QApplication::translate("Profile", "Aide", 0));
        label_2->setText(QApplication::translate("Profile", "Bonjour Login !", 0));
        deconnexion->setText(QApplication::translate("Profile", "Deconnexion", 0));
        annonce->setText(QApplication::translate("Profile", "Ajouter Annonce", 0));
        demande->setText(QApplication::translate("Profile", "Demandes en cours", 0));
        afficheAnnonce->setText(QApplication::translate("Profile", "Mes annonces", 0));
        label_3->setText(QApplication::translate("Profile", "Login ", 0));
        textBrowser->setHtml(QApplication::translate("Profile", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; color:#3d5857;\">Minibio</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:24pt; color:#3d5857;\"><br /></p></body></html>", 0));
        label->setText(QApplication::translate("Profile", "Details ...", 0));
        demandenevoi->setText(QApplication::translate("Profile", "Demandes envoy\303\251", 0));
        label_5->setText(QApplication::translate("Profile", "PHOTO", 0));
        modif->setText(QApplication::translate("Profile", "Modifier", 0));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
