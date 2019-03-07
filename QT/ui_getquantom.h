/********************************************************************************
** Form generated from reading UI file 'getquantom.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETQUANTOM_H
#define UI_GETQUANTOM_H

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

class Ui_GetQuantom
{
public:
    QPushButton *okPushButton;
    QComboBox *time;
    QLabel *quantomTimeLabel;

    void setupUi(QWidget *GetQuantom)
    {
        if (GetQuantom->objectName().isEmpty())
            GetQuantom->setObjectName(QStringLiteral("GetQuantom"));
        GetQuantom->resize(756, 574);
        GetQuantom->setMaximumSize(QSize(756, 574));
        GetQuantom->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 108);"));
        okPushButton = new QPushButton(GetQuantom);
        okPushButton->setObjectName(QStringLiteral("okPushButton"));
        okPushButton->setGeometry(QRect(190, 360, 361, 81));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        okPushButton->setFont(font);
        okPushButton->setStyleSheet(QLatin1String("\n"
"QPushButton#okPushButton:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        time = new QComboBox(GetQuantom);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(190, 240, 361, 71));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        time->setFont(font1);
        time->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        quantomTimeLabel = new QLabel(GetQuantom);
        quantomTimeLabel->setObjectName(QStringLiteral("quantomTimeLabel"));
        quantomTimeLabel->setGeometry(QRect(120, 140, 551, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(16);
        font2.setItalic(true);
        quantomTimeLabel->setFont(font2);
        quantomTimeLabel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(GetQuantom);

        QMetaObject::connectSlotsByName(GetQuantom);
    } // setupUi

    void retranslateUi(QWidget *GetQuantom)
    {
        GetQuantom->setWindowTitle(QApplication::translate("GetQuantom", "Quantom Time", 0));
        okPushButton->setText(QApplication::translate("GetQuantom", "ok", 0));
        time->clear();
        time->insertItems(0, QStringList()
         << QApplication::translate("GetQuantom", "One", 0)
         << QApplication::translate("GetQuantom", "Two", 0)
         << QApplication::translate("GetQuantom", "Three", 0)
         << QApplication::translate("GetQuantom", "Four", 0)
         << QApplication::translate("GetQuantom", "Five", 0)
        );
        quantomTimeLabel->setText(QApplication::translate("GetQuantom", "select", 0));
    } // retranslateUi

};

namespace Ui {
    class GetQuantom: public Ui_GetQuantom {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETQUANTOM_H
