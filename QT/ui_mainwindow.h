/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QPushButton *workReport;
    QPushButton *about;
    QPushButton *exit;
    QPushButton *startProgram;
    QPushButton *iconOfMenu;

    void setupUi(QWidget *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(756, 574);
        MainWindow->setMaximumSize(QSize(756, 574));
        MainWindow->setStyleSheet(QLatin1String("\n"
"background-color: rgb(0, 0, 108);"));
        workReport = new QPushButton(MainWindow);
        workReport->setObjectName(QStringLiteral("workReport"));
        workReport->setGeometry(QRect(50, 180, 381, 91));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        workReport->setFont(font);
        workReport->setStyleSheet(QLatin1String("\n"
"QPushButton#workReport:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        about = new QPushButton(MainWindow);
        about->setObjectName(QStringLiteral("about"));
        about->setGeometry(QRect(50, 300, 381, 91));
        about->setFont(font);
        about->setStyleSheet(QLatin1String("\n"
"QPushButton#about:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        exit = new QPushButton(MainWindow);
        exit->setObjectName(QStringLiteral("exit"));
        exit->setGeometry(QRect(50, 420, 381, 91));
        exit->setFont(font);
        exit->setStyleSheet(QLatin1String("\n"
"QPushButton#exit:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        startProgram = new QPushButton(MainWindow);
        startProgram->setObjectName(QStringLiteral("startProgram"));
        startProgram->setGeometry(QRect(50, 60, 381, 91));
        startProgram->setFont(font);
        startProgram->setStyleSheet(QLatin1String("\n"
"QPushButton#startProgram:hover{\n"
"	background-color: rgb(209, 69, 0);\n"
"};\n"
"background-color: rgb(255, 255, 255);"));
        iconOfMenu = new QPushButton(MainWindow);
        iconOfMenu->setObjectName(QStringLiteral("iconOfMenu"));
        iconOfMenu->setGeometry(QRect(460, 150, 261, 261));
        QIcon icon;
        icon.addFile(QStringLiteral(":/image/task.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        iconOfMenu->setIcon(icon);
        iconOfMenu->setIconSize(QSize(291, 391));
        iconOfMenu->setFlat(true);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QWidget *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Menu", 0));
        workReport->setText(QApplication::translate("MainWindow", "PushButton", 0));
        about->setText(QApplication::translate("MainWindow", "PushButton", 0));
        exit->setText(QApplication::translate("MainWindow", "PushButton", 0));
        startProgram->setText(QApplication::translate("MainWindow", "PushButton", 0));
        iconOfMenu->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
