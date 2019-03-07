/********************************************************************************
** Form generated from reading UI file 'anwserwork.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANWSERWORK_H
#define UI_ANWSERWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnwserWork
{
public:
    QPushButton *nextProcess;
    QLabel *lableHedearAnwser;
    QLabel *numberProcess;
    QLabel *processName;
    QLabel *processStart;
    QLabel *processFinish;
    QLabel *responseTime;
    QLabel *answerProcessName;
    QLabel *answerProcessStart;
    QLabel *answerProcessFinish;
    QLabel *answerResponseTime;

    void setupUi(QWidget *AnwserWork)
    {
        if (AnwserWork->objectName().isEmpty())
            AnwserWork->setObjectName(QStringLiteral("AnwserWork"));
        AnwserWork->resize(756, 574);
        AnwserWork->setMaximumSize(QSize(756, 574));
        AnwserWork->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 108);"));
        nextProcess = new QPushButton(AnwserWork);
        nextProcess->setObjectName(QStringLiteral("nextProcess"));
        nextProcess->setGeometry(QRect(170, 430, 371, 81));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        nextProcess->setFont(font);
        nextProcess->setStyleSheet(QLatin1String("\n"
"QPushButton#nextProcess:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        lableHedearAnwser = new QLabel(AnwserWork);
        lableHedearAnwser->setObjectName(QStringLiteral("lableHedearAnwser"));
        lableHedearAnwser->setGeometry(QRect(140, 70, 341, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        lableHedearAnwser->setFont(font1);
        lableHedearAnwser->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        numberProcess = new QLabel(AnwserWork);
        numberProcess->setObjectName(QStringLiteral("numberProcess"));
        numberProcess->setGeometry(QRect(490, 70, 81, 51));
        numberProcess->setFont(font1);
        numberProcess->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        processName = new QLabel(AnwserWork);
        processName->setObjectName(QStringLiteral("processName"));
        processName->setGeometry(QRect(150, 170, 181, 51));
        processName->setFont(font);
        processName->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        processStart = new QLabel(AnwserWork);
        processStart->setObjectName(QStringLiteral("processStart"));
        processStart->setGeometry(QRect(150, 230, 181, 51));
        processStart->setFont(font);
        processStart->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        processFinish = new QLabel(AnwserWork);
        processFinish->setObjectName(QStringLiteral("processFinish"));
        processFinish->setGeometry(QRect(150, 290, 181, 51));
        processFinish->setFont(font);
        processFinish->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        responseTime = new QLabel(AnwserWork);
        responseTime->setObjectName(QStringLiteral("responseTime"));
        responseTime->setGeometry(QRect(150, 350, 181, 51));
        responseTime->setFont(font);
        responseTime->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        answerProcessName = new QLabel(AnwserWork);
        answerProcessName->setObjectName(QStringLiteral("answerProcessName"));
        answerProcessName->setGeometry(QRect(360, 170, 221, 51));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        answerProcessName->setFont(font2);
        answerProcessStart = new QLabel(AnwserWork);
        answerProcessStart->setObjectName(QStringLiteral("answerProcessStart"));
        answerProcessStart->setGeometry(QRect(360, 230, 221, 51));
        answerProcessStart->setFont(font2);
        answerProcessFinish = new QLabel(AnwserWork);
        answerProcessFinish->setObjectName(QStringLiteral("answerProcessFinish"));
        answerProcessFinish->setGeometry(QRect(360, 290, 221, 51));
        answerProcessFinish->setFont(font2);
        answerResponseTime = new QLabel(AnwserWork);
        answerResponseTime->setObjectName(QStringLiteral("answerResponseTime"));
        answerResponseTime->setGeometry(QRect(360, 350, 221, 51));
        answerResponseTime->setFont(font2);

        retranslateUi(AnwserWork);

        QMetaObject::connectSlotsByName(AnwserWork);
    } // setupUi

    void retranslateUi(QWidget *AnwserWork)
    {
        AnwserWork->setWindowTitle(QApplication::translate("AnwserWork", "Calculate Answer", 0));
        nextProcess->setText(QApplication::translate("AnwserWork", "PushButton", 0));
        lableHedearAnwser->setText(QApplication::translate("AnwserWork", "TextLabel", 0));
        numberProcess->setText(QApplication::translate("AnwserWork", "TextLabel", 0));
        processName->setText(QApplication::translate("AnwserWork", "TextLabel", 0));
        processStart->setText(QApplication::translate("AnwserWork", "TextLabel", 0));
        processFinish->setText(QApplication::translate("AnwserWork", "TextLabel", 0));
        responseTime->setText(QApplication::translate("AnwserWork", "TextLabel", 0));
        answerProcessName->setText(QApplication::translate("AnwserWork", "TextLabel", 0));
        answerProcessStart->setText(QApplication::translate("AnwserWork", "TextLabel", 0));
        answerProcessFinish->setText(QApplication::translate("AnwserWork", "TextLabel", 0));
        answerResponseTime->setText(QApplication::translate("AnwserWork", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class AnwserWork: public Ui_AnwserWork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANWSERWORK_H
