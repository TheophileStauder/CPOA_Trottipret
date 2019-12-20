/********************************************************************************
** Form generated from reading UI file 'annoncewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANNONCEWINDOW_H
#define UI_ANNONCEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnnonceWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_4;
    QPushButton *acceuil;
    QPushButton *profil;
    QPushButton *message;
    QPushButton *aide;
    QLabel *label_2;
    QPushButton *deconnexion;
    QDateEdit *dateEdit;
    QLineEdit *pass;
    QPushButton *connexion;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label;
    QGroupBox *groupBox;
    QScrollBar *verticalScrollBar;
    QComboBox *comboBox;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *AnnonceWindow)
    {
        if (AnnonceWindow->objectName().isEmpty())
            AnnonceWindow->setObjectName(QStringLiteral("AnnonceWindow"));
        AnnonceWindow->resize(1079, 668);
        AnnonceWindow->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"\n"
""));
        centralwidget = new QWidget(AnnonceWindow);
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
        acceuil = new QPushButton(frame);
        acceuil->setObjectName(QStringLiteral("acceuil"));
        acceuil->setGeometry(QRect(200, 20, 101, 25));
        acceuil->setStyleSheet(QLatin1String("border: 2px solid rgb(255, 255, 255);\n"
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
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(10, 220, 171, 26));
        dateEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        dateEdit->setDateTime(QDateTime(QDate(2019, 12, 4), QTime(0, 0, 12)));
        dateEdit->setMinimumDateTime(QDateTime(QDate(2019, 12, 4), QTime(0, 0, 12)));
        pass = new QLineEdit(centralwidget);
        pass->setObjectName(QStringLiteral("pass"));
        pass->setGeometry(QRect(230, 220, 181, 25));
        pass->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        pass->setEchoMode(QLineEdit::Normal);
        connexion = new QPushButton(centralwidget);
        connexion->setObjectName(QStringLiteral("connexion"));
        connexion->setGeometry(QRect(450, 220, 89, 25));
        connexion->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 200, 141, 17));
        label_3->setStyleSheet(QStringLiteral("color: rgb(61, 88, 87);"));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(230, 200, 141, 17));
        label_7->setStyleSheet(QLatin1String("color: rgb(61, 88, 87);\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 150, 111, 51));
        label->setStyleSheet(QLatin1String("font: 57 20pt \"Ubuntu\";\n"
"color: rgb(61, 88, 87);"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 250, 741, 361));
        groupBox->setStyleSheet(QLatin1String("border: 2px solid rgb(61, 88, 87);\n"
""));
        verticalScrollBar = new QScrollBar(groupBox);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(720, 0, 21, 361));
        verticalScrollBar->setStyleSheet(QStringLiteral("background-color:rgb(61, 88, 87);"));
        verticalScrollBar->setOrientation(Qt::Vertical);
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(660, 220, 86, 25));
        AnnonceWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(AnnonceWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        AnnonceWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(AnnonceWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1079, 22));
        AnnonceWindow->setMenuBar(menubar);

        retranslateUi(AnnonceWindow);

        QMetaObject::connectSlotsByName(AnnonceWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AnnonceWindow)
    {
        AnnonceWindow->setWindowTitle(QApplication::translate("AnnonceWindow", "MainWindow", 0));
        label_4->setText(QApplication::translate("AnnonceWindow", "Trottipr\303\252t", 0));
        acceuil->setText(QApplication::translate("AnnonceWindow", "Accueil", 0));
        profil->setText(QApplication::translate("AnnonceWindow", "Mon Profile", 0));
        message->setText(QApplication::translate("AnnonceWindow", "Message", 0));
        aide->setText(QApplication::translate("AnnonceWindow", "Aide", 0));
        label_2->setText(QApplication::translate("AnnonceWindow", "Bonjour Login !", 0));
        deconnexion->setText(QApplication::translate("AnnonceWindow", "Deconnexion", 0));
        pass->setText(QString());
        connexion->setText(QApplication::translate("AnnonceWindow", "Rechercher", 0));
        label_3->setText(QApplication::translate("AnnonceWindow", "Date", 0));
        label_7->setText(QApplication::translate("AnnonceWindow", "Ville", 0));
        label->setText(QApplication::translate("AnnonceWindow", "Annonce", 0));
        groupBox->setTitle(QString());
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("AnnonceWindow", "Filtrer", 0)
         << QApplication::translate("AnnonceWindow", "Prix le plus bas", 0)
         << QApplication::translate("AnnonceWindow", "Recent", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class AnnonceWindow: public Ui_AnnonceWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANNONCEWINDOW_H
