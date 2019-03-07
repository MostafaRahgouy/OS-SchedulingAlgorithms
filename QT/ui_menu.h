/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QPushButton *FCFSalgorithm;
    QPushButton *RRalgorithme;
    QPushButton *SPNalgorithm;
    QPushButton *SRTalgorithm;
    QPushButton *HRRNalgorithm;
    QPushButton *NEWalgorithm;

    void setupUi(QWidget *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(756, 573);
        Menu->setMaximumSize(QSize(756, 573));
        Menu->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 108);"));
        FCFSalgorithm = new QPushButton(Menu);
        FCFSalgorithm->setObjectName(QStringLiteral("FCFSalgorithm"));
        FCFSalgorithm->setGeometry(QRect(140, 40, 461, 61));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        FCFSalgorithm->setFont(font);
        FCFSalgorithm->setStyleSheet(QLatin1String("\n"
"QPushButton#FCFSalgorithm:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        RRalgorithme = new QPushButton(Menu);
        RRalgorithme->setObjectName(QStringLiteral("RRalgorithme"));
        RRalgorithme->setGeometry(QRect(140, 130, 461, 61));
        RRalgorithme->setFont(font);
        RRalgorithme->setStyleSheet(QLatin1String("\n"
"QPushButton#RRalgorithme:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        SPNalgorithm = new QPushButton(Menu);
        SPNalgorithm->setObjectName(QStringLiteral("SPNalgorithm"));
        SPNalgorithm->setGeometry(QRect(140, 220, 461, 61));
        SPNalgorithm->setFont(font);
        SPNalgorithm->setStyleSheet(QLatin1String("\n"
"QPushButton#SPNalgorithm:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        SRTalgorithm = new QPushButton(Menu);
        SRTalgorithm->setObjectName(QStringLiteral("SRTalgorithm"));
        SRTalgorithm->setGeometry(QRect(140, 310, 461, 61));
        SRTalgorithm->setFont(font);
        SRTalgorithm->setStyleSheet(QLatin1String("\n"
"QPushButton#SRTalgorithm:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        HRRNalgorithm = new QPushButton(Menu);
        HRRNalgorithm->setObjectName(QStringLiteral("HRRNalgorithm"));
        HRRNalgorithm->setGeometry(QRect(140, 400, 461, 61));
        HRRNalgorithm->setFont(font);
        HRRNalgorithm->setStyleSheet(QLatin1String("\n"
"QPushButton#HRRNalgorithm:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        NEWalgorithm = new QPushButton(Menu);
        NEWalgorithm->setObjectName(QStringLiteral("NEWalgorithm"));
        NEWalgorithm->setGeometry(QRect(140, 480, 461, 61));
        NEWalgorithm->setFont(font);
        NEWalgorithm->setStyleSheet(QLatin1String("\n"
"QPushButton#NEWalgorithm:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QWidget *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Scheduling Algorithms", 0));
        FCFSalgorithm->setText(QApplication::translate("Menu", "FCFS", 0));
        RRalgorithme->setText(QApplication::translate("Menu", "RR", 0));
        SPNalgorithm->setText(QApplication::translate("Menu", "SPN", 0));
        SRTalgorithm->setText(QApplication::translate("Menu", "SRT", 0));
        HRRNalgorithm->setText(QApplication::translate("Menu", "HRRN", 0));
        NEWalgorithm->setText(QApplication::translate("Menu", "NEW ALGORITHM", 0));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
