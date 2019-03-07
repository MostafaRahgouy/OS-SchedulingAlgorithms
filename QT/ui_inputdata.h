/********************************************************************************
** Form generated from reading UI file 'inputdata.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTDATA_H
#define UI_INPUTDATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputData
{
public:
    QLabel *nameProcess;
    QLabel *arrivalTime;
    QLabel *serviceTime;
    QPushButton *okInputData;
    QLineEdit *lineEditProcessName;
    QLineEdit *lineEditArrivalTime;
    QLineEdit *lineEditServiceTime;
    QLabel *labelHedear;
    QLabel *numberProcess;

    void setupUi(QWidget *InputData)
    {
        if (InputData->objectName().isEmpty())
            InputData->setObjectName(QStringLiteral("InputData"));
        InputData->resize(756, 574);
        InputData->setMaximumSize(QSize(756, 574));
        InputData->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 108);"));
        nameProcess = new QLabel(InputData);
        nameProcess->setObjectName(QStringLiteral("nameProcess"));
        nameProcess->setGeometry(QRect(110, 170, 181, 41));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        nameProcess->setFont(font);
        nameProcess->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        arrivalTime = new QLabel(InputData);
        arrivalTime->setObjectName(QStringLiteral("arrivalTime"));
        arrivalTime->setGeometry(QRect(110, 240, 181, 41));
        arrivalTime->setFont(font);
        arrivalTime->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        serviceTime = new QLabel(InputData);
        serviceTime->setObjectName(QStringLiteral("serviceTime"));
        serviceTime->setGeometry(QRect(110, 310, 181, 51));
        serviceTime->setFont(font);
        serviceTime->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        okInputData = new QPushButton(InputData);
        okInputData->setObjectName(QStringLiteral("okInputData"));
        okInputData->setGeometry(QRect(120, 420, 461, 71));
        okInputData->setFont(font);
        okInputData->setStyleSheet(QLatin1String("\n"
"QPushButton#okInputData:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        lineEditProcessName = new QLineEdit(InputData);
        lineEditProcessName->setObjectName(QStringLiteral("lineEditProcessName"));
        lineEditProcessName->setGeometry(QRect(310, 170, 281, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        lineEditProcessName->setFont(font1);
        lineEditProcessName->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEditArrivalTime = new QLineEdit(InputData);
        lineEditArrivalTime->setObjectName(QStringLiteral("lineEditArrivalTime"));
        lineEditArrivalTime->setGeometry(QRect(310, 240, 281, 41));
        lineEditArrivalTime->setFont(font1);
        lineEditArrivalTime->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        lineEditServiceTime = new QLineEdit(InputData);
        lineEditServiceTime->setObjectName(QStringLiteral("lineEditServiceTime"));
        lineEditServiceTime->setGeometry(QRect(310, 310, 281, 41));
        lineEditServiceTime->setFont(font1);
        lineEditServiceTime->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        labelHedear = new QLabel(InputData);
        labelHedear->setObjectName(QStringLiteral("labelHedear"));
        labelHedear->setGeometry(QRect(60, 50, 471, 81));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        labelHedear->setFont(font2);
        labelHedear->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        numberProcess = new QLabel(InputData);
        numberProcess->setObjectName(QStringLiteral("numberProcess"));
        numberProcess->setGeometry(QRect(560, 50, 71, 81));
        numberProcess->setFont(font2);
        numberProcess->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(InputData);

        QMetaObject::connectSlotsByName(InputData);
    } // setupUi

    void retranslateUi(QWidget *InputData)
    {
        InputData->setWindowTitle(QApplication::translate("InputData", "Enter Data", 0));
        nameProcess->setText(QApplication::translate("InputData", "TextLabel", 0));
        arrivalTime->setText(QApplication::translate("InputData", "TextLabel", 0));
        serviceTime->setText(QApplication::translate("InputData", "TextLabel", 0));
        okInputData->setText(QApplication::translate("InputData", "PushButton", 0));
        labelHedear->setText(QApplication::translate("InputData", "TextLabel", 0));
        numberProcess->setText(QApplication::translate("InputData", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class InputData: public Ui_InputData {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTDATA_H
