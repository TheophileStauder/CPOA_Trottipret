/********************************************************************************
** Form generated from reading UI file 'messagerie.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MESSAGERIE_H
#define UI_MESSAGERIE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Messagerie
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
    QComboBox *comboBox;
    QGraphicsView *graphicsView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Messagerie)
    {
        if (Messagerie->objectName().isEmpty())
            Messagerie->setObjectName(QStringLiteral("Messagerie"));
        Messagerie->resize(1079, 668);
        centralwidget = new QWidget(Messagerie);
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
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(130, 210, 86, 25));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(130, 240, 571, 331));
        Messagerie->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Messagerie);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1079, 22));
        Messagerie->setMenuBar(menubar);
        statusbar = new QStatusBar(Messagerie);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Messagerie->setStatusBar(statusbar);

        retranslateUi(Messagerie);

        QMetaObject::connectSlotsByName(Messagerie);
    } // setupUi

    void retranslateUi(QMainWindow *Messagerie)
    {
        Messagerie->setWindowTitle(QApplication::translate("Messagerie", "MainWindow", 0));
        label_4->setText(QApplication::translate("Messagerie", "Trottipr\303\252t", 0));
        acceuilprof->setText(QApplication::translate("Messagerie", "Accueil", 0));
        profil->setText(QApplication::translate("Messagerie", "Mon Profile", 0));
        message->setText(QApplication::translate("Messagerie", "Message", 0));
        aide->setText(QApplication::translate("Messagerie", "Aide", 0));
        label_2->setText(QApplication::translate("Messagerie", "Bonjour Login !", 0));
        deconnexion->setText(QApplication::translate("Messagerie", "Deconnexion", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("Messagerie", "Re\303\247u", 0)
         << QApplication::translate("Messagerie", "Envoy\303\251e", 0)
         << QApplication::translate("Messagerie", "Archiver", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Messagerie: public Ui_Messagerie {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MESSAGERIE_H
