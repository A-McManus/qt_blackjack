/********************************************************************************
** Form generated from reading UI file 'TableRoulette.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEROULETTE_H
#define UI_TABLEROULETTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_TableRoulette
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TableRoulette)
    {
        if (TableRoulette->objectName().isEmpty())
            TableRoulette->setObjectName(QString::fromUtf8("TableRoulette"));
        TableRoulette->resize(400, 300);
        buttonBox = new QDialogButtonBox(TableRoulette);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::NoButton|QDialogButtonBox::Ok);

        retranslateUi(TableRoulette);
        QObject::connect(buttonBox, SIGNAL(accepted()), TableRoulette, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TableRoulette, SLOT(reject()));

        QMetaObject::connectSlotsByName(TableRoulette);
    } // setupUi

    void retranslateUi(QDialog *TableRoulette)
    {
        TableRoulette->setWindowTitle(QCoreApplication::translate("TableRoulette", "TableRoulette", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TableRoulette: public Ui_TableRoulette {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEROULETTE_H
