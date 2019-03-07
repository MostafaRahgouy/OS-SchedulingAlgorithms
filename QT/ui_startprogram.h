/********************************************************************************
** Form generated from reading UI file 'startprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTPROGRAM_H
#define UI_STARTPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartProgram
{
public:
    QPushButton *okProcessCount;
    QLabel *lableProcessCount;
    QComboBox *comboProcessCount;

    void setupUi(QWidget *StartProgram)
    {
        if (StartProgram->objectName().isEmpty())
            StartProgram->setObjectName(QStringLiteral("StartProgram"));
        StartProgram->resize(756, 574);
        StartProgram->setMaximumSize(QSize(756, 574));
        StartProgram->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 108);"));
        okProcessCount = new QPushButton(StartProgram);
        okProcessCount->setObjectName(QStringLiteral("okProcessCount"));
        okProcessCount->setGeometry(QRect(200, 350, 331, 81));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        okProcessCount->setFont(font);
        okProcessCount->setStyleSheet(QLatin1String("\n"
"QPushButton#okProcessCount:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
""));
        lableProcessCount = new QLabel(StartProgram);
        lableProcessCount->setObjectName(QStringLiteral("lableProcessCount"));
        lableProcessCount->setGeometry(QRect(90, 130, 581, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        lableProcessCount->setFont(font1);
        lableProcessCount->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        comboProcessCount = new QComboBox(StartProgram);
        comboProcessCount->setObjectName(QStringLiteral("comboProcessCount"));
        comboProcessCount->setGeometry(QRect(200, 240, 331, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        comboProcessCount->setFont(font2);
        comboProcessCount->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        retranslateUi(StartProgram);

        QMetaObject::connectSlotsByName(StartProgram);
    } // setupUi

    void retranslateUi(QWidget *StartProgram)
    {
        StartProgram->setWindowTitle(QApplication::translate("StartProgram", "Start Program", 0));
        okProcessCount->setText(QApplication::translate("StartProgram", "Ok", 0));
        lableProcessCount->setText(QApplication::translate("StartProgram", "TextLabel", 0));
        comboProcessCount->clear();
        comboProcessCount->insertItems(0, QStringList()
         << QApplication::translate("StartProgram", "One", 0)
         << QApplication::translate("StartProgram", "Two", 0)
         << QApplication::translate("StartProgram", "Three", 0)
         << QApplication::translate("StartProgram", "Four", 0)
         << QApplication::translate("StartProgram", "Five", 0)
         << QApplication::translate("StartProgram", "Six", 0)
         << QApplication::translate("StartProgram", "Seven", 0)
         << QApplication::translate("StartProgram", "Eight", 0)
         << QApplication::translate("StartProgram", "Nine", 0)
         << QApplication::translate("StartProgram", "Ten", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class StartProgram: public Ui_StartProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTPROGRAM_H
