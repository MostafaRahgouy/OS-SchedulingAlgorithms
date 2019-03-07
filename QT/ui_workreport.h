/********************************************************************************
** Form generated from reading UI file 'workreport.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORKREPORT_H
#define UI_WORKREPORT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WorkReport
{
public:
    QPushButton *close;
    QLabel *Title;
    QLabel *lineOne;
    QLabel *lineTwo;
    QLabel *lineThree;
    QLabel *linefour;
    QLabel *lineFive;
    QLabel *lineSix;
    QLabel *lineSeven;
    QLabel *lineEight;
    QLabel *lineNine;
    QLabel *lineTen;
    QLabel *lineEleven;
    QLabel *lineTwoEleven;
    QLabel *line13;
    QLabel *line14;

    void setupUi(QWidget *WorkReport)
    {
        if (WorkReport->objectName().isEmpty())
            WorkReport->setObjectName(QStringLiteral("WorkReport"));
        WorkReport->resize(985, 710);
        WorkReport->setMaximumSize(QSize(985, 710));
        WorkReport->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 108);\n"
""));
        close = new QPushButton(WorkReport);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(380, 650, 241, 51));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        close->setFont(font);
        close->setStyleSheet(QLatin1String("\n"
"QPushButton#close:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        Title = new QLabel(WorkReport);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(390, 30, 251, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        Title->setFont(font1);
        Title->setStyleSheet(QStringLiteral("color: rgb(85, 255, 0);"));
        lineOne = new QLabel(WorkReport);
        lineOne->setObjectName(QStringLiteral("lineOne"));
        lineOne->setGeometry(QRect(50, 90, 891, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(11);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        lineOne->setFont(font2);
        lineOne->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineTwo = new QLabel(WorkReport);
        lineTwo->setObjectName(QStringLiteral("lineTwo"));
        lineTwo->setGeometry(QRect(50, 130, 901, 31));
        lineTwo->setFont(font2);
        lineTwo->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineThree = new QLabel(WorkReport);
        lineThree->setObjectName(QStringLiteral("lineThree"));
        lineThree->setGeometry(QRect(50, 170, 901, 31));
        lineThree->setFont(font2);
        lineThree->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        linefour = new QLabel(WorkReport);
        linefour->setObjectName(QStringLiteral("linefour"));
        linefour->setGeometry(QRect(50, 210, 901, 31));
        linefour->setFont(font2);
        linefour->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineFive = new QLabel(WorkReport);
        lineFive->setObjectName(QStringLiteral("lineFive"));
        lineFive->setGeometry(QRect(50, 250, 901, 31));
        lineFive->setFont(font2);
        lineFive->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineSix = new QLabel(WorkReport);
        lineSix->setObjectName(QStringLiteral("lineSix"));
        lineSix->setGeometry(QRect(50, 290, 901, 31));
        lineSix->setFont(font2);
        lineSix->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineSeven = new QLabel(WorkReport);
        lineSeven->setObjectName(QStringLiteral("lineSeven"));
        lineSeven->setGeometry(QRect(50, 330, 901, 31));
        lineSeven->setFont(font2);
        lineSeven->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEight = new QLabel(WorkReport);
        lineEight->setObjectName(QStringLiteral("lineEight"));
        lineEight->setGeometry(QRect(50, 370, 901, 31));
        lineEight->setFont(font2);
        lineEight->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineNine = new QLabel(WorkReport);
        lineNine->setObjectName(QStringLiteral("lineNine"));
        lineNine->setGeometry(QRect(50, 410, 901, 31));
        lineNine->setFont(font2);
        lineNine->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineTen = new QLabel(WorkReport);
        lineTen->setObjectName(QStringLiteral("lineTen"));
        lineTen->setGeometry(QRect(50, 450, 901, 31));
        lineTen->setFont(font2);
        lineTen->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEleven = new QLabel(WorkReport);
        lineEleven->setObjectName(QStringLiteral("lineEleven"));
        lineEleven->setGeometry(QRect(50, 490, 901, 31));
        lineEleven->setFont(font2);
        lineEleven->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineTwoEleven = new QLabel(WorkReport);
        lineTwoEleven->setObjectName(QStringLiteral("lineTwoEleven"));
        lineTwoEleven->setGeometry(QRect(50, 530, 901, 31));
        lineTwoEleven->setFont(font2);
        lineTwoEleven->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        line13 = new QLabel(WorkReport);
        line13->setObjectName(QStringLiteral("line13"));
        line13->setGeometry(QRect(50, 570, 901, 31));
        line13->setFont(font2);
        line13->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        line14 = new QLabel(WorkReport);
        line14->setObjectName(QStringLiteral("line14"));
        line14->setGeometry(QRect(50, 610, 901, 31));
        line14->setFont(font2);
        line14->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(WorkReport);

        QMetaObject::connectSlotsByName(WorkReport);
    } // setupUi

    void retranslateUi(QWidget *WorkReport)
    {
        WorkReport->setWindowTitle(QApplication::translate("WorkReport", "Work Report", 0));
        close->setText(QApplication::translate("WorkReport", "close", 0));
        Title->setText(QApplication::translate("WorkReport", "work report", 0));
        lineOne->setText(QApplication::translate("WorkReport", "lineOne", 0));
        lineTwo->setText(QApplication::translate("WorkReport", "lineTwo", 0));
        lineThree->setText(QApplication::translate("WorkReport", "lineThree", 0));
        linefour->setText(QApplication::translate("WorkReport", "lineFour", 0));
        lineFive->setText(QApplication::translate("WorkReport", "linefive", 0));
        lineSix->setText(QApplication::translate("WorkReport", "lineSix", 0));
        lineSeven->setText(QApplication::translate("WorkReport", "lineSeven", 0));
        lineEight->setText(QApplication::translate("WorkReport", "lineEight", 0));
        lineNine->setText(QApplication::translate("WorkReport", "lineNine", 0));
        lineTen->setText(QApplication::translate("WorkReport", "lineTen", 0));
        lineEleven->setText(QApplication::translate("WorkReport", "lineEleven", 0));
        lineTwoEleven->setText(QApplication::translate("WorkReport", "lineTwoEleven", 0));
        line13->setText(QApplication::translate("WorkReport", "line13", 0));
        line14->setText(QApplication::translate("WorkReport", "line14", 0));
    } // retranslateUi

};

namespace Ui {
    class WorkReport: public Ui_WorkReport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORKREPORT_H
