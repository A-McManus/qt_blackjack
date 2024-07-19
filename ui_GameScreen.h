/********************************************************************************
** Form generated from reading UI file 'GameScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMESCREEN_H
#define UI_GAMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_GameScreen
{
public:
    QTextEdit *Dealer_Hand;
    QTextEdit *Player_Hand;
    QTextEdit *Dealer;
    QTextEdit *Player;
    QPushButton *Play;
    QPushButton *Hit;
    QPushButton *Stand;
    QPushButton *DoubleDown;
    QTextEdit *Log;
    QSpinBox *Bet;
    QPlainTextEdit *plainTextEdit;
    QPlainTextEdit *plainTextEdit_2;
    QSpinBox *Money;
    QPushButton *Restart;
    QPushButton *setBet10;
    QPushButton *setbet25;
    QPushButton *setBet50;
    QPushButton *setBetMax;
    QPushButton *setBet5;

    void setupUi(QDialog *GameScreen)
    {
        if (GameScreen->objectName().isEmpty())
            GameScreen->setObjectName(QString::fromUtf8("GameScreen"));
        GameScreen->resize(1479, 894);
        GameScreen->setAutoFillBackground(false);
        Dealer_Hand = new QTextEdit(GameScreen);
        Dealer_Hand->setObjectName(QString::fromUtf8("Dealer_Hand"));
        Dealer_Hand->setGeometry(QRect(300, 10, 961, 171));
        Dealer_Hand->setStyleSheet(QString::fromUtf8("font: 25 italic 36pt \"Ubuntu\";"));
        Dealer_Hand->setReadOnly(true);
        Player_Hand = new QTextEdit(GameScreen);
        Player_Hand->setObjectName(QString::fromUtf8("Player_Hand"));
        Player_Hand->setGeometry(QRect(300, 370, 961, 171));
        Player_Hand->setStyleSheet(QString::fromUtf8("font: 25 italic 36pt \"Ubuntu\";"));
        Player_Hand->setReadOnly(true);
        Dealer = new QTextEdit(GameScreen);
        Dealer->setObjectName(QString::fromUtf8("Dealer"));
        Dealer->setGeometry(QRect(10, 50, 251, 91));
        Dealer->setReadOnly(true);
        Player = new QTextEdit(GameScreen);
        Player->setObjectName(QString::fromUtf8("Player"));
        Player->setGeometry(QRect(20, 410, 251, 91));
        Player->setReadOnly(true);
        Play = new QPushButton(GameScreen);
        Play->setObjectName(QString::fromUtf8("Play"));
        Play->setGeometry(QRect(50, 610, 191, 131));
        Play->setStyleSheet(QString::fromUtf8("font: 25 italic 20pt \"Ubuntu\";"));
        Hit = new QPushButton(GameScreen);
        Hit->setObjectName(QString::fromUtf8("Hit"));
        Hit->setGeometry(QRect(380, 610, 171, 131));
        Hit->setStyleSheet(QString::fromUtf8("font: 25 italic 20pt \"Ubuntu\";"));
        Stand = new QPushButton(GameScreen);
        Stand->setObjectName(QString::fromUtf8("Stand"));
        Stand->setGeometry(QRect(590, 610, 181, 131));
        Stand->setStyleSheet(QString::fromUtf8("font: 25 italic 20pt \"Ubuntu\";"));
        DoubleDown = new QPushButton(GameScreen);
        DoubleDown->setObjectName(QString::fromUtf8("DoubleDown"));
        DoubleDown->setGeometry(QRect(790, 610, 171, 131));
        DoubleDown->setStyleSheet(QString::fromUtf8("font: 25 italic 20pt \"Ubuntu\";"));
        Log = new QTextEdit(GameScreen);
        Log->setObjectName(QString::fromUtf8("Log"));
        Log->setGeometry(QRect(340, 230, 871, 101));
        Log->setStyleSheet(QString::fromUtf8("font: 14pt \"Ubuntu\";"));
        Log->setReadOnly(true);
        Bet = new QSpinBox(GameScreen);
        Bet->setObjectName(QString::fromUtf8("Bet"));
        Bet->setGeometry(QRect(1060, 740, 131, 41));
        Bet->setStyleSheet(QString::fromUtf8("font: 25 italic 14pt \"Ubuntu\";"));
        Bet->setMinimum(1);
        Bet->setMaximum(500);
        plainTextEdit = new QPlainTextEdit(GameScreen);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(1060, 660, 131, 71));
        plainTextEdit->setAutoFillBackground(false);
        plainTextEdit->setStyleSheet(QString::fromUtf8("\n"
"font: 12pt \"Ubuntu\";"));
        plainTextEdit->setFrameShape(QFrame::VLine);
        plainTextEdit->setReadOnly(true);
        plainTextEdit_2 = new QPlainTextEdit(GameScreen);
        plainTextEdit_2->setObjectName(QString::fromUtf8("plainTextEdit_2"));
        plainTextEdit_2->setGeometry(QRect(1220, 660, 141, 61));
        plainTextEdit_2->setStyleSheet(QString::fromUtf8("font: 25 italic 11pt \"Ubuntu\";"));
        plainTextEdit_2->setReadOnly(true);
        Money = new QSpinBox(GameScreen);
        Money->setObjectName(QString::fromUtf8("Money"));
        Money->setGeometry(QRect(1220, 740, 141, 41));
        Money->setStyleSheet(QString::fromUtf8("font: 25 italic 16pt \"Ubuntu\";"));
        Money->setReadOnly(true);
        Money->setMaximum(5000);
        Restart = new QPushButton(GameScreen);
        Restart->setObjectName(QString::fromUtf8("Restart"));
        Restart->setGeometry(QRect(50, 770, 191, 71));
        Restart->setStyleSheet(QString::fromUtf8("font: 25 italic 14pt \"Ubuntu\";"));
        setBet10 = new QPushButton(GameScreen);
        setBet10->setObjectName(QString::fromUtf8("setBet10"));
        setBet10->setGeometry(QRect(610, 790, 90, 31));
        setbet25 = new QPushButton(GameScreen);
        setbet25->setObjectName(QString::fromUtf8("setbet25"));
        setbet25->setGeometry(QRect(500, 790, 90, 31));
        setBet50 = new QPushButton(GameScreen);
        setBet50->setObjectName(QString::fromUtf8("setBet50"));
        setBet50->setGeometry(QRect(710, 790, 90, 31));
        setBetMax = new QPushButton(GameScreen);
        setBetMax->setObjectName(QString::fromUtf8("setBetMax"));
        setBetMax->setGeometry(QRect(820, 770, 141, 61));
        setBet5 = new QPushButton(GameScreen);
        setBet5->setObjectName(QString::fromUtf8("setBet5"));
        setBet5->setGeometry(QRect(380, 790, 101, 31));

        retranslateUi(GameScreen);
        QObject::connect(Play, SIGNAL(clicked()), GameScreen, SLOT(play()));
        QObject::connect(Hit, SIGNAL(clicked()), GameScreen, SLOT(hit()));
        QObject::connect(Stand, SIGNAL(clicked()), GameScreen, SLOT(stand()));
        QObject::connect(DoubleDown, SIGNAL(clicked()), GameScreen, SLOT(doubleDown()));
        QObject::connect(Restart, SIGNAL(clicked()), GameScreen, SLOT(restart()));
        QObject::connect(setBet5, SIGNAL(clicked()), GameScreen, SLOT(setBet5()));
        QObject::connect(setBet10, SIGNAL(clicked()), GameScreen, SLOT(setBet10()));
        QObject::connect(setbet25, SIGNAL(clicked()), GameScreen, SLOT(setBet25()));
        QObject::connect(setBet50, SIGNAL(clicked()), GameScreen, SLOT(setBet50()));
        QObject::connect(setBetMax, SIGNAL(clicked()), GameScreen, SLOT(setBetMax()));

        QMetaObject::connectSlotsByName(GameScreen);
    } // setupUi

    void retranslateUi(QDialog *GameScreen)
    {
        GameScreen->setWindowTitle(QCoreApplication::translate("GameScreen", "GameScreen", nullptr));
        Dealer->setHtml(QCoreApplication::translate("GameScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; color:#c21c1f;\">DEALER</span></p></body></html>", nullptr));
        Player->setHtml(QCoreApplication::translate("GameScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:48pt; color:#12bc34;\">PLAYER</span></p></body></html>", nullptr));
        Play->setText(QCoreApplication::translate("GameScreen", "Play", nullptr));
        Hit->setText(QCoreApplication::translate("GameScreen", "Hit", nullptr));
        Stand->setText(QCoreApplication::translate("GameScreen", "Stand", nullptr));
        DoubleDown->setText(QCoreApplication::translate("GameScreen", "Double Down", nullptr));
        Log->setHtml(QCoreApplication::translate("GameScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Press play to begin</span></p></body></html>", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("GameScreen", "Bet", nullptr));
        plainTextEdit_2->setPlainText(QCoreApplication::translate("GameScreen", "Money", nullptr));
        Restart->setText(QCoreApplication::translate("GameScreen", "Restart", nullptr));
        setBet10->setText(QCoreApplication::translate("GameScreen", "Bet:10", nullptr));
        setbet25->setText(QCoreApplication::translate("GameScreen", "Bet:25", nullptr));
        setBet50->setText(QCoreApplication::translate("GameScreen", "Bet:50", nullptr));
        setBetMax->setText(QCoreApplication::translate("GameScreen", "Bet:Max", nullptr));
        setBet5->setText(QCoreApplication::translate("GameScreen", "Bet:5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameScreen: public Ui_GameScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMESCREEN_H
