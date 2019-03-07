/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QPushButton *master_2;
    QLabel *hamed;
    QLabel *Title;
    QLabel *mostafa;
    QLabel *os;
    QPushButton *master;
    QPushButton *master_3;
    QPushButton *close;
    QLabel *year;
    QLabel *mirizadeh;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(985, 633);
        About->setMaximumSize(QSize(985, 633));
        About->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 108);"));
        master_2 = new QPushButton(About);
        master_2->setObjectName(QStringLiteral("master_2"));
        master_2->setGeometry(QRect(50, 360, 191, 161));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/hamed-.JPG"), QSize(), QIcon::Normal, QIcon::Off);
        master_2->setIcon(icon);
        master_2->setIconSize(QSize(191, 161));
        hamed = new QLabel(About);
        hamed->setObjectName(QStringLiteral("hamed"));
        hamed->setGeometry(QRect(50, 320, 201, 31));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        hamed->setFont(font);
        hamed->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        Title = new QLabel(About);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(340, 20, 361, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Comic Sans MS"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setWeight(75);
        Title->setFont(font1);
        Title->setStyleSheet(QStringLiteral("color: rgb(85, 255, 0);"));
        mostafa = new QLabel(About);
        mostafa->setObjectName(QStringLiteral("mostafa"));
        mostafa->setGeometry(QRect(740, 320, 201, 31));
        mostafa->setFont(font);
        mostafa->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        os = new QLabel(About);
        os->setObjectName(QStringLiteral("os"));
        os->setGeometry(QRect(390, 50, 251, 41));
        os->setFont(font);
        os->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        master = new QPushButton(About);
        master->setObjectName(QStringLiteral("master"));
        master->setGeometry(QRect(400, 110, 191, 161));
        master->setAutoFillBackground(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/image/mr-mirizadeh.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        master->setIcon(icon1);
        master->setIconSize(QSize(360, 191));
        master_3 = new QPushButton(About);
        master_3->setObjectName(QStringLiteral("master_3"));
        master_3->setGeometry(QRect(740, 360, 191, 161));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/image/mostafa.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        master_3->setIcon(icon2);
        master_3->setIconSize(QSize(360, 191));
        close = new QPushButton(About);
        close->setObjectName(QStringLiteral("close"));
        close->setGeometry(QRect(390, 540, 241, 51));
        close->setFont(font);
        close->setStyleSheet(QLatin1String("\n"
"QPushButton#close:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        year = new QLabel(About);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(400, 410, 201, 41));
        QFont font2;
        font2.setFamily(QStringLiteral("Comic Sans MS"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        year->setFont(font2);
        year->setStyleSheet(QStringLiteral("color: rgb(85, 255, 0);"));
        mirizadeh = new QLabel(About);
        mirizadeh->setObjectName(QStringLiteral("mirizadeh"));
        mirizadeh->setGeometry(QRect(400, 280, 211, 31));
        mirizadeh->setFont(font);
        mirizadeh->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "About Program", 0));
        master_2->setText(QString());
        hamed->setText(QApplication::translate("About", "hamed babaei", 0));
        Title->setText(QApplication::translate("About", "about program", 0));
        mostafa->setText(QApplication::translate("About", "mostafa rahghooy", 0));
        os->setText(QApplication::translate("About", "operating system", 0));
        master->setText(QString());
        master_3->setText(QString());
        close->setText(QApplication::translate("About", "close", 0));
        year->setText(QApplication::translate("About", "date", 0));
        mirizadeh->setText(QApplication::translate("About", "master name", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
