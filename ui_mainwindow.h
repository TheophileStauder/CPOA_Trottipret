/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QLabel *label_3;
    QPushButton *connexion;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *adress;
    QLineEdit *pass;
    QLabel *label_12;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *inscription;
    QLabel *label_9;
    QLineEdit *nom;
    QLineEdit *prenom;
    QLineEdit *mail;
    QLineEdit *izly;
    QLabel *label_pic;
    QLabel *label_10;
    QLabel *label_11;
    QLineEdit *mdp1;
    QLineEdit *mdp2;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1079, 668);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, -10, 1101, 131));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(61, 88, 87);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(265, 60, 121, 17));
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        connexion = new QPushButton(frame);
        connexion->setObjectName(QStringLiteral("connexion"));
        connexion->setGeometry(QRect(470, 90, 89, 25));
        connexion->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 196, 17));
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(780, 40, 221, 51));
        label->setStyleSheet(QLatin1String("font: 30pt \"Umpush\";\n"
"color: rgb(255, 255, 255);"));
        label->setTextFormat(Qt::PlainText);
        label->setMargin(6);
        label->setIndent(-1);
        adress = new QLineEdit(frame);
        adress->setObjectName(QStringLiteral("adress"));
        adress->setGeometry(QRect(10, 90, 201, 25));
        adress->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pass = new QLineEdit(frame);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setGeometry(QRect(260, 90, 181, 25));
        pass->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pass->setEchoMode(QLineEdit::Password);
        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(180, 20, 111, 21));
        label_12->setStyleSheet(QLatin1String("font: 57 italic 19pt \"Ubuntu\";\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(470, 190, 231, 51));
        label_4->setStyleSheet(QStringLiteral("font: 57 20pt \"Ubuntu\";"));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(510, 250, 71, 21));
        label_5->setStyleSheet(QStringLiteral("background-color: rgb(203, 244, 239);"));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(520, 300, 42, 22));
        label_6->setStyleSheet(QLatin1String("font: 14pt \"Ubuntu\";\n"
""));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(510, 340, 68, 22));
        label_7->setStyleSheet(QLatin1String("font: 14pt \"Ubuntu\";\n"
""));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(470, 380, 110, 22));
        label_8->setStyleSheet(QLatin1String("font: 14pt \"Ubuntu\";\n"
""));
        inscription = new QPushButton(centralWidget);
        inscription->setObjectName(QStringLiteral("inscription"));
        inscription->setGeometry(QRect(840, 570, 80, 25));
        QPalette palette;
        QBrush brush(QColor(136, 138, 133, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        inscription->setPalette(palette);
        inscription->setStyleSheet(QStringLiteral("background-color: rgb(136, 138, 133);"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(460, 420, 127, 22));
        label_9->setStyleSheet(QLatin1String("font: 14pt \"Ubuntu\";\n"
""));
        nom = new QLineEdit(centralWidget);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(600, 300, 142, 25));
        nom->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        prenom = new QLineEdit(centralWidget);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(600, 340, 142, 25));
        prenom->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        mail = new QLineEdit(centralWidget);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setGeometry(QRect(600, 380, 142, 25));
        mail->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        izly = new QLineEdit(centralWidget);
        izly->setObjectName(QStringLiteral("izly"));
        izly->setGeometry(QRect(600, 420, 142, 25));
        izly->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        label_pic = new QLabel(centralWidget);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(60, 280, 211, 161));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(460, 460, 115, 22));
        label_10->setStyleSheet(QLatin1String("font: 14pt \"Ubuntu\";\n"
""));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(380, 500, 203, 20));
        label_11->setStyleSheet(QLatin1String("font: 13pt \"Ubuntu\";\n"
""));
        mdp1 = new QLineEdit(centralWidget);
        mdp1->setObjectName(QStringLiteral("mdp1"));
        mdp1->setGeometry(QRect(600, 460, 142, 25));
        mdp1->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        mdp1->setEchoMode(QLineEdit::Password);
        mdp2 = new QLineEdit(centralWidget);
        mdp2->setObjectName(QStringLiteral("mdp2"));
        mdp2->setGeometry(QRect(600, 500, 142, 25));
        mdp2->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        mdp2->setEchoMode(QLineEdit::Password);
        MainWindow->setCentralWidget(centralWidget);
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_7->raise();
        label_8->raise();
        inscription->raise();
        label_9->raise();
        nom->raise();
        prenom->raise();
        mail->raise();
        izly->raise();
        label_pic->raise();
        label_10->raise();
        label_11->raise();
        mdp1->raise();
        mdp2->raise();
        frame->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1079, 22));
        MainWindow->setMenuBar(menuBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_3->setText(QApplication::translate("MainWindow", "Mot de passe", 0));
        connexion->setText(QApplication::translate("MainWindow", "Connexion", 0));
        label_2->setText(QApplication::translate("MainWindow", "Adresse e-mail ou identifiant", 0));
        label->setText(QApplication::translate("MainWindow", "Trottipr\303\252t", 0));
        pass->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Bienvenue", 0));
        label_4->setText(QApplication::translate("MainWindow", "Pas encore inscrit ?", 0));
        label_5->setText(QApplication::translate("MainWindow", "C'est ici :", 0));
        label_6->setText(QApplication::translate("MainWindow", "Nom", 0));
        label_7->setText(QApplication::translate("MainWindow", "Pr\303\251nom", 0));
        label_8->setText(QApplication::translate("MainWindow", "Adresse Mail", 0));
        inscription->setText(QApplication::translate("MainWindow", "Inscription", 0));
        label_9->setText(QApplication::translate("MainWindow", "Identifant IZLY", 0));
        label_pic->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "Mot de passe", 0));
        label_11->setText(QApplication::translate("MainWindow", "Confirmer le mot de passe", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
