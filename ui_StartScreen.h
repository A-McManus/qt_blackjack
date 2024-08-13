/********************************************************************************
** Form generated from reading UI file 'StartScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTSCREEN_H
#define UI_STARTSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_StartScreen
{
public:
    QTextEdit *textEdit;
    QPushButton *START;
    QPushButton *Quit;
    QPushButton *StartRoulette;

    void setupUi(QDialog *StartScreen)
    {
        if (StartScreen->objectName().isEmpty())
            StartScreen->setObjectName(QString::fromUtf8("StartScreen"));
        StartScreen->resize(1017, 613);
        textEdit = new QTextEdit(StartScreen);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(33, 20, 931, 151));
        textEdit->setStyleSheet(QString::fromUtf8("font: 25 italic 50pt \"Ubuntu\";"));
        textEdit->setReadOnly(true);
        START = new QPushButton(StartScreen);
        START->setObjectName(QString::fromUtf8("START"));
        START->setGeometry(QRect(390, 227, 211, 101));
        START->setStyleSheet(QString::fromUtf8("font: 25 italic 22pt \"Ubuntu\";"));
        Quit = new QPushButton(StartScreen);
        Quit->setObjectName(QString::fromUtf8("Quit"));
        Quit->setGeometry(QRect(390, 380, 211, 111));
        Quit->setStyleSheet(QString::fromUtf8("font: 25 italic 28pt \"Ubuntu\";"));
        Quit->setIconSize(QSize(32, 32));
        StartRoulette = new QPushButton(StartScreen);
        StartRoulette->setObjectName(QString::fromUtf8("StartRoulette"));
        StartRoulette->setGeometry(QRect(630, 230, 211, 101));
        StartRoulette->setStyleSheet(QString::fromUtf8("font: 25 italic 22pt \"Ubuntu\";"));

        retranslateUi(StartScreen);
        QObject::connect(Quit, SIGNAL(clicked()), StartScreen, SLOT(close()));
        QObject::connect(START, SIGNAL(clicked()), StartScreen, SLOT(play()));
        QObject::connect(START, SIGNAL(clicked()), StartScreen, SLOT(close()));
        QObject::connect(StartRoulette, SIGNAL(clicked()), StartScreen, SLOT(playRoulette()));
        QObject::connect(StartRoulette, SIGNAL(clicked()), StartScreen, SLOT(close()));

        QMetaObject::connectSlotsByName(StartScreen);
    } // setupUi

    void retranslateUi(QDialog *StartScreen)
    {
        StartScreen->setWindowTitle(QCoreApplication::translate("StartScreen", "StartScreen", nullptr));
        textEdit->setHtml(QCoreApplication::translate("StartScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:50pt; font-weight:24; font-style:italic;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:72pt; font-weight:600; font-style:normal;\">BLACKJACK</span></p></body></html>", nullptr));
        START->setText(QCoreApplication::translate("StartScreen", "Play Blackjack", nullptr));
        Quit->setText(QCoreApplication::translate("StartScreen", "Quit", nullptr));
        StartRoulette->setText(QCoreApplication::translate("StartScreen", "Play Roulette", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StartScreen: public Ui_StartScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTSCREEN_H
