/********************************************************************************
** Form generated from reading UI file 'clientinput.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTINPUT_H
#define UI_CLIENTINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientInput
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QLineEdit *lineEdit_3;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit_2;
    QComboBox *comboBox_4;
    QLineEdit *lineEdit_4;

    void setupUi(QWidget *ClientInput)
    {
        if (ClientInput->objectName().isEmpty())
            ClientInput->setObjectName(QStringLiteral("ClientInput"));
        ClientInput->resize(239, 123);
        gridLayoutWidget = new QWidget(ClientInput);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 0, 241, 120));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBox = new QComboBox(gridLayoutWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        lineEdit_3 = new QLineEdit(gridLayoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        comboBox_2 = new QComboBox(gridLayoutWidget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        gridLayout->addWidget(comboBox_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(gridLayoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        comboBox_3 = new QComboBox(gridLayoutWidget);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        gridLayout->addWidget(comboBox_3, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(gridLayoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        comboBox_4 = new QComboBox(gridLayoutWidget);
        comboBox_4->setObjectName(QStringLiteral("comboBox_4"));

        gridLayout->addWidget(comboBox_4, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(gridLayoutWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);


        retranslateUi(ClientInput);

        QMetaObject::connectSlotsByName(ClientInput);
    } // setupUi

    void retranslateUi(QWidget *ClientInput)
    {
        ClientInput->setWindowTitle(QApplication::translate("ClientInput", "Form", 0));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("ClientInput", "M.", 0)
         << QApplication::translate("ClientInput", "Mme.", 0)
         << QApplication::translate("ClientInput", "Melle.", 0)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("ClientInput", "M.", 0)
         << QApplication::translate("ClientInput", "Mme.", 0)
         << QApplication::translate("ClientInput", "Melle.", 0)
        );
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("ClientInput", "M.", 0)
         << QApplication::translate("ClientInput", "Mme.", 0)
         << QApplication::translate("ClientInput", "Melle.", 0)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("ClientInput", "M.", 0)
         << QApplication::translate("ClientInput", "Mme.", 0)
         << QApplication::translate("ClientInput", "Melle.", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class ClientInput: public Ui_ClientInput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTINPUT_H
