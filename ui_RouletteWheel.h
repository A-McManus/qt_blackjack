/********************************************************************************
** Form generated from reading UI file 'RouletteWheel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROULETTEWHEEL_H
#define UI_ROULETTEWHEEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RouletteWheel
{
public:
    QDial *dial;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *gridLayoutWidget_3;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QWidget *gridLayoutWidget_4;
    QGridLayout *gridLayout_4;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_12;
    QWidget *gridLayoutWidget_5;
    QGridLayout *gridLayout_5;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QWidget *gridLayoutWidget_6;
    QGridLayout *gridLayout_6;
    QPushButton *pushButton_18;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QWidget *gridLayoutWidget_7;
    QGridLayout *gridLayout_7;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QWidget *gridLayoutWidget_8;
    QGridLayout *gridLayout_8;
    QPushButton *pushButton_22;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QWidget *gridLayoutWidget_9;
    QGridLayout *gridLayout_9;
    QPushButton *pushButton_25;
    QPushButton *pushButton_26;
    QPushButton *pushButton_27;
    QWidget *gridLayoutWidget_10;
    QGridLayout *gridLayout_10;
    QPushButton *pushButton_28;
    QPushButton *pushButton_29;
    QPushButton *pushButton_30;
    QWidget *gridLayoutWidget_11;
    QGridLayout *gridLayout_11;
    QPushButton *pushButton_33;
    QPushButton *pushButton_32;
    QPushButton *pushButton_31;
    QWidget *gridLayoutWidget_12;
    QGridLayout *gridLayout_12;
    QPushButton *pushButton_34;
    QPushButton *pushButton_35;
    QPushButton *pushButton_36;
    QTextEdit *textEdit;
    QPushButton *pushButton_0;
    QPushButton *pushButton_red;
    QPushButton *pushButton_black;
    QPushButton *pushButton_Play;
    QLabel *label_38;
    QSpinBox *moneyDisplay;
    QPushButton *SetBet_5;
    QPushButton *SetBet_10;
    QPushButton *SetBet_25;
    QPushButton *SetBet_50;
    QPushButton *SetBet_Max;
    QPushButton *pushButton_restart;
    QPushButton *pushButton_manque;
    QPushButton *pushButton_Even;
    QPushButton *pushButton_odd;
    QPushButton *pushButton_pass;
    QLabel *label_39;
    QSpinBox *BetDisplay;
    QTextEdit *pastRolls;

    void setupUi(QWidget *RouletteWheel)
    {
        if (RouletteWheel->objectName().isEmpty())
            RouletteWheel->setObjectName(QString::fromUtf8("RouletteWheel"));
        RouletteWheel->resize(1896, 682);
        RouletteWheel->setStyleSheet(QString::fromUtf8("background:rgb(0, 85, 0)"));
        dial = new QDial(RouletteWheel);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setGeometry(QRect(30, 90, 531, 401));
        dial->setStyleSheet(QString::fromUtf8("color:rgb(170, 107, 35)"));
        dial->setMaximum(36);
        dial->setPageStep(1);
        dial->setValue(36);
        dial->setSliderPosition(36);
        dial->setTracking(true);
        dial->setNotchesVisible(true);
        label = new QLabel(RouletteWheel);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(180, 470, 21, 20));
        label->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 255, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(RouletteWheel);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 450, 20, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_2->setAlignment(Qt::AlignCenter);
        label_3 = new QLabel(RouletteWheel);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 430, 20, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_3->setAlignment(Qt::AlignCenter);
        label_4 = new QLabel(RouletteWheel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 410, 20, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_4->setAlignment(Qt::AlignCenter);
        label_5 = new QLabel(RouletteWheel);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(90, 380, 20, 20));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_5->setAlignment(Qt::AlignCenter);
        label_6 = new QLabel(RouletteWheel);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(80, 350, 20, 20));
        label_6->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_6->setAlignment(Qt::AlignCenter);
        label_7 = new QLabel(RouletteWheel);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 320, 20, 20));
        label_7->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_7->setAlignment(Qt::AlignCenter);
        label_8 = new QLabel(RouletteWheel);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(70, 290, 20, 20));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_8->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(RouletteWheel);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(70, 250, 20, 20));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_9->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(RouletteWheel);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(80, 190, 20, 20));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(RouletteWheel);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(70, 220, 20, 20));
        label_11->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(RouletteWheel);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(100, 160, 20, 20));
        label_12->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_12->setAlignment(Qt::AlignCenter);
        label_13 = new QLabel(RouletteWheel);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(120, 140, 20, 20));
        label_13->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(RouletteWheel);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(160, 100, 21, 21));
        label_14->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_14->setAlignment(Qt::AlignCenter);
        label_15 = new QLabel(RouletteWheel);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(140, 120, 20, 20));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_15->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(RouletteWheel);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(190, 90, 20, 20));
        label_16->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_16->setAlignment(Qt::AlignCenter);
        label_17 = new QLabel(RouletteWheel);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(220, 70, 21, 21));
        label_17->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_17->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(RouletteWheel);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(280, 70, 21, 21));
        label_18->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_18->setAlignment(Qt::AlignCenter);
        label_19 = new QLabel(RouletteWheel);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(250, 70, 20, 20));
        label_19->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_19->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(RouletteWheel);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(320, 70, 20, 20));
        label_20->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_20->setAlignment(Qt::AlignCenter);
        label_21 = new QLabel(RouletteWheel);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(350, 70, 21, 21));
        label_21->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_21->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(RouletteWheel);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(380, 80, 20, 20));
        label_22->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_22->setAlignment(Qt::AlignCenter);
        label_23 = new QLabel(RouletteWheel);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(400, 100, 21, 21));
        label_23->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_23->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(RouletteWheel);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(430, 120, 20, 20));
        label_24->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_24->setAlignment(Qt::AlignCenter);
        label_25 = new QLabel(RouletteWheel);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(450, 140, 21, 21));
        label_25->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_25->setAlignment(Qt::AlignCenter);
        label_26 = new QLabel(RouletteWheel);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(490, 200, 21, 21));
        label_26->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_26->setAlignment(Qt::AlignCenter);
        label_27 = new QLabel(RouletteWheel);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(470, 170, 20, 20));
        label_27->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_27->setAlignment(Qt::AlignCenter);
        label_28 = new QLabel(RouletteWheel);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(500, 260, 21, 21));
        label_28->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_28->setAlignment(Qt::AlignCenter);
        label_29 = new QLabel(RouletteWheel);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(500, 230, 20, 20));
        label_29->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_29->setAlignment(Qt::AlignCenter);
        label_30 = new QLabel(RouletteWheel);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(500, 320, 21, 21));
        label_30->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_30->setAlignment(Qt::AlignCenter);
        label_31 = new QLabel(RouletteWheel);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(500, 290, 20, 20));
        label_31->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_31->setAlignment(Qt::AlignCenter);
        label_32 = new QLabel(RouletteWheel);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(480, 370, 21, 21));
        label_32->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_32->setAlignment(Qt::AlignCenter);
        label_33 = new QLabel(RouletteWheel);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(490, 350, 20, 20));
        label_33->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_33->setAlignment(Qt::AlignCenter);
        label_34 = new QLabel(RouletteWheel);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(450, 430, 21, 21));
        label_34->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_34->setAlignment(Qt::AlignCenter);
        label_35 = new QLabel(RouletteWheel);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(470, 400, 20, 20));
        label_35->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_35->setAlignment(Qt::AlignCenter);
        label_36 = new QLabel(RouletteWheel);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(430, 450, 20, 20));
        label_36->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(255, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_36->setAlignment(Qt::AlignCenter);
        label_37 = new QLabel(RouletteWheel);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(390, 470, 21, 21));
        label_37->setStyleSheet(QString::fromUtf8("QLabel{background:rgb(0, 0, 0)}\n"
"QLabel{color:rgb(255, 255, 255)}"));
        label_37->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(RouletteWheel);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(650, 160, 91, 251));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_1 = new QPushButton(gridLayoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_1->sizePolicy().hasHeightForWidth());
        pushButton_1->setSizePolicy(sizePolicy);
        pushButton_1->setSizeIncrement(QSize(0, 0));
        pushButton_1->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_1->setFlat(false);

        gridLayout->addWidget(pushButton_1, 6, 0, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        pushButton_2->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout->addWidget(pushButton_2, 5, 0, 1, 1);

        pushButton_3 = new QPushButton(gridLayoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout->addWidget(pushButton_3, 3, 0, 1, 1);

        gridLayoutWidget_2 = new QWidget(RouletteWheel);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(750, 160, 91, 251));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_4 = new QPushButton(gridLayoutWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setSizeIncrement(QSize(0, 0));
        pushButton_4->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_4->setFlat(false);

        gridLayout_2->addWidget(pushButton_4, 6, 0, 1, 1);

        pushButton_5 = new QPushButton(gridLayoutWidget_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        sizePolicy.setHeightForWidth(pushButton_5->sizePolicy().hasHeightForWidth());
        pushButton_5->setSizePolicy(sizePolicy);
        pushButton_5->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_2->addWidget(pushButton_5, 5, 0, 1, 1);

        pushButton_6 = new QPushButton(gridLayoutWidget_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_2->addWidget(pushButton_6, 3, 0, 1, 1);

        gridLayoutWidget_3 = new QWidget(RouletteWheel);
        gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
        gridLayoutWidget_3->setGeometry(QRect(850, 160, 91, 251));
        gridLayout_3 = new QGridLayout(gridLayoutWidget_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_7 = new QPushButton(gridLayoutWidget_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setSizeIncrement(QSize(0, 0));
        pushButton_7->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_7->setFlat(false);

        gridLayout_3->addWidget(pushButton_7, 6, 0, 1, 1);

        pushButton_8 = new QPushButton(gridLayoutWidget_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_3->addWidget(pushButton_8, 5, 0, 1, 1);

        pushButton_9 = new QPushButton(gridLayoutWidget_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_3->addWidget(pushButton_9, 3, 0, 1, 1);

        gridLayoutWidget_4 = new QWidget(RouletteWheel);
        gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
        gridLayoutWidget_4->setGeometry(QRect(950, 160, 91, 251));
        gridLayout_4 = new QGridLayout(gridLayoutWidget_4);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_10 = new QPushButton(gridLayoutWidget_4);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setSizeIncrement(QSize(0, 0));
        pushButton_10->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_10->setFlat(false);

        gridLayout_4->addWidget(pushButton_10, 6, 0, 1, 1);

        pushButton_11 = new QPushButton(gridLayoutWidget_4);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        sizePolicy.setHeightForWidth(pushButton_11->sizePolicy().hasHeightForWidth());
        pushButton_11->setSizePolicy(sizePolicy);
        pushButton_11->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_4->addWidget(pushButton_11, 5, 0, 1, 1);

        pushButton_12 = new QPushButton(gridLayoutWidget_4);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        sizePolicy.setHeightForWidth(pushButton_12->sizePolicy().hasHeightForWidth());
        pushButton_12->setSizePolicy(sizePolicy);
        pushButton_12->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_4->addWidget(pushButton_12, 3, 0, 1, 1);

        gridLayoutWidget_5 = new QWidget(RouletteWheel);
        gridLayoutWidget_5->setObjectName(QString::fromUtf8("gridLayoutWidget_5"));
        gridLayoutWidget_5->setGeometry(QRect(1050, 160, 91, 251));
        gridLayout_5 = new QGridLayout(gridLayoutWidget_5);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButton_13 = new QPushButton(gridLayoutWidget_5);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setSizeIncrement(QSize(0, 0));
        pushButton_13->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_13->setFlat(false);

        gridLayout_5->addWidget(pushButton_13, 6, 0, 1, 1);

        pushButton_14 = new QPushButton(gridLayoutWidget_5);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        sizePolicy.setHeightForWidth(pushButton_14->sizePolicy().hasHeightForWidth());
        pushButton_14->setSizePolicy(sizePolicy);
        pushButton_14->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_5->addWidget(pushButton_14, 5, 0, 1, 1);

        pushButton_15 = new QPushButton(gridLayoutWidget_5);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        sizePolicy.setHeightForWidth(pushButton_15->sizePolicy().hasHeightForWidth());
        pushButton_15->setSizePolicy(sizePolicy);
        pushButton_15->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_5->addWidget(pushButton_15, 3, 0, 1, 1);

        gridLayoutWidget_6 = new QWidget(RouletteWheel);
        gridLayoutWidget_6->setObjectName(QString::fromUtf8("gridLayoutWidget_6"));
        gridLayoutWidget_6->setGeometry(QRect(1150, 160, 91, 251));
        gridLayout_6 = new QGridLayout(gridLayoutWidget_6);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_18 = new QPushButton(gridLayoutWidget_6);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_6->addWidget(pushButton_18, 3, 0, 1, 1);

        pushButton_16 = new QPushButton(gridLayoutWidget_6);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setSizeIncrement(QSize(0, 0));
        pushButton_16->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_16->setFlat(false);

        gridLayout_6->addWidget(pushButton_16, 6, 0, 1, 1);

        pushButton_17 = new QPushButton(gridLayoutWidget_6);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_6->addWidget(pushButton_17, 5, 0, 1, 1);

        gridLayoutWidget_7 = new QWidget(RouletteWheel);
        gridLayoutWidget_7->setObjectName(QString::fromUtf8("gridLayoutWidget_7"));
        gridLayoutWidget_7->setGeometry(QRect(1250, 160, 91, 251));
        gridLayout_7 = new QGridLayout(gridLayoutWidget_7);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_19 = new QPushButton(gridLayoutWidget_7);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        sizePolicy.setHeightForWidth(pushButton_19->sizePolicy().hasHeightForWidth());
        pushButton_19->setSizePolicy(sizePolicy);
        pushButton_19->setSizeIncrement(QSize(0, 0));
        pushButton_19->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_19->setFlat(false);

        gridLayout_7->addWidget(pushButton_19, 6, 0, 1, 1);

        pushButton_20 = new QPushButton(gridLayoutWidget_7);
        pushButton_20->setObjectName(QString::fromUtf8("pushButton_20"));
        sizePolicy.setHeightForWidth(pushButton_20->sizePolicy().hasHeightForWidth());
        pushButton_20->setSizePolicy(sizePolicy);
        pushButton_20->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_7->addWidget(pushButton_20, 5, 0, 1, 1);

        pushButton_21 = new QPushButton(gridLayoutWidget_7);
        pushButton_21->setObjectName(QString::fromUtf8("pushButton_21"));
        sizePolicy.setHeightForWidth(pushButton_21->sizePolicy().hasHeightForWidth());
        pushButton_21->setSizePolicy(sizePolicy);
        pushButton_21->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_7->addWidget(pushButton_21, 3, 0, 1, 1);

        gridLayoutWidget_8 = new QWidget(RouletteWheel);
        gridLayoutWidget_8->setObjectName(QString::fromUtf8("gridLayoutWidget_8"));
        gridLayoutWidget_8->setGeometry(QRect(1350, 160, 91, 251));
        gridLayout_8 = new QGridLayout(gridLayoutWidget_8);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_22 = new QPushButton(gridLayoutWidget_8);
        pushButton_22->setObjectName(QString::fromUtf8("pushButton_22"));
        sizePolicy.setHeightForWidth(pushButton_22->sizePolicy().hasHeightForWidth());
        pushButton_22->setSizePolicy(sizePolicy);
        pushButton_22->setSizeIncrement(QSize(0, 0));
        pushButton_22->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_22->setFlat(false);

        gridLayout_8->addWidget(pushButton_22, 6, 0, 1, 1);

        pushButton_23 = new QPushButton(gridLayoutWidget_8);
        pushButton_23->setObjectName(QString::fromUtf8("pushButton_23"));
        sizePolicy.setHeightForWidth(pushButton_23->sizePolicy().hasHeightForWidth());
        pushButton_23->setSizePolicy(sizePolicy);
        pushButton_23->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_8->addWidget(pushButton_23, 5, 0, 1, 1);

        pushButton_24 = new QPushButton(gridLayoutWidget_8);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        sizePolicy.setHeightForWidth(pushButton_24->sizePolicy().hasHeightForWidth());
        pushButton_24->setSizePolicy(sizePolicy);
        pushButton_24->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_8->addWidget(pushButton_24, 3, 0, 1, 1);

        gridLayoutWidget_9 = new QWidget(RouletteWheel);
        gridLayoutWidget_9->setObjectName(QString::fromUtf8("gridLayoutWidget_9"));
        gridLayoutWidget_9->setGeometry(QRect(1450, 160, 91, 251));
        gridLayout_9 = new QGridLayout(gridLayoutWidget_9);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_25 = new QPushButton(gridLayoutWidget_9);
        pushButton_25->setObjectName(QString::fromUtf8("pushButton_25"));
        sizePolicy.setHeightForWidth(pushButton_25->sizePolicy().hasHeightForWidth());
        pushButton_25->setSizePolicy(sizePolicy);
        pushButton_25->setSizeIncrement(QSize(0, 0));
        pushButton_25->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_25->setFlat(false);

        gridLayout_9->addWidget(pushButton_25, 6, 0, 1, 1);

        pushButton_26 = new QPushButton(gridLayoutWidget_9);
        pushButton_26->setObjectName(QString::fromUtf8("pushButton_26"));
        sizePolicy.setHeightForWidth(pushButton_26->sizePolicy().hasHeightForWidth());
        pushButton_26->setSizePolicy(sizePolicy);
        pushButton_26->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_9->addWidget(pushButton_26, 5, 0, 1, 1);

        pushButton_27 = new QPushButton(gridLayoutWidget_9);
        pushButton_27->setObjectName(QString::fromUtf8("pushButton_27"));
        sizePolicy.setHeightForWidth(pushButton_27->sizePolicy().hasHeightForWidth());
        pushButton_27->setSizePolicy(sizePolicy);
        pushButton_27->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_9->addWidget(pushButton_27, 3, 0, 1, 1);

        gridLayoutWidget_10 = new QWidget(RouletteWheel);
        gridLayoutWidget_10->setObjectName(QString::fromUtf8("gridLayoutWidget_10"));
        gridLayoutWidget_10->setGeometry(QRect(1550, 160, 91, 251));
        gridLayout_10 = new QGridLayout(gridLayoutWidget_10);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        pushButton_28 = new QPushButton(gridLayoutWidget_10);
        pushButton_28->setObjectName(QString::fromUtf8("pushButton_28"));
        sizePolicy.setHeightForWidth(pushButton_28->sizePolicy().hasHeightForWidth());
        pushButton_28->setSizePolicy(sizePolicy);
        pushButton_28->setSizeIncrement(QSize(0, 0));
        pushButton_28->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_28->setFlat(false);

        gridLayout_10->addWidget(pushButton_28, 6, 0, 1, 1);

        pushButton_29 = new QPushButton(gridLayoutWidget_10);
        pushButton_29->setObjectName(QString::fromUtf8("pushButton_29"));
        sizePolicy.setHeightForWidth(pushButton_29->sizePolicy().hasHeightForWidth());
        pushButton_29->setSizePolicy(sizePolicy);
        pushButton_29->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_10->addWidget(pushButton_29, 5, 0, 1, 1);

        pushButton_30 = new QPushButton(gridLayoutWidget_10);
        pushButton_30->setObjectName(QString::fromUtf8("pushButton_30"));
        sizePolicy.setHeightForWidth(pushButton_30->sizePolicy().hasHeightForWidth());
        pushButton_30->setSizePolicy(sizePolicy);
        pushButton_30->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_10->addWidget(pushButton_30, 3, 0, 1, 1);

        gridLayoutWidget_11 = new QWidget(RouletteWheel);
        gridLayoutWidget_11->setObjectName(QString::fromUtf8("gridLayoutWidget_11"));
        gridLayoutWidget_11->setGeometry(QRect(1650, 160, 91, 251));
        gridLayout_11 = new QGridLayout(gridLayoutWidget_11);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_11->setContentsMargins(0, 0, 0, 0);
        pushButton_33 = new QPushButton(gridLayoutWidget_11);
        pushButton_33->setObjectName(QString::fromUtf8("pushButton_33"));
        sizePolicy.setHeightForWidth(pushButton_33->sizePolicy().hasHeightForWidth());
        pushButton_33->setSizePolicy(sizePolicy);
        pushButton_33->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_11->addWidget(pushButton_33, 3, 0, 1, 1);

        pushButton_32 = new QPushButton(gridLayoutWidget_11);
        pushButton_32->setObjectName(QString::fromUtf8("pushButton_32"));
        sizePolicy.setHeightForWidth(pushButton_32->sizePolicy().hasHeightForWidth());
        pushButton_32->setSizePolicy(sizePolicy);
        pushButton_32->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_11->addWidget(pushButton_32, 5, 0, 1, 1);

        pushButton_31 = new QPushButton(gridLayoutWidget_11);
        pushButton_31->setObjectName(QString::fromUtf8("pushButton_31"));
        sizePolicy.setHeightForWidth(pushButton_31->sizePolicy().hasHeightForWidth());
        pushButton_31->setSizePolicy(sizePolicy);
        pushButton_31->setSizeIncrement(QSize(0, 0));
        pushButton_31->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_31->setFlat(false);

        gridLayout_11->addWidget(pushButton_31, 6, 0, 1, 1);

        gridLayoutWidget_12 = new QWidget(RouletteWheel);
        gridLayoutWidget_12->setObjectName(QString::fromUtf8("gridLayoutWidget_12"));
        gridLayoutWidget_12->setGeometry(QRect(1750, 160, 91, 251));
        gridLayout_12 = new QGridLayout(gridLayoutWidget_12);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        gridLayout_12->setContentsMargins(0, 0, 0, 0);
        pushButton_34 = new QPushButton(gridLayoutWidget_12);
        pushButton_34->setObjectName(QString::fromUtf8("pushButton_34"));
        sizePolicy.setHeightForWidth(pushButton_34->sizePolicy().hasHeightForWidth());
        pushButton_34->setSizePolicy(sizePolicy);
        pushButton_34->setSizeIncrement(QSize(0, 0));
        pushButton_34->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_34->setFlat(false);

        gridLayout_12->addWidget(pushButton_34, 6, 0, 1, 1);

        pushButton_35 = new QPushButton(gridLayoutWidget_12);
        pushButton_35->setObjectName(QString::fromUtf8("pushButton_35"));
        sizePolicy.setHeightForWidth(pushButton_35->sizePolicy().hasHeightForWidth());
        pushButton_35->setSizePolicy(sizePolicy);
        pushButton_35->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_12->addWidget(pushButton_35, 5, 0, 1, 1);

        pushButton_36 = new QPushButton(gridLayoutWidget_12);
        pushButton_36->setObjectName(QString::fromUtf8("pushButton_36"));
        sizePolicy.setHeightForWidth(pushButton_36->sizePolicy().hasHeightForWidth());
        pushButton_36->setSizePolicy(sizePolicy);
        pushButton_36->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));

        gridLayout_12->addWidget(pushButton_36, 3, 0, 1, 1);

        textEdit = new QTextEdit(RouletteWheel);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(20, 510, 541, 181));
        textEdit->setStyleSheet(QString::fromUtf8("background: white;"));
        pushButton_0 = new QPushButton(RouletteWheel);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));
        pushButton_0->setGeometry(QRect(550, 248, 89, 71));
        sizePolicy.setHeightForWidth(pushButton_0->sizePolicy().hasHeightForWidth());
        pushButton_0->setSizePolicy(sizePolicy);
        pushButton_0->setSizeIncrement(QSize(0, 0));
        pushButton_0->setStyleSheet(QString::fromUtf8("background:rgb(0, 255, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_0->setFlat(false);
        pushButton_red = new QPushButton(RouletteWheel);
        pushButton_red->setObjectName(QString::fromUtf8("pushButton_red"));
        pushButton_red->setGeometry(QRect(650, 420, 391, 71));
        pushButton_red->setStyleSheet(QString::fromUtf8("background:rgb(255, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_black = new QPushButton(RouletteWheel);
        pushButton_black->setObjectName(QString::fromUtf8("pushButton_black"));
        pushButton_black->setGeometry(QRect(1050, 420, 391, 71));
        pushButton_black->setStyleSheet(QString::fromUtf8("background:rgb(0, 0, 0);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_Play = new QPushButton(RouletteWheel);
        pushButton_Play->setObjectName(QString::fromUtf8("pushButton_Play"));
        pushButton_Play->setGeometry(QRect(580, 510, 141, 51));
        label_38 = new QLabel(RouletteWheel);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(1500, 500, 58, 16));
        label_38->setStyleSheet(QString::fromUtf8("background: white"));
        moneyDisplay = new QSpinBox(RouletteWheel);
        moneyDisplay->setObjectName(QString::fromUtf8("moneyDisplay"));
        moneyDisplay->setGeometry(QRect(1500, 530, 151, 26));
        moneyDisplay->setStyleSheet(QString::fromUtf8("background:white"));
        moneyDisplay->setReadOnly(true);
        moneyDisplay->setMinimum(0);
        moneyDisplay->setMaximum(999999999);
        moneyDisplay->setValue(50);
        SetBet_5 = new QPushButton(RouletteWheel);
        SetBet_5->setObjectName(QString::fromUtf8("SetBet_5"));
        SetBet_5->setGeometry(QRect(730, 510, 141, 51));
        SetBet_10 = new QPushButton(RouletteWheel);
        SetBet_10->setObjectName(QString::fromUtf8("SetBet_10"));
        SetBet_10->setGeometry(QRect(880, 510, 141, 51));
        SetBet_25 = new QPushButton(RouletteWheel);
        SetBet_25->setObjectName(QString::fromUtf8("SetBet_25"));
        SetBet_25->setGeometry(QRect(1030, 510, 141, 51));
        SetBet_50 = new QPushButton(RouletteWheel);
        SetBet_50->setObjectName(QString::fromUtf8("SetBet_50"));
        SetBet_50->setGeometry(QRect(1180, 510, 141, 51));
        SetBet_Max = new QPushButton(RouletteWheel);
        SetBet_Max->setObjectName(QString::fromUtf8("SetBet_Max"));
        SetBet_Max->setGeometry(QRect(1330, 510, 141, 51));
        pushButton_restart = new QPushButton(RouletteWheel);
        pushButton_restart->setObjectName(QString::fromUtf8("pushButton_restart"));
        pushButton_restart->setGeometry(QRect(1570, 580, 141, 51));
        pushButton_manque = new QPushButton(RouletteWheel);
        pushButton_manque->setObjectName(QString::fromUtf8("pushButton_manque"));
        pushButton_manque->setGeometry(QRect(1450, 420, 391, 71));
        pushButton_manque->setStyleSheet(QString::fromUtf8("background:rgb(0, 170, 34);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_Even = new QPushButton(RouletteWheel);
        pushButton_Even->setObjectName(QString::fromUtf8("pushButton_Even"));
        pushButton_Even->setGeometry(QRect(650, 70, 391, 71));
        pushButton_Even->setStyleSheet(QString::fromUtf8("background:rgb(0, 170, 34);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_odd = new QPushButton(RouletteWheel);
        pushButton_odd->setObjectName(QString::fromUtf8("pushButton_odd"));
        pushButton_odd->setGeometry(QRect(1050, 70, 391, 71));
        pushButton_odd->setStyleSheet(QString::fromUtf8("background:rgb(0, 170, 34);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        pushButton_pass = new QPushButton(RouletteWheel);
        pushButton_pass->setObjectName(QString::fromUtf8("pushButton_pass"));
        pushButton_pass->setGeometry(QRect(1450, 70, 391, 71));
        pushButton_pass->setStyleSheet(QString::fromUtf8("background:rgb(0, 170, 34);\n"
"border: 2 px solid;\n"
"color: white;\n"
"font: 20pt \"Chandas\";"));
        label_39 = new QLabel(RouletteWheel);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(1670, 500, 58, 16));
        label_39->setStyleSheet(QString::fromUtf8("background: white"));
        BetDisplay = new QSpinBox(RouletteWheel);
        BetDisplay->setObjectName(QString::fromUtf8("BetDisplay"));
        BetDisplay->setGeometry(QRect(1670, 530, 151, 26));
        BetDisplay->setStyleSheet(QString::fromUtf8("background:white"));
        BetDisplay->setReadOnly(true);
        BetDisplay->setMinimum(0);
        BetDisplay->setMaximum(999999999);
        BetDisplay->setValue(5);
        pastRolls = new QTextEdit(RouletteWheel);
        pastRolls->setObjectName(QString::fromUtf8("pastRolls"));
        pastRolls->setGeometry(QRect(120, 10, 1671, 31));
        pastRolls->setStyleSheet(QString::fromUtf8("background:rgb(255, 255, 255);\n"
"font: 87 13pt \"Timmana\";"));
        pastRolls->setLineWidth(5);
        pastRolls->setMidLineWidth(5);
        pastRolls->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        pastRolls->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

        retranslateUi(RouletteWheel);
        QObject::connect(pushButton_1, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_5, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_6, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_7, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_8, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_9, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_10, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_11, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_12, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_13, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_14, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_15, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_16, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_17, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_18, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_19, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_20, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_21, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_22, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_23, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_24, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_25, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_26, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_27, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_28, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_29, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_30, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_31, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_32, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_33, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_34, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_35, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_36, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_0, SIGNAL(clicked()), RouletteWheel, SLOT(straightBet()));
        QObject::connect(pushButton_red, SIGNAL(clicked()), RouletteWheel, SLOT(redBet()));
        QObject::connect(pushButton_black, SIGNAL(clicked()), RouletteWheel, SLOT(blackBet()));
        QObject::connect(pushButton_Play, SIGNAL(clicked()), RouletteWheel, SLOT(play()));
        QObject::connect(SetBet_5, SIGNAL(clicked()), RouletteWheel, SLOT(setBet5()));
        QObject::connect(SetBet_10, SIGNAL(clicked()), RouletteWheel, SLOT(setBet10()));
        QObject::connect(SetBet_25, SIGNAL(clicked()), RouletteWheel, SLOT(setBet25()));
        QObject::connect(SetBet_50, SIGNAL(clicked()), RouletteWheel, SLOT(setBet50()));
        QObject::connect(SetBet_Max, SIGNAL(clicked()), RouletteWheel, SLOT(setBetMax()));
        QObject::connect(pushButton_restart, SIGNAL(clicked()), RouletteWheel, SLOT(restart()));
        QObject::connect(pushButton_manque, SIGNAL(clicked()), RouletteWheel, SLOT(manqueBet()));
        QObject::connect(pushButton_Even, SIGNAL(clicked()), RouletteWheel, SLOT(evenBet()));
        QObject::connect(pushButton_odd, SIGNAL(clicked()), RouletteWheel, SLOT(oddBet()));
        QObject::connect(pushButton_pass, SIGNAL(clicked()), RouletteWheel, SLOT(passbet()));

        QMetaObject::connectSlotsByName(RouletteWheel);
    } // setupUi

    void retranslateUi(QWidget *RouletteWheel)
    {
        RouletteWheel->setWindowTitle(QCoreApplication::translate("RouletteWheel", "RouletteWheel", nullptr));
        label->setText(QCoreApplication::translate("RouletteWheel", "0", nullptr));
        label_2->setText(QCoreApplication::translate("RouletteWheel", "32", nullptr));
        label_3->setText(QCoreApplication::translate("RouletteWheel", "15", nullptr));
        label_4->setText(QCoreApplication::translate("RouletteWheel", "19", nullptr));
        label_5->setText(QCoreApplication::translate("RouletteWheel", "4", nullptr));
        label_6->setText(QCoreApplication::translate("RouletteWheel", "21", nullptr));
        label_7->setText(QCoreApplication::translate("RouletteWheel", "2", nullptr));
        label_8->setText(QCoreApplication::translate("RouletteWheel", "25", nullptr));
        label_9->setText(QCoreApplication::translate("RouletteWheel", "17", nullptr));
        label_10->setText(QCoreApplication::translate("RouletteWheel", "6", nullptr));
        label_11->setText(QCoreApplication::translate("RouletteWheel", "34", nullptr));
        label_12->setText(QCoreApplication::translate("RouletteWheel", "27", nullptr));
        label_13->setText(QCoreApplication::translate("RouletteWheel", "13", nullptr));
        label_14->setText(QCoreApplication::translate("RouletteWheel", "11", nullptr));
        label_15->setText(QCoreApplication::translate("RouletteWheel", "36", nullptr));
        label_16->setText(QCoreApplication::translate("RouletteWheel", "30", nullptr));
        label_17->setText(QCoreApplication::translate("RouletteWheel", "8", nullptr));
        label_18->setText(QCoreApplication::translate("RouletteWheel", "10", nullptr));
        label_19->setText(QCoreApplication::translate("RouletteWheel", "23", nullptr));
        label_20->setText(QCoreApplication::translate("RouletteWheel", "5", nullptr));
        label_21->setText(QCoreApplication::translate("RouletteWheel", "24", nullptr));
        label_22->setText(QCoreApplication::translate("RouletteWheel", "16", nullptr));
        label_23->setText(QCoreApplication::translate("RouletteWheel", "33", nullptr));
        label_24->setText(QCoreApplication::translate("RouletteWheel", "1", nullptr));
        label_25->setText(QCoreApplication::translate("RouletteWheel", "20", nullptr));
        label_26->setText(QCoreApplication::translate("RouletteWheel", "31", nullptr));
        label_27->setText(QCoreApplication::translate("RouletteWheel", "14", nullptr));
        label_28->setText(QCoreApplication::translate("RouletteWheel", "22", nullptr));
        label_29->setText(QCoreApplication::translate("RouletteWheel", "9", nullptr));
        label_30->setText(QCoreApplication::translate("RouletteWheel", "29", nullptr));
        label_31->setText(QCoreApplication::translate("RouletteWheel", "18", nullptr));
        label_32->setText(QCoreApplication::translate("RouletteWheel", "28", nullptr));
        label_33->setText(QCoreApplication::translate("RouletteWheel", "7", nullptr));
        label_34->setText(QCoreApplication::translate("RouletteWheel", "35", nullptr));
        label_35->setText(QCoreApplication::translate("RouletteWheel", "12", nullptr));
        label_36->setText(QCoreApplication::translate("RouletteWheel", "3", nullptr));
        label_37->setText(QCoreApplication::translate("RouletteWheel", "26", nullptr));
        pushButton_1->setText(QCoreApplication::translate("RouletteWheel", "1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RouletteWheel", "2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("RouletteWheel", "3", nullptr));
        pushButton_4->setText(QCoreApplication::translate("RouletteWheel", "4", nullptr));
        pushButton_5->setText(QCoreApplication::translate("RouletteWheel", "5", nullptr));
        pushButton_6->setText(QCoreApplication::translate("RouletteWheel", "6", nullptr));
        pushButton_7->setText(QCoreApplication::translate("RouletteWheel", "7", nullptr));
        pushButton_8->setText(QCoreApplication::translate("RouletteWheel", "8", nullptr));
        pushButton_9->setText(QCoreApplication::translate("RouletteWheel", "9", nullptr));
        pushButton_10->setText(QCoreApplication::translate("RouletteWheel", "10", nullptr));
        pushButton_11->setText(QCoreApplication::translate("RouletteWheel", "11", nullptr));
        pushButton_12->setText(QCoreApplication::translate("RouletteWheel", "12", nullptr));
        pushButton_13->setText(QCoreApplication::translate("RouletteWheel", "13", nullptr));
        pushButton_14->setText(QCoreApplication::translate("RouletteWheel", "14", nullptr));
        pushButton_15->setText(QCoreApplication::translate("RouletteWheel", "15", nullptr));
        pushButton_18->setText(QCoreApplication::translate("RouletteWheel", "18", nullptr));
        pushButton_16->setText(QCoreApplication::translate("RouletteWheel", "16", nullptr));
        pushButton_17->setText(QCoreApplication::translate("RouletteWheel", "17", nullptr));
        pushButton_19->setText(QCoreApplication::translate("RouletteWheel", "19", nullptr));
        pushButton_20->setText(QCoreApplication::translate("RouletteWheel", "20", nullptr));
        pushButton_21->setText(QCoreApplication::translate("RouletteWheel", "21", nullptr));
        pushButton_22->setText(QCoreApplication::translate("RouletteWheel", "22", nullptr));
        pushButton_23->setText(QCoreApplication::translate("RouletteWheel", "23", nullptr));
        pushButton_24->setText(QCoreApplication::translate("RouletteWheel", "24", nullptr));
        pushButton_25->setText(QCoreApplication::translate("RouletteWheel", "25", nullptr));
        pushButton_26->setText(QCoreApplication::translate("RouletteWheel", "26", nullptr));
        pushButton_27->setText(QCoreApplication::translate("RouletteWheel", "27", nullptr));
        pushButton_28->setText(QCoreApplication::translate("RouletteWheel", "28", nullptr));
        pushButton_29->setText(QCoreApplication::translate("RouletteWheel", "29", nullptr));
        pushButton_30->setText(QCoreApplication::translate("RouletteWheel", "30", nullptr));
        pushButton_33->setText(QCoreApplication::translate("RouletteWheel", "33", nullptr));
        pushButton_32->setText(QCoreApplication::translate("RouletteWheel", "32", nullptr));
        pushButton_31->setText(QCoreApplication::translate("RouletteWheel", "31", nullptr));
        pushButton_34->setText(QCoreApplication::translate("RouletteWheel", "34", nullptr));
        pushButton_35->setText(QCoreApplication::translate("RouletteWheel", "35", nullptr));
        pushButton_36->setText(QCoreApplication::translate("RouletteWheel", "36", nullptr));
        pushButton_0->setText(QCoreApplication::translate("RouletteWheel", "0", nullptr));
        pushButton_red->setText(QCoreApplication::translate("RouletteWheel", "Red", nullptr));
        pushButton_black->setText(QCoreApplication::translate("RouletteWheel", "Black", nullptr));
        pushButton_Play->setText(QCoreApplication::translate("RouletteWheel", "Play", nullptr));
        label_38->setText(QCoreApplication::translate("RouletteWheel", "Money:", nullptr));
        SetBet_5->setText(QCoreApplication::translate("RouletteWheel", "Bet 5", nullptr));
        SetBet_10->setText(QCoreApplication::translate("RouletteWheel", "Bet 10", nullptr));
        SetBet_25->setText(QCoreApplication::translate("RouletteWheel", "Bet 25", nullptr));
        SetBet_50->setText(QCoreApplication::translate("RouletteWheel", "Bet 50", nullptr));
        SetBet_Max->setText(QCoreApplication::translate("RouletteWheel", "Bet Max", nullptr));
        pushButton_restart->setText(QCoreApplication::translate("RouletteWheel", "Restart", nullptr));
        pushButton_manque->setText(QCoreApplication::translate("RouletteWheel", "Manque", nullptr));
        pushButton_Even->setText(QCoreApplication::translate("RouletteWheel", "Even", nullptr));
        pushButton_odd->setText(QCoreApplication::translate("RouletteWheel", "Odd", nullptr));
        pushButton_pass->setText(QCoreApplication::translate("RouletteWheel", "Pass", nullptr));
        label_39->setText(QCoreApplication::translate("RouletteWheel", "Bet:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RouletteWheel: public Ui_RouletteWheel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROULETTEWHEEL_H
