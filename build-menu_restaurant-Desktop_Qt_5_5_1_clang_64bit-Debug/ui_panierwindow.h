/********************************************************************************
** Form generated from reading UI file 'panierwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PANIERWINDOW_H
#define UI_PANIERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PanierWindow
{
public:
    QDialogButtonBox *buttonBox;
    QPushButton *confirmBtn;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *prixLabel;

    void setupUi(QDialog *PanierWindow)
    {
        if (PanierWindow->objectName().isEmpty())
            PanierWindow->setObjectName(QStringLiteral("PanierWindow"));
        PanierWindow->resize(400, 300);
        buttonBox = new QDialogButtonBox(PanierWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        buttonBox->setCenterButtons(false);
        confirmBtn = new QPushButton(PanierWindow);
        confirmBtn->setObjectName(QStringLiteral("confirmBtn"));
        confirmBtn->setGeometry(QRect(150, 240, 113, 32));
        gridLayoutWidget = new QWidget(PanierWindow);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 40, 321, 191));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        prixLabel = new QLabel(PanierWindow);
        prixLabel->setObjectName(QStringLiteral("prixLabel"));
        prixLabel->setGeometry(QRect(50, 250, 59, 16));

        retranslateUi(PanierWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), PanierWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PanierWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(PanierWindow);
    } // setupUi

    void retranslateUi(QDialog *PanierWindow)
    {
        PanierWindow->setWindowTitle(QApplication::translate("PanierWindow", "Dialog", 0));
        confirmBtn->setText(QApplication::translate("PanierWindow", "Confirmer", 0));
        prixLabel->setText(QApplication::translate("PanierWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class PanierWindow: public Ui_PanierWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PANIERWINDOW_H
